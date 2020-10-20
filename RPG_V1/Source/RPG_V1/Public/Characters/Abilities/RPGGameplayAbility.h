// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "RPG_V1\RPG_V1.h"
#include "RPGGameplayAbility.generated.h"


class USkeletalMeshComponent;

//USTRUCT()
//struct GASSHOOTER_API FAbilityMeshMontage
//{
//	GENERATED_BODY()
//
//public:
//	UPROPERTY()
//		class USkeletalMeshComponent* Mesh;
//
//	UPROPERTY()
//		class UAnimMontage* Montage;
//
//	FAbilityMeshMontage() : Mesh(nullptr), Montage(nullptr)
//	{
//	}
//
//	FAbilityMeshMontage(class USkeletalMeshComponent* InMesh, class UAnimMontage* InMontage)
//		: Mesh(InMesh), Montage(InMontage)
//	{
//	}
//};

/**
 *
 */
UCLASS()
class RPG_V1_API URPGGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
public:
	URPGGameplayAbility();

	// Abilities with this set will automatically activate when the input is pressed
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	ERPGAbilityInputID AbilityInputID = ERPGAbilityInputID::None;

	// Value to associate an ability with an slot without tying it to an automatically activated input.
	// Passive abilities won't be tied to an input so we need a way to generically associate abilities with slots.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	ERPGAbilityInputID AbilityID = ERPGAbilityInputID::None;

	// Tells an ability to activate immediately when its granted. Used for passive abilities and abilities forced on others.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
	bool ActivateAbilityOnGranted = false;


	// If an ability is marked as 'ActivateAbilityOnGranted', activate them immediately when given here
	// Epic's comment: Projects may want to initiate passives or do other "BeginPlay" type of logic here.
	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
};
