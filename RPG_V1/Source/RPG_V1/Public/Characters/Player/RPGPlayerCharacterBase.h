// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/RPGCharacterBase.h"
#include "GameplayEffectTypes.h"
#include "Inventory\RPGInventoryComponent.h"
#include "RPGPlayerCharacterBase.generated.h"


/**
 * A player or AI controlled hero character.
 */
UCLASS()
class RPG_V1_API ARPGPlayerCharacterBase : public ARPGCharacterBase
{
	GENERATED_BODY()
public:
	ARPGPlayerCharacterBase(const class FObjectInitializer& ObjectInitializer);

	//Bind functionality to target
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Only called on the Server. Calls before Server's AcknowledgePossession.
	virtual void PossessedBy(AController* NewController) override;

	class USpringArmComponent* GetCameraBoom();

	class UCameraComponent* GetFollowCamera();

	UFUNCTION(BlueprintCallable, Category = "RPG|Inventory")
	class URPGInventoryComponent* GetInventory();

	UFUNCTION(BlueprintCallable, Category = "RPG|Camera")
	float GetStartingCameraBoomArmLength();

	UFUNCTION(BlueprintCallable, Category = "RPG|Camera")
	FVector GetStartingCameraBoomLocation();

	class URPGFloatingStatusBarWidget* GetFloatingStatusBar();

	// Server handles knockdown - cancel abilities, remove effects, activate knockdown ability
	virtual void KnockDown();

	// Plays knockdown effects for all clients from KnockedDown tag listener on PlayerState
	virtual void PlayKnockDownEffects();

	// Plays revive effects for all clients from KnockedDown tag listener on PlayerState
	virtual void PlayReviveEffects();

	virtual void FinishDying() override;

	UFUNCTION(BlueprintCallable)
	void Interact();

	UFUNCTION(Server, Reliable)
	void ServerInteract();
	void ServerInteract_Implementation();
	bool ServerInteract_Validate();

	UFUNCTION(BlueprintCallable)
	void SwapInventoryItems(int SwappingIndex, int SwappedIndex);

	UFUNCTION(Server, Reliable)
	void ServerSwapInventoryItems(int SwappingIndex, int SwappedIndex);
	void ServerSwapInventoryItems_Implementation(int SwappingIndex, int SwappedIndex);
	bool ServerSwapInventoryItems_Validate(int SwappingIndex, int SwappedIndex);

	UFUNCTION(BlueprintCallable)
	void DropItem(int DroppedItem);

	UFUNCTION(Server, Reliable)
	void ServerDropItem(int DroppedItem);
	void ServerDropItem_Implementation(int DroppedItem);
	bool ServerDropItem_Validate(int DroppedItem);

protected:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RPG|Abilities")
		float ReviveDuration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RPG|Camera")
		float BaseTurnRate = 45.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RPG|Camera")
		float BaseLookUpRate = 45.0f;

	UPROPERTY(BlueprintReadOnly, Category = "RPG|Camera")
		float StartingCameraBoomArmLength;

	UPROPERTY(BlueprintReadOnly, Category = "RPG|Camera")
		FVector StartingCameraBoomLocation;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "RPG|Camera")
		class USpringArmComponent* CameraBoom;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "RPG|Camera")
		class UCameraComponent* FollowCamera;

	UPROPERTY()
		class URPGFloatingStatusBarWidget* UIFloatingStatusBar;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "RPG|UI")
		class UWidgetComponent* UIFloatingStatusBarComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RPG|UI")
		TSubclassOf<class URPGFloatingStatusBarWidget> UIFloatingStatusBarClass;

	UPROPERTY()
	class URPGInventoryComponent* InventoryComponent;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RPG|PlayerCharacterBase")
		TSubclassOf<UGameplayEffect> KnockDownEffect;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RPG|PlayerCharacterBase")
		TSubclassOf<UGameplayEffect> ReviveEffect;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "RPG|PlayerCharacterBase")
		TSubclassOf<UGameplayEffect> DeathEffect;

	bool bASCInputBound;

	FGameplayTag DeadTag;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void PostInitializeComponents() override;

	// Creates and initializes the floating status bar for heroes.
	// Safe to call many times because it checks to make sure it only executes once.
	UFUNCTION()
		void InitializeFloatingStatusBar();

	// Mouse
	void Turn(float Value);

	// Gamepad
	void TurnRate(float Value);

	// Mouse + Gamepad
	void MoveForward(float Value);

	// Mouse + Gamepad
	void MoveRight(float Value);

	// Client only
	virtual void OnRep_PlayerState() override;
	virtual void OnRep_Controller() override;

	// Called from both SetupPlayerInputComponent and OnRep_PlayerState because of a potential race condition where the PlayerController might
	// call ClientRestart which calls SetupPlayerInputComponent before the PlayerState is repped to the client so the PlayerState would be null in SetupPlayerInputComponent.
	// Conversely, the PlayerState might be repped before the PlayerController calls ClientRestart so the Actor's InputComponent would be null in OnRep_PlayerState.
	void BindASCInput();
};

