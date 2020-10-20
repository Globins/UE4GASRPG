// Fill out your copyright notice in the Description page of Project SettinRPG.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Characters/RPGCharacterBase.h"
#include "RPGPlayerController.generated.h"

class UPaperSprite;

/**
 *
 */
UCLASS()
class RPG_V1_API ARPGPlayerController : public APlayerController
{
	GENERATED_BODY()
public:

	void CreateHUD();

	class URPGHUDWidget* GetRPGHUD();

	UFUNCTION(Client, Reliable, WithValidation)
		void ShowDamageNumber(float DamageAmount, ARPGCharacterBase* TargetCharacter, FGameplayTagContainer DamageNumberTaRPG);
	void ShowDamageNumber_Implementation(float DamageAmount, ARPGCharacterBase* TargetCharacter, FGameplayTagContainer DamageNumberTaRPG);
	bool ShowDamageNumber_Validate(float DamageAmount, ARPGCharacterBase* TargetCharacter, FGameplayTagContainer DamageNumberTaRPG);

	// Simple way to RPC to the client the countdown until they respawn from the GameMode. Will be latency amount of out sync with the Server.
	UFUNCTION(Client, Reliable, WithValidation)
	void SetRespawnCountdown(float RespawnTimeRemaining);
	void SetRespawnCountdown_Implementation(float RespawnTimeRemaining);
	bool SetRespawnCountdown_Validate(float RespawnTimeRemaining);

	UFUNCTION(Client, Reliable, WithValidation)
		void ClientSetControlRotation(FRotator NewRotation);
	void ClientSetControlRotation_Implementation(FRotator NewRotation);
	bool ClientSetControlRotation_Validate(FRotator NewRotation);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RPG|UI")
	TSubclassOf<class URPGHUDWidget> UIHUDWidgetClass;

	UPROPERTY(BlueprintReadWrite, Category = "RPG|UI")
	class URPGHUDWidget* UIHUDWidget;

	// Server only
	virtual void OnPossess(APawn* InPawn) override;

	virtual void OnRep_PlayerState() override;

	UFUNCTION(Exec)
	void Kill();

	UFUNCTION(Server, Reliable)
	void ServerKill();
	void ServerKill_Implementation();
	bool ServerKill_Validate();
};