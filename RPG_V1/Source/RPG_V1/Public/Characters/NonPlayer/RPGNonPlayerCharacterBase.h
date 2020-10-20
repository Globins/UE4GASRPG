// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/RPGCharacterBase.h"
#include "GameplayEffectTypes.h"
#include "RPGNonPlayerCharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class RPG_V1_API ARPGNonPlayerCharacterBase : public ARPGCharacterBase
{
	GENERATED_BODY()
public:
	ARPGNonPlayerCharacterBase(const class FObjectInitializer& ObjectInitializer);

protected:
	// Actual hard pointer to AbilitySystemComponent
	UPROPERTY()
	class URPGAbilitySystemComponent* HardRefAbilitySystemComponent;

	// Actual hard pointer to AttributeSetBase
	UPROPERTY()
	class URPGAttributeSetBase* HardRefAttributeSetBase;

	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RPG|UI")
	TSubclassOf<class URPGFloatingStatusBarWidget> UIFloatingStatusBarClass;

	UPROPERTY()
	class URPGFloatingStatusBarWidget* UIFloatingStatusBar;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "RPG|UI")
	class UWidgetComponent* UIFloatingStatusBarComponent;

	// Tag change callbacks
	virtual void StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount);
};
