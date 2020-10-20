// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemGlobals.h"
#include "RPGAbilitySystemGlobals.generated.h"

/**
 * Holds the gameplay status types that will be commonly used throughout the game
 */
UCLASS()
class RPG_V1_API URPGAbilitySystemGlobals : public UAbilitySystemGlobals
{
	GENERATED_BODY()

public:
	URPGAbilitySystemGlobals();
	//Death Tags
	UPROPERTY()
		FGameplayTag DeadTag;
	UPROPERTY()
		FGameplayTag KnockedDownTag;
	//Interaction Tags
	UPROPERTY()
		FGameplayTag InteractingTag;
	UPROPERTY()
		FGameplayTag InteractingRemovalTag;
	//Status Tags
	UPROPERTY()
		FGameplayTag Stunnedtag;
	UPROPERTY()
		FGameplayTag SilencedTag;
	UPROPERTY()
		FGameplayTag RootedTag;
	UPROPERTY()
		FGameplayTag SlowedTag;

	static URPGAbilitySystemGlobals& RPGGet()
	{
		return dynamic_cast<URPGAbilitySystemGlobals&>(Get());
	}

	/** Should allocate a project specific GameplayEffectContext struct. Caller is responsible for deallocation */
	//virtual FGameplayEffectContext* AllocGameplayEffectContext() const override;

	virtual void InitGlobalTags() override;
};
