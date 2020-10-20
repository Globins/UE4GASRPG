// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Items\RPGItemBase.h"
#include "GameplayTagContainer.h"
#include "Components/StaticMeshComponent.h "
#include "Net/UnrealNetwork.h"
#include "RPGItemPickUpBase.generated.h"

//All Items that can be seen on the floor will be based off this blueprint, can bp directly
UCLASS()
class RPG_V1_API ARPGItemPickUpBase : public AActor
{
	GENERATED_BODY()
	
public:
	ARPGItemPickUpBase();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Check if pawn can use this pickup
	virtual bool CanBePickedUp(ARPGCharacterBase* TestCharacter) const;

	UFUNCTION(BlueprintNativeEvent, Meta = (DisplayName = "CanBePickedUp"))
	bool K2_CanBePickedUp(ARPGCharacterBase* TestCharacter) const;
	virtual bool K2_CanBePickedUp_Implementation(ARPGCharacterBase* TestCharacter) const;

	UFUNCTION(BlueprintCallable, Category = "RPGPickup")
	void PickupItem(ARPGCharacterBase* Pawn);

	UFUNCTION(Category = "RPGPickup")
	void SetItemData(URPGItemBase* NewItemData, int Quantity);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//UFUNCTION(Client, Reliable, WithValidation)
	//	void SetRespawnCountdown(float RespawnTimeRemaining);
	//void SetRespawnCountdown_Implementation(float RespawnTimeRemaining);
	//bool SetRespawnCountdown_Validate(float RespawnTimeRemaining);

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "RPGPickup")
	class UCapsuleComponent* CollisionComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RPGPickup")
		class UStaticMeshComponent* MeshComp;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_IsActive, Category = "RPGPickup")
	bool bIsActive;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPGPickup")
	bool bCanRespawn;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPGPickup")
	float RespawnTime;

	//How many items are in this pickup
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPGPickup")
	int Quantity;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPGPickup")
	FGameplayTagContainer RestrictedPickupTags;

	// Sound played when player picks it up
	UPROPERTY(EditDefaultsOnly, Category = "RPGPickup")
	class USoundCue* PickupSound;

	// Exposed Item to base off of when exposed
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPGPickup")
	URPGItemBase* ItemData;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPGPickup")
	TArray<TSubclassOf<class URPGGameplayAbility>> AbilityClasses;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPGPickup")
	TArray<TSubclassOf<class UGameplayEffect>> EffectClasses;

	// The character who has picked up this pickup
	UPROPERTY(BlueprintReadOnly, Replicated)
	ARPGCharacterBase* PickedUpBy;

	FTimerHandle TimerHandle_RespawnPickup;

	virtual void GivePickupTo(ARPGCharacterBase* Pawn);

	// Show effects when pickup disappears
	virtual void OnPickedUp();

	// Blueprint implementable effects
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "OnPickedUp"))
	void K2_OnPickedUp();

	virtual void RespawnPickup();

	// Show effects when pickup appears
	virtual void OnRespawned();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DestroyActor();
	bool Multicast_DestroyActor_Validate();
	void Multicast_DestroyActor_Implementation();

	// Blueprint implementable effects
	UFUNCTION(BlueprintImplementableEvent, Meta = (DisplayName = "OnRespawned"))
	void K2_OnRespawned();

	UFUNCTION()
	virtual void OnRep_IsActive();
};
