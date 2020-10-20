// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "RPGDamageExeCalculation.generated.h"

/**
 * 
 */
UCLASS()
class RPG_V1_API URPGDamageExeCalculation : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
public:
	URPGDamageExeCalculation();

	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;
};
