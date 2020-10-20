// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters\Player\RPGPlayerCharacterBase.h"
#include "AI/RPGPlayerAIController.h"

#include "Camera/CameraComponent.h"

#include "Characters/Abilities/AttributeSets/RPGAttributeSetBase.h"
#include "Characters/Abilities/RPGAbilitySystemComponent.h"

#include "Items/RPGItemPickUpBase.h"

#include "Components/CapsuleComponent.h"
#include "Components/DecalComponent.h"
#include "Components/WidgetComponent.h"

#include "GameFramework/SpringArmComponent.h"

#include "RPG_V1/RPG_V1GameModeBase.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

#include "Player/RPGPlayerController.h"
#include "Player/RPGPlayerState.h"

#include "Inventory/RPGExternalStorageActorBase.h"

#include "UI/RPGFloatingStatusBarWidget.h"
#include "UObject/ConstructorHelpers.h"

ARPGPlayerCharacterBase::ARPGPlayerCharacterBase(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	bASCInputBound = false;
	ReviveDuration = 4.0f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(FName("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);
	FollowCamera->FieldOfView = 80.0f;
	FollowCamera->bUsePawnControlRotation = false;

	// Makes sure that the animations play on the Server so that we can use bone and socket transforms
	// to do things like spawning projectiles and other FX.
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMesh()->SetCollisionProfileName(FName("NoCollision"));

	UIFloatingStatusBarComponent = CreateDefaultSubobject<UWidgetComponent>(FName("UIFloatingStatusBarComponent"));
	UIFloatingStatusBarComponent->SetupAttachment(RootComponent);
	UIFloatingStatusBarComponent->SetRelativeLocation(FVector(0, 0, 120));
	UIFloatingStatusBarComponent->SetWidgetSpace(EWidgetSpace::Screen);
	UIFloatingStatusBarComponent->SetDrawSize(FVector2D(500, 500));

	UIFloatingStatusBarClass = StaticLoadClass(UObject::StaticClass(), nullptr, TEXT("/Game/RPG_V1_Content/UI/GameUI/BP_UI_FloatingStatusBar.BP_UI_FloatingStatusBar_C"));
	if (!UIFloatingStatusBarClass)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Failed to find UIFloatingStatusBarClass."));
		}
	}

	InventoryComponent = CreateDefaultSubobject<URPGInventoryComponent>(FName("InventoryComponent"));


	AutoPossessAI = EAutoPossessAI::PlacedInWorld;
	AIControllerClass = ARPGPlayerAIController::StaticClass();

	//KnockedDownTag = FGameplayTag::RequestGameplayTag("State.KnockedDown");
}
void ARPGPlayerCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ARPGPlayerCharacterBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ARPGPlayerCharacterBase::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ARPGPlayerCharacterBase::Turn);
	PlayerInputComponent->BindAxis("TurnRate", this, &ARPGPlayerCharacterBase::TurnRate);

	// Bind player input to the AbilitySystemComponent. Also called in OnRep_PlayerState because of a potential race condition.
	BindASCInput();
}
//Server Only
void ARPGPlayerCharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	ARPGPlayerState* PS = GetPlayerState<ARPGPlayerState>();
	if (PS)
	{
		// Set the ASC on the Server. Clients do this in OnRep_PlayerState()
		AbilitySystemComponent = Cast<URPGAbilitySystemComponent>(PS->GetAbilitySystemComponent());
		// AI won't have PlayerControllers so we can init again here just to be sure. No harm in initing twice for heroes that have PlayerControllers.
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, this);

		// Set the AttributeSetBase for convenience attribute functions
		AttributeSetBase = PS->GetAttributeSetBase();

		// If we handle players disconnecting and rejoining in the future, we'll have to change this so that possession from rejoining doesn't reset attributes.
		// For now assume possession = spawn/respawn.
		InitializeAttributes();
		AddStartupEffects();
		AddCharacterAbilities();

		ARPGPlayerController* PC = Cast<ARPGPlayerController>(GetController());
		if (PC)
		{
			PC->CreateHUD();
		}
		// Remove Dead tag
		AbilitySystemComponent->RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer(DeadTag));

		SetHealth(GetMaxHealth());
		SetMana(GetMaxMana());
		SetShield(GetMaxShield());

		InitializeFloatingStatusBar();
	}
}
void ARPGPlayerCharacterBase::KnockDown()
{
}
void ARPGPlayerCharacterBase::PlayKnockDownEffects()
{
}
void ARPGPlayerCharacterBase::PlayReviveEffects()
{
}
void ARPGPlayerCharacterBase::FinishDying()
{
	//if (GetLocalRole() == ROLE_Authority)
	//{
	//	ARPG_V1GameModeBase* GM = Cast<ARPG_V1GameModeBase>(GetWorld()->GetAuthGameMode());

	//	if (GM)
	//	{
	//		GM->HeroDied(GetController());
	//	}
	//}

	Super::FinishDying();
}
void ARPGPlayerCharacterBase::ServerInteract_Implementation()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		TArray<AActor*> Interactables;
		GetOverlappingActors(Interactables, TSubclassOf<ARPGItemPickUpBase>());
		for (auto Interactable : Interactables)
		{
			if (ARPGItemPickUpBase* item = Cast<ARPGItemPickUpBase>(Interactable))
			{
				item->PickupItem(this);
			}
		}
		TArray<AActor*> Storage;
		GetOverlappingActors(Storage, TSubclassOf<ARPGExternalStorageActorBase>());
		for (auto found : Storage)
		{
			if (ARPGExternalStorageActorBase* chest = Cast<ARPGExternalStorageActorBase>(found))
			{

			}
		}
	}
}
bool ARPGPlayerCharacterBase::ServerInteract_Validate()
{
	return true;
}

void ARPGPlayerCharacterBase::ServerSwapInventoryItems_Implementation(int SwappingIndex, int SwappedIndex)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		InventoryComponent->SwapItemsInInventory(SwappingIndex, SwappedIndex);
	}
}
bool ARPGPlayerCharacterBase::ServerSwapInventoryItems_Validate(int SwappingIndex, int SwappedIndex)
{
	return true;
}

void ARPGPlayerCharacterBase::ServerDropItem_Implementation(int DroppedItem)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		InventoryComponent->DropItemAtIndex(DroppedItem);
	}
}
bool ARPGPlayerCharacterBase::ServerDropItem_Validate(int DroppedItem)
{
	return true;
}

void ARPGPlayerCharacterBase::InitializeFloatingStatusBar()
{
	// Only create once
	if (UIFloatingStatusBar || !IsValid(AbilitySystemComponent))
	{
		return;
	}
	if (!GetPlayerState())
	{
		return;
	}
	// Setup FloatingStatusBar UI for Locally Owned Players only, not AI or the server's copy of the PlayerControllers
	ARPGPlayerController* PC = Cast<ARPGPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (PC && PC->IsLocalPlayerController())
	{
		if (UIFloatingStatusBarClass)
		{
			UIFloatingStatusBar = CreateWidget<URPGFloatingStatusBarWidget>(PC, UIFloatingStatusBarClass);
			if (UIFloatingStatusBar && UIFloatingStatusBarComponent)
			{
				UIFloatingStatusBarComponent->SetWidget(UIFloatingStatusBar);

				// Setup the floating status bar
				UIFloatingStatusBar->SetHealthPercentage(GetHealth() / GetMaxHealth());
				UIFloatingStatusBar->SetManaPercentage(GetMana() / GetMaxMana());
				UIFloatingStatusBar->OwningCharacter = this;
			}
		}
	}
}
URPGFloatingStatusBarWidget* ARPGPlayerCharacterBase::GetFloatingStatusBar()
{
	return UIFloatingStatusBar;
}

void ARPGPlayerCharacterBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

USpringArmComponent* ARPGPlayerCharacterBase::GetCameraBoom()
{
	return CameraBoom;
}
UCameraComponent* ARPGPlayerCharacterBase::GetFollowCamera()
{
	return FollowCamera;
}
URPGInventoryComponent* ARPGPlayerCharacterBase::GetInventory()
{
	return InventoryComponent;
}
float ARPGPlayerCharacterBase::GetStartingCameraBoomArmLength()
{
	return StartingCameraBoomArmLength;
}
FVector ARPGPlayerCharacterBase::GetStartingCameraBoomLocation()
{
	return StartingCameraBoomLocation;
}

void ARPGPlayerCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	InitializeFloatingStatusBar();
	StartingCameraBoomArmLength = CameraBoom->TargetArmLength;
	StartingCameraBoomLocation = CameraBoom->GetRelativeLocation();
}
void ARPGPlayerCharacterBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}


void ARPGPlayerCharacterBase::Turn(float Value)
{
	if (IsAlive())
	{
		AddControllerYawInput(Value);
	}
}
void ARPGPlayerCharacterBase::TurnRate(float Value)
{
	if (IsAlive())
	{
		AddControllerYawInput(Value * BaseTurnRate * GetWorld()->DeltaTimeSeconds);
	}
}
void ARPGPlayerCharacterBase::MoveForward(float Value)
{
	AddMovementInput(UKismetMathLibrary::GetForwardVector(FRotator(0, GetControlRotation().Yaw, 0)), Value);
}
void ARPGPlayerCharacterBase::MoveRight(float Value)
{
	AddMovementInput(UKismetMathLibrary::GetForwardVector(FRotator(0, GetControlRotation().Yaw, 0)), Value);
}


//Client Only
void ARPGPlayerCharacterBase::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	ARPGPlayerState* PS = GetPlayerState<ARPGPlayerState>();
	if (PS)
	{
		// Set the ASC for clients. Server does this in PossessedBy.
		AbilitySystemComponent = Cast<URPGAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// Init ASC Actor Info for clients. Server will init its ASC when it possesses a new Actor.
		AbilitySystemComponent->InitAbilityActorInfo(PS, this);

		// Bind player input to the AbilitySystemComponent. Also called in SetupPlayerInputComponent because of a potential race condition.
		BindASCInput();

		// Set the AttributeSetBase for convenience attribute functions
		AttributeSetBase = PS->GetAttributeSetBase();

		// If we handle players disconnecting and rejoining in the future, we'll have to change this so that posession from rejoining doesn't reset attributes.
		// For now assume possession = spawn/respawn.
		InitializeAttributes();

		ARPGPlayerController* PC = Cast<ARPGPlayerController>(GetController());
		if (PC)
		{
			PC->CreateHUD();
		}
		InitializeFloatingStatusBar();

		// Respawn specific things that won't affect first possession.

		// Forcibly set the DeadTag count to 0
		AbilitySystemComponent->SetTagMapCount(DeadTag, 0);

		// Set Health/Mana/Stamina to their max. This is only necessary for *Respawn*.
		SetHealth(GetMaxHealth());
		SetMana(GetMaxMana());
		SetShield(GetMaxShield());
	}
}
void ARPGPlayerCharacterBase::OnRep_Controller()
{
	Super::OnRep_Controller();
}

void ARPGPlayerCharacterBase::BindASCInput()
{
	if (!bASCInputBound && IsValid(AbilitySystemComponent) && IsValid(InputComponent))
	{
		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, FGameplayAbilityInputBinds(FString("ConfirmTarget"),
			FString("CancelTarget"), FString("ERPGAbilityInputID"), static_cast<int32>(ERPGAbilityInputID::Confirm), static_cast<int32>(ERPGAbilityInputID::Cancel)));

		bASCInputBound = true;
	}
}

void ARPGPlayerCharacterBase::Interact()
{
	if (GetLocalRole() != ROLE_Authority)
	{

	}
	ServerInteract();
}

void ARPGPlayerCharacterBase::SwapInventoryItems(int SwappingIndex, int SwappedIndex)
{
	if (GetLocalRole() != ROLE_Authority)
	{
		InventoryComponent->SwapItemsInInventory(SwappingIndex, SwappedIndex);
	}
	ServerSwapInventoryItems(SwappingIndex, SwappedIndex);
}

void ARPGPlayerCharacterBase::DropItem(int DroppedItem)
{
	if (GetLocalRole() != ROLE_Authority)
	{
		InventoryComponent->DropItemAtIndex(DroppedItem);
	}
	ServerDropItem(DroppedItem);
}