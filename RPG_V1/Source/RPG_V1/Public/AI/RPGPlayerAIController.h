// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "RPGPlayerAIController.generated.h"

/**
 * 
 */
UCLASS()
class RPG_V1_API ARPGPlayerAIController : public AAIController
{
	GENERATED_BODY()
public:
	ARPGPlayerAIController();

protected:
	// Server only
	virtual void OnPossess(APawn* InPawn) override;
};
