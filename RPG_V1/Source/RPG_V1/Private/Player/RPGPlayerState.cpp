// Fill out your copyright notice in the Description page of Project SettinRPG.


#include "Player\RPGPlayerState.h"
#include "Characters/Abilities/AttributeSets/RPGAttributeSetBase.h"
#include "Characters/Abilities/RPGAbilitySystemComponent.h"
#include "Characters/Abilities/RPGAbilitySystemGlobals.h"
#include "Characters/Player/RPGPlayerCharacterBase.h"
#include "Player/RPGPlayerController.h"
#include "UI/RPGFloatingStatusBarWidget.h"
#include "UI/RPGHUDWidget.h"

ARPGPlayerState::ARPGPlayerState()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<URPGAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Minimal Mode means that no GameplayEffects will replicate. They will only live on the Server. Attributes, GameplayTags, and GameplayCues will still replicate to us.
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	// Create the attribute set, this replicates by default
	// Adding it as a subobject of the owning actor of an AbilitySystemComponent
	// automatically registers the AttributeSet with the AbilitySystemComponent
	AttributeSetBase = CreateDefaultSubobject<URPGAttributeSetBase>(TEXT("AttributeSetBase"));

	// Set PlayerState's NetUpdateFrequency to the same as the Character.
	// Default is very low for PlayerStates and introduces perceived lag in the ability system.
	// 100 is probably way too high for a shipping game, you can adjust to fit your needs.
	NetUpdateFrequency = 100.0f;

	DeadTag = FGameplayTag::RequestGameplayTag("State.Dead");
	KnockedDownTag = FGameplayTag::RequestGameplayTag("State.KnockedDown");
}

UAbilitySystemComponent* ARPGPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
URPGAttributeSetBase* ARPGPlayerState::GetAttributeSetBase() const
{
	return AttributeSetBase;
}

bool ARPGPlayerState::IsAlive() const
{
	return GetHealth() > 0.0f;
}

void ARPGPlayerState::ShowAbilityConfirmPrompt(bool bShowPrompt)
{
	ARPGPlayerController* PC = Cast<ARPGPlayerController>(GetOwner());
	if (PC)
	{
		URPGHUDWidget* HUD = PC->GetRPGHUD();
		if (HUD)
		{
			HUD->ShowAbilityConfirmPrompt(bShowPrompt);
		}
	}
}

void ARPGPlayerState::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		// Attribute change callbacks
		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthAttribute()).AddUObject(this, &ARPGPlayerState::HealthChanged);
		// Tag change callbacks
		AbilitySystemComponent->RegisterGameplayTagEvent(KnockedDownTag, EGameplayTagEventType::NewOrRemoved).AddUObject(this, &ARPGPlayerState::KnockDownTagChanged);
	}
}

void ARPGPlayerState::HealthChanged(const FOnAttributeChangeData& Data)
{
	//// Check for and handle knockdown and death
	ARPGPlayerCharacterBase* player = Cast<ARPGPlayerCharacterBase>(GetPawn());
	if (IsValid(player) && !IsAlive() && !AbilitySystemComponent->HasMatchingGameplayTag(DeadTag))
	{
		if (player)
		{
			if (!AbilitySystemComponent->HasMatchingGameplayTag(KnockedDownTag))
			{
				//player->KnockDown();
			}
			else
			{
				player->Die();
			}
		}
	}
}
void ARPGPlayerState::KnockDownTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	//ARPGHeroCharacter* Hero = Cast<ARPGHeroCharacter>(GetPawn());
	//if (!IsValid(Hero))
	//{
	//	return;
	//}

	//if (NewCount > 0)
	//{
	//	Hero->PlayKnockDownEffects();
	//}
	//else if (NewCount < 1 && !AbilitySystemComponent->HasMatchingGameplayTag(DeadTag))
	//{
	//	Hero->PlayReviveEffects();
	//}
}

float ARPGPlayerState::GetHealth() const
{
	return AttributeSetBase->GetHealth();
}
float ARPGPlayerState::GetMaxHealth() const
{
	return AttributeSetBase->GetMaxHealth();
}
float ARPGPlayerState::GetHealthRegenRate() const
{
	return AttributeSetBase->GetHealthRegenRate();
}
float ARPGPlayerState::GetMana() const
{
	return AttributeSetBase->GetMana();
}
float ARPGPlayerState::GetMaxMana() const
{
	return AttributeSetBase->GetMaxMana();
}
float ARPGPlayerState::GetManaRegenRate() const
{
	return AttributeSetBase->GetManaRegenRate();
}
float ARPGPlayerState::GetShield() const
{
	return AttributeSetBase->GetShield();
}
float ARPGPlayerState::GetMaxShield() const
{
	return AttributeSetBase->GetMaxShield();
}
float ARPGPlayerState::GetShieldRegenRate() const
{
	return AttributeSetBase->GetShieldRegenRate();
}
float ARPGPlayerState::GetArmor() const
{
	return AttributeSetBase->GetArmor();
}
float ARPGPlayerState::GetMoveSpeed() const
{
	return AttributeSetBase->GetMoveSpeed();
}
float ARPGPlayerState::GetAttackSpeed() const
{
	return AttributeSetBase->GetAttackSpeed();
}
int32 ARPGPlayerState::GetGold() const
{
	return AttributeSetBase->GetGold();
}
int32 ARPGPlayerState::GetGoldBounty() const
{
	return AttributeSetBase->GetGoldBounty();
}
