// Fill out your copyright notice in the Description page of Project SettinRPG.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "RPGPlayerState.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRPGOnGameplayAttributeValueChangedDelegate, FGameplayAttribute, Attribute, float, NewValue, float, OldValue);

/**
 * 
 */
UCLASS()
class RPG_V1_API ARPGPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ARPGPlayerState();

	// Implement IAbilitySystemInterface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	class URPGAttributeSetBase* GetAttributeSetBase() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState")
	bool IsAlive() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|UI")
	void ShowAbilityConfirmPrompt(bool bShowPrompt);

	//UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|UI")
	//void ShowInteractionPrompt(float InteractionDuration);

	//UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|UI")
	//void HideInteractionPrompt();

	//UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|UI")
	//void StartInteractionTimer(float InteractionDuration);

	//// Interaction interrupted, cancel and hide HUD interact timer
	//UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|UI")
	//void StopInteractionTimer();

	/**
	* Getters for attributes from GDAttributeSetBase. Returns Current Value unless otherwise specified.
	*/

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	float GetHealthRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	float GetMana() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	float GetMaxMana() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	float GetManaRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	float GetShield() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	float GetMaxShield() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	float GetShieldRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	float GetArmor() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	float GetMoveSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	float GetAttackSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	int32 GetGold() const;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGPlayerState|Attributes")
	int32 GetGoldBounty() const;

protected:
	FGameplayTag DeadTag;
	FGameplayTag KnockedDownTag;

	UPROPERTY()
	class URPGAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class URPGAttributeSetBase* AttributeSetBase;

	// Attribute changed delegate handles
	FDelegateHandle HealthChangedDelegateHandle;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Attribute changed callbacks
	virtual void HealthChanged(const FOnAttributeChangeData& Data);

	// Tag changed callbacks
	virtual void KnockDownTagChanged(const FGameplayTag CallbackTag, int32 NewCount);
};
