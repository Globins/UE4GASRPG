// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RPGHUDWidget.generated.h"

class UPaperSprite;
class UTexture2D;

/**
 * 
 */
UCLASS()
class RPG_V1_API URPGHUDWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void ShowAbilityConfirmPrompt(bool bShowText);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetRespawnCountdown(float RespawnTimeRemaining);

	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	//void ShowInteractionPrompt(float InteractionDuration);
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	//void HideInteractionPrompt();
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	//void StartInteractionTimer(float InteractionDuration);
	//// Interaction interrupted, cancel and hide HUD interact timer
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	//void StopInteractionTimer();

	/**
	* Attribute setters
	*/

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMaxHealth(float MaxHealth);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCurrentHealth(float CurrentHealth);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetHealthPercentage(float HealthPercentage);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetHealthRegenRate(float HealthRegenRate);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMaxMana(float MaxMana);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCurrentMana(float CurrentMana);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetManaPercentage(float ManaPercentage);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetManaRegenRate(float ManaRegenRate);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetMaxShield(float MaxShield);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCurrentShield(float CurrentShield);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetShieldPercentage(float ShieldPercentage);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetShieldRegenRate(float ShieldRegenRate);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetGold(int32 Gold);
};
