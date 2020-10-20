// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Abilities/RPGAbilitySystemComponent.h"
#include "Characters/Abilities/RPGAbilitySystemGlobals.h"

URPGAbilitySystemComponent::URPGAbilitySystemComponent()
{

}

void URPGAbilitySystemComponent::ReceiveDamage(URPGAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage)
{
	ReceivedDamage.Broadcast(SourceASC, UnmitigatedDamage, MitigatedDamage);
}
