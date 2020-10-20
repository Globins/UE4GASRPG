// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RPGExternalStorageActorBase.generated.h"

UCLASS()
class RPG_V1_API ARPGExternalStorageActorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARPGExternalStorageActorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
