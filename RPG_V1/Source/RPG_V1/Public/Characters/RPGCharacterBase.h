// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework\Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "RPG_V1\RPG_V1.h"
#include "TimerManager.h"
#include "RPGCharacterBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterBaseHitReactDelegate, ERPGHitReactDirection, Direction);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharacterDiedDelegate, ARPGCharacterBase*, Character);

USTRUCT()
struct RPG_V1_API FRPGDamageNumber
{
	GENERATED_USTRUCT_BODY()

	float DamageAmount;

	FGameplayTagContainer Tags;

	FRPGDamageNumber() {}

	FRPGDamageNumber(float InDamageAmount, FGameplayTagContainer InTags) : DamageAmount(InDamageAmount)
	{
		// Copy tag container
		Tags.AppendTags(InTags);
	}
};

/**
* The base Character class for the game. Everything with an AbilitySystemComponent in this game will inherit from this class.
* This class should not be instantiated and instead subclassed. Will be AI Controlled.
*/
UCLASS()
class RPG_V1_API ARPGCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARPGCharacterBase(const class FObjectInitializer& ObjectInitializer);

	// Set the Hit React direction in the Animation Blueprint
	UPROPERTY(BlueprintAssignable, Category = "RPG|RPGCharacter")
	FCharacterBaseHitReactDelegate ShowHitReact;

	UPROPERTY(BlueprintAssignable, Category = "RPG|RPGCharacter")
	FCharacterDiedDelegate OnCharacterDied;

	// Implement IAbilitySystemInterface
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintCallable, Category = "RPG|RPGCharacter")
	virtual bool IsAlive() const;

	// Removes all CharacterAbilities. Can only be called by the Server. Removing on the Server will remove from Client too.
	virtual void RemoveCharacterAbilities();

	virtual void Die();
	UFUNCTION(BlueprintCallable, Category = "RPG|RPGCharacter")
	virtual void FinishDying();

	virtual void AddDamageNumber(float Damage, FGameplayTagContainer DamageNumberTags);


	UFUNCTION(BlueprintCallable)
	ERPGHitReactDirection GetHitReactDirection(const FVector& ImpactPoint);

	UFUNCTION(NetMulticast, Reliable, WithValidation)
	virtual void PlayHitReact(FGameplayTag HitDirection, AActor* DamageCauser);
	virtual void PlayHitReact_Implementation(FGameplayTag HitDirection, AActor* DamageCauser);
	virtual bool PlayHitReact_Validate(FGameplayTag HitDirection, AActor* DamageCauser);


	// Switch on AbilityID to return individual ability levels. Hardcoded to 1 for every ability in this project.
	UFUNCTION(BlueprintCallable, Category = "RPG|RPGCharacter")
	virtual int32 GetAbilityLevel(ERPGAbilityInputID AbilityID) const;
	/**
	* Getters for attributes from RPGAttributeSetBase
	**/
	UFUNCTION(BlueprintCallable, Category = "RPG|RPGCharacter|Attributes")
	float GetHealth() const;
	UFUNCTION(BlueprintCallable, Category = "RPG|RPGCharacter|Attributes")
	float GetMaxHealth() const;
	UFUNCTION(BlueprintCallable, Category = "RPG|RPGCharacter|Attributes")
	float GetMana() const;
	UFUNCTION(BlueprintCallable, Category = "RPG|RPGCharacter|Attributes")
	float GetMaxMana() const;
	UFUNCTION(BlueprintCallable, Category = "RPG|RPGCharacter|Attributes")
	float GetShield() const;
	UFUNCTION(BlueprintCallable, Category = "RPG|RPGCharacter|Attributes")
	float GetMaxShield() const;
	// Gets the Current value of MoveSpeed
	UFUNCTION(BlueprintCallable, Category = "RPG|RPGCharacter|Attributes")
	float GetMoveSpeed() const;
	// Gets the Base value of MoveSpeed
	UFUNCTION(BlueprintCallable, Category = "RPG|RPGCharacter|Attributes")
	float GetMoveSpeedBaseValue() const;
	UFUNCTION(BlueprintCallable, Category = "RPG|RPGCharacter|Attributes")
	float GetAttackSpeed() const;
	UFUNCTION(BlueprintCallable, Category = "RPG|RPGCharacter|Attributes")
	float GetAttackBaseValue() const;
protected:
	FGameplayTag HitDirectionFrontTag;
	FGameplayTag HitDirectionBackTag;
	FGameplayTag HitDirectionRightTag;
	FGameplayTag HitDirectionLeftTag;
	FGameplayTag DeadTag;
	FGameplayTag EffectRemoveOnDeathTag;

	TArray<FRPGDamageNumber> DamageNumberQueue;
	FTimerHandle DamageNumberTimer;

	// Reference to the ASC. It will live on the PlayerState or here if the character doesn't have a PlayerState.
	UPROPERTY()
	class URPGAbilitySystemComponent* AbilitySystemComponent;
	// Reference to the AttributeSetBase. It will live on the PlayerState or here if the character doesn't have a PlayerState.
	UPROPERTY()
	class URPGAttributeSetBase* AttributeSetBase;


	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPG|RPGCharacter")
	FText CharacterName;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPG|Animation")
	UAnimMontage* DeathMontage;
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPG|Audio")
	class USoundCue* DeathSound;

	// Default abilities for this Character. These will be removed on Character death and regiven if Character respawns.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPG|Abilities")
	TArray<TSubclassOf<class URPGGameplayAbility>> CharacterAbilities;

	// Default attributes for a character for initializing on spawn/respawn.
	// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPG|Abilities")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;

	// These effects are only applied one time on startup
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "RPG|Abilities")
	TArray<TSubclassOf<class UGameplayEffect>> StartupEffects;

	UPROPERTY(EditAnywhere, Category = "RPG|UI")
	TSubclassOf<class URPGDamageTextWidgetComponent> DamageNumberClass;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Grant abilities on the Server. The Ability Specs will be replicated to the owning client.
	virtual void AddCharacterAbilities();
	// Initialize the Character's attributes. Must run on Server but we run it on Client too
	// so that we don't have to wait. The Server's replication to the Client won't matter since
	// the values should be the same.
	virtual void InitializeAttributes();
	virtual void AddStartupEffects();
	virtual void ShowDamageNumber();

	/**
	* Setters for Attributes. Only use these in special cases like Respawning, otherwise use a GE to change Attributes.
	* These change the Attribute's Base Value.
	*/
	virtual void SetHealth(float Health);
	virtual void SetMana(float Mana);
	virtual void SetShield(float Shield);
};
