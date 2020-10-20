// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/RPGItemPickUpBase.h"
#include "AbilitySystemComponent.h"
#include "Characters/Abilities/RPGAbilitySystemGlobals.h"
#include "Characters/Abilities/RPGGameplayAbility.h"
#include "Characters/RPGCharacterBase.h"
#include "Components/CapsuleComponent.h"
#include "Inventory\RPGInventoryComponent.h"
#include "RPG_V1/RPG_V1.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Sound/SoundCue.h"
#include "TimerManager.h"

// Sets default values
ARPGItemPickUpBase::ARPGItemPickUpBase()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	bIsActive = true;
	bCanRespawn = false;
	RespawnTime = 5.0f;
	Quantity = 1;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(FName("MeshComp"));
	RootComponent = MeshComp;

	CollisionComp = CreateDefaultSubobject<UCapsuleComponent>(FName("CollisionComp"));
	CollisionComp->InitCapsuleSize(100.0f, 100.0f);
	CollisionComp->SetCollisionObjectType(COLLISION_PICKUP);
	CollisionComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	CollisionComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	CollisionComp->SetupAttachment(RootComponent);

	RestrictedPickupTags.AddTag(FGameplayTag::RequestGameplayTag("State.Dead"));
	RestrictedPickupTags.AddTag(FGameplayTag::RequestGameplayTag("State.KnockedDown"));
}

void ARPGItemPickUpBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ARPGItemPickUpBase, bIsActive);
	DOREPLIFETIME(ARPGItemPickUpBase, PickedUpBy);
}

bool ARPGItemPickUpBase::CanBePickedUp(ARPGCharacterBase* TestCharacter) const
{
	return bIsActive && TestCharacter && TestCharacter->IsAlive() && !IsPendingKill() && !TestCharacter->GetAbilitySystemComponent()->HasAnyMatchingGameplayTags(RestrictedPickupTags) && K2_CanBePickedUp(TestCharacter);
}

bool ARPGItemPickUpBase::K2_CanBePickedUp_Implementation(ARPGCharacterBase* TestCharacter) const
{
	return true;
}

void ARPGItemPickUpBase::PickupItem(ARPGCharacterBase* Pawn)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		if (CanBePickedUp(Pawn))
		{
			GivePickupTo(Pawn);
			PickedUpBy = Pawn;
			bIsActive = false;
			OnPickedUp();

			if (bCanRespawn && RespawnTime > 0.0f)
			{
				GetWorldTimerManager().SetTimer(TimerHandle_RespawnPickup, this, &ARPGItemPickUpBase::RespawnPickup, RespawnTime, false);
			}
			else
			{
				Multicast_DestroyActor();
			}
		}
	}
}

void ARPGItemPickUpBase::SetItemData(URPGItemBase* NewItemData, int NewQuantity)
{
	if (NewItemData)
	{
		ItemData = NewItemData;
		MeshComp->SetStaticMesh(ItemData->ItemMesh);
		Quantity = NewQuantity;
	}
}

void ARPGItemPickUpBase::BeginPlay()
{
	Super::BeginPlay();
	if (ItemData)
	{
		MeshComp->SetStaticMesh(ItemData->ItemMesh);
	}
}

void ARPGItemPickUpBase::GivePickupTo(ARPGCharacterBase* Pawn)
{
	URPGInventoryComponent* PawnInventory = Pawn->FindComponentByClass<URPGInventoryComponent>();
	if (PawnInventory)
	{
		PawnInventory->AddItemToInventory(ItemData, Quantity);
	}
	else
	{
		//UAbilitySystemComponent* ASC = Pawn->GetAbilitySystemComponent();

		//if (!ASC)
		//{
		//	UE_LOG(LogTemp, Error, TEXT("%s Pawn's ASC is null."), *FString(__FUNCTION__));
		//	return;
		//}

		//for (TSubclassOf<UGSGameplayAbility> AbilityClass : AbilityClasses)
		//{
		//	if (!AbilityClass)
		//	{
		//		continue;
		//	}

		//	FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(AbilityClass, 1, static_cast<int32>(AbilityClass.GetDefaultObject()->AbilityInputID), this);
		//	ASC->GiveAbilityAndActivateOnce(AbilitySpec);
		//}

		//FGameplayEffectContextHandle EffectContext = ASC->MakeEffectContext();
		//EffectContext.AddSourceObject(this);

		//for (TSubclassOf<UGameplayEffect> EffectClass : EffectClasses)
		//{
		//	if (!EffectClass)
		//	{
		//		continue;
		//	}

		//	FGameplayEffectSpecHandle NewHandle = ASC->MakeOutgoingSpec(EffectClass, Pawn->GetCharacterLevel(), EffectContext);

		//	if (NewHandle.IsValid())
		//	{
		//		ASC->ApplyGameplayEffectSpecToSelf(*NewHandle.Data.Get());
		//	}
		//}
	}
}

void ARPGItemPickUpBase::OnPickedUp()
{
	K2_OnPickedUp();

	if (PickupSound && PickedUpBy)
	{
		UGameplayStatics::SpawnSoundAttached(PickupSound, PickedUpBy->GetRootComponent());
	}
}

void ARPGItemPickUpBase::RespawnPickup()
{
	bIsActive = true;
	PickedUpBy = NULL;
	OnRespawned();

	TSet<AActor*> OverlappingPawns;
	GetOverlappingActors(OverlappingPawns, ARPGCharacterBase::StaticClass());

	for (AActor* OverlappingPawn : OverlappingPawns)
	{
		PickupItem(CastChecked<ARPGCharacterBase>(OverlappingPawn));
	}
}

void ARPGItemPickUpBase::OnRespawned()
{
	K2_OnRespawned();
}

bool ARPGItemPickUpBase::Multicast_DestroyActor_Validate()
{
	return true;
}

void ARPGItemPickUpBase::Multicast_DestroyActor_Implementation()
{
	Destroy();
}


void ARPGItemPickUpBase::OnRep_IsActive()
{
	if (bIsActive)
	{
		OnRespawned();
	}
	else
	{
		OnPickedUp();
	}
}
