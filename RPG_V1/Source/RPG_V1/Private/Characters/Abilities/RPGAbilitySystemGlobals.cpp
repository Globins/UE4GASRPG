// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Abilities/RPGAbilitySystemGlobals.h"

URPGAbilitySystemGlobals::URPGAbilitySystemGlobals()
{

}
//FGameplayEffectContext* UGSAbilitySystemGlobals::AllocGameplayEffectContext() const
//{
//	return new FGSGameplayEffectContext();
//}

void URPGAbilitySystemGlobals::InitGlobalTags()
{
	Super::InitGlobalTags();

	DeadTag = FGameplayTag::RequestGameplayTag("State.Dead");
	KnockedDownTag = FGameplayTag::RequestGameplayTag("State.KnockedDown");
	InteractingTag = FGameplayTag::RequestGameplayTag("State.Interacting");
	InteractingRemovalTag = FGameplayTag::RequestGameplayTag("State.InteractingRemoval");
	Stunnedtag = FGameplayTag::RequestGameplayTag("State.Debuff.Stunned");
	SlowedTag = FGameplayTag::RequestGameplayTag("State.Debuff.Slowed");
	SilencedTag = FGameplayTag::RequestGameplayTag("State.Debuff.Silenced");
	RootedTag = FGameplayTag::RequestGameplayTag("State.Debuff.Rooted");
}