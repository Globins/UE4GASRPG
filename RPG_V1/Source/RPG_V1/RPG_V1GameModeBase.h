// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RPG_V1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class RPG_V1_API ARPG_V1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	ARPG_V1GameModeBase();

	void HeroDied(AController* Controller);

protected:
	float RespawnDelay;

	TSubclassOf<class ARPGPlayerCharacterBase> HeroClass;

	AActor* SpawnPoint;

	virtual void BeginPlay() override;

	void RespawnHero(AController* Controller);
};
 