// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters\Abilities\AttributeSets\RPGAttributeSetBase.h"
#include "Characters\RPGCharacterBase.h"
#include "Player\RPGPlayerController.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "Net\UnrealNetwork.h"

URPGAttributeSetBase::URPGAttributeSetBase()
{
	HitDirectionFrontTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Front"));
	HitDirectionBackTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Back"));
	HitDirectionRightTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Right"));
	HitDirectionLeftTag = FGameplayTag::RequestGameplayTag(FName("Effect.HitReact.Left"));
}

void URPGAttributeSetBase::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	// If a Max value changes, adjust current to keep Current % of Current to Max
	if (Attribute == GetMaxHealthAttribute()) // GetMaxHealthAttribute comes from the Macros defined at the top of the header
	{
		AdjustAttributeForMaxChange(Health, MaxHealth, NewValue, GetHealthAttribute());
	}
	else if (Attribute == GetMaxManaAttribute())
	{
		AdjustAttributeForMaxChange(Mana, MaxMana, NewValue, GetManaAttribute());
	}
	else if (Attribute == GetMoveSpeedAttribute())
	{
	// Cannot slow less than 150 units/s and cannot boost more than 1000 units/s
		NewValue = FMath::Clamp<float>(NewValue, 150, 1000);
	}
	else if (Attribute == GetAttackSpeedAttribute())
	{
		// Cannot attack less than 0 units/s and cannot attack more than 32/s
		NewValue = FMath::Clamp<float>(NewValue, 0, 32);
	}
}

void URPGAttributeSetBase::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* Source = Context.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();
	FGameplayTagContainer SpecAssetTags;
	Data.EffectSpec.GetAllAssetTags(SpecAssetTags);

	// Get the Target actor, which should be our owner
	AActor* TargetActor = nullptr;
	AController* TargetController = nullptr;
	ARPGCharacterBase* TargetCharacter = nullptr;
	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
		TargetCharacter = Cast<ARPGCharacterBase>(TargetActor);
	}

	//Get Source Actor
	AActor* SourceActor = nullptr;
	AController* SourceController = nullptr;
	ARPGCharacterBase* SourceCharacter = nullptr;
	if (Source && Source->AbilityActorInfo.IsValid() && Source->AbilityActorInfo->AvatarActor.IsValid())
	{
		SourceActor = Source->AbilityActorInfo->AvatarActor.Get();
		SourceController = Source->AbilityActorInfo->PlayerController.Get();
		if (SourceController == nullptr && SourceActor != nullptr)
		{
			if (APawn* Pawn = Cast<APawn>(SourceActor))
			{
				SourceController = Pawn->GetController();
			}
		}
		// Use the controller to find the source pawn
		if (SourceController)
		{
			SourceCharacter = Cast<ARPGCharacterBase>(SourceController->GetPawn());
		}
		else
		{
			SourceCharacter = Cast<ARPGCharacterBase>(SourceActor);
		}
		// Set the causer actor based on context if it's set
		if (Context.GetEffectCauser())
		{
			SourceActor = Context.GetEffectCauser();
		}
	}

	// Damage
	if (Data.EvaluatedData.Attribute == GetDamageAttribute())
	{
		// Try to extract a hit result
		FHitResult HitResult;
		if (Context.GetHitResult())
		{
			HitResult = *Context.GetHitResult();
		}
		// Store a local copy of the amount of damage done and clear the damage attribute
		const float LocalDamageDone = GetDamage();
		SetDamage(0.f);
		// If character was alive before damage is added, handle damage
		// This prevents damage being added to dead things and replaying death animations
		bool WasAlive = true;
		if (TargetCharacter)
		{
			WasAlive = TargetCharacter->IsAlive();
		}
		// Apply the damage to shield first if it exists
		const float OldShield = GetShield();
		float DamageAfterShield = LocalDamageDone - OldShield;
		if (OldShield > 0)
		{
			float NewShield = OldShield - LocalDamageDone;
			SetShield(FMath::Clamp<float>(NewShield, 0.0f, GetMaxShield()));
		}
		if (DamageAfterShield > 0)
		{
			// Apply the health change and then clamp it
			const float NewHealth = GetHealth() - DamageAfterShield;
			SetHealth(FMath::Clamp(NewHealth, 0.0f, GetMaxHealth()));
		}


		//DAMAGE FX
		if (TargetCharacter && WasAlive)
		{
			const FHitResult* Hit = Data.EffectSpec.GetContext().GetHitResult();
			// This is the log statement for damage received. Turned off for live games.
			//UE_LOG(LogTemp, Log, TEXT("%s() %s Damage Received: %f"), *FString(__FUNCTION__), *GetOwningActor()->GetName(), LocalDamageDone);
			if (Hit)
			{
				//EGDHitReactDirection HitDirection = TargetCharacter->GetHitReactDirection(Data.EffectSpec.GetContext().GetHitResult()->Location);
				//switch (HitDirection)
				//{
				//case EGDHitReactDirection::Left:
				//	TargetCharacter->PlayHitReact(HitDirectionLeftTag, SourceCharacter);
				//	break;
				//case EGDHitReactDirection::Front:
				//	TargetCharacter->PlayHitReact(HitDirectionFrontTag, SourceCharacter);
				//	break;
				//case EGDHitReactDirection::Right:
				//	TargetCharacter->PlayHitReact(HitDirectionRightTag, SourceCharacter);
				//	break;
				//case EGDHitReactDirection::Back:
				//	TargetCharacter->PlayHitReact(HitDirectionBackTag, SourceCharacter);
				//	break;
				//}
			}
			else
			{
				// No hit result. Default to front.
				//TargetCharacter->PlayHitReact(HitDirectionFrontTag, SourceCharacter);
			}

			// Show damage number for the Source player unless it was self damage
			//if (SourceActor != TargetActor)
			//{
			//	AGSPlayerController* PC = Cast<AGSPlayerController>(SourceController);
			//	if (PC)
			//	{
			//		FGameplayTagContainer DamageNumberTags;

			//		PC->ShowDamageNumber(LocalDamageDone, TargetCharacter, DamageNumberTags);
			//	}
			//}

			//GIVE XP AND GOLD BOUNTIES TO SOURCE
			if (!TargetCharacter->IsAlive())
			{
				// TargetCharacter was alive before this damage and now is not alive, give XP and Gold bounties to Source.
				// Don't give bounty to self.
				if (SourceController != TargetController)
				{
					// Create a dynamic instant Gameplay Effect to give the bounties
					UGameplayEffect* GEBounty = NewObject<UGameplayEffect>(GetTransientPackage(), FName(TEXT("Bounty")));
					GEBounty->DurationPolicy = EGameplayEffectDurationType::Instant;

					int32 Idx = GEBounty->Modifiers.Num();
					GEBounty->Modifiers.SetNum(Idx + 2);

					FGameplayModifierInfo& InfoGold = GEBounty->Modifiers[Idx + 1];
					InfoGold.ModifierMagnitude = FScalableFloat(GetGoldBounty());
					InfoGold.ModifierOp = EGameplayModOp::Additive;
					InfoGold.Attribute = URPGAttributeSetBase::GetGoldAttribute();

					Source->ApplyGameplayEffectToSelf(GEBounty, 1.0f, Source->MakeEffectContext());
				}
			}
		}
	}
	else if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
	// Handle other health changes.
	// Health loss should go through Damage.
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));
	}
	else if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		SetMana(FMath::Clamp(GetMana(), 0.0f, GetMaxMana()));
	}
	else if (Data.EvaluatedData.Attribute == GetShieldAttribute())
	{
		SetShield(FMath::Clamp(GetShield(), 0.0f, GetMaxShield()));
	}
}

void URPGAttributeSetBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, HealthRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, ManaRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, Shield, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, MaxShield, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, ShieldRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, Armor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, MoveSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, AttackSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, Gold, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(URPGAttributeSetBase, GoldBounty, COND_None, REPNOTIFY_Always);
}

void URPGAttributeSetBase::AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty)
{
	UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
	const float CurrentMaxValue = MaxAttribute.GetCurrentValue();
	if (!FMath::IsNearlyEqual(CurrentMaxValue, NewMaxValue) && AbilityComp)
	{
		// Change current value to maintain the current Val / Max percent
		const float CurrentValue = AffectedAttribute.GetCurrentValue();
		float NewDelta = (CurrentMaxValue > 0.f) ? (CurrentValue * NewMaxValue / CurrentMaxValue) - CurrentValue : NewMaxValue;

		AbilityComp->ApplyModToAttributeUnsafe(AffectedAttributeProperty, EGameplayModOp::Additive, NewDelta);
	}
}

void URPGAttributeSetBase::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, Health, OldHealth);
}
void URPGAttributeSetBase::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, MaxHealth, OldMaxHealth);
}
void URPGAttributeSetBase::OnRep_HealthRegenRate(const FGameplayAttributeData& OldHealthRegenRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, HealthRegenRate, OldHealthRegenRate);
}
void URPGAttributeSetBase::OnRep_Mana(const FGameplayAttributeData& OldMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, Mana, OldMana);
}
void URPGAttributeSetBase::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, MaxMana, OldMaxMana);
}
void URPGAttributeSetBase::OnRep_ManaRegenRate(const FGameplayAttributeData& OldManaRegenRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, ManaRegenRate, OldManaRegenRate);
}
void URPGAttributeSetBase::OnRep_Shield(const FGameplayAttributeData& OldShield)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, Shield, OldShield);
}
void URPGAttributeSetBase::OnRep_MaxShield(const FGameplayAttributeData& OldMaxShield)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, MaxShield, OldMaxShield);
}
void URPGAttributeSetBase::OnRep_ShieldRegenRate(const FGameplayAttributeData& OldShieldRegenRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, ShieldRegenRate, OldShieldRegenRate);
}
void URPGAttributeSetBase::OnRep_Armor(const FGameplayAttributeData& OldArmor)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, Armor, OldArmor);
}
void URPGAttributeSetBase::OnRep_MoveSpeed(const FGameplayAttributeData& OldMoveSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, MoveSpeed, OldMoveSpeed);
}
void URPGAttributeSetBase::OnRep_AttackSpeed(const FGameplayAttributeData& OldAttackSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, AttackSpeed, OldAttackSpeed);
}
void URPGAttributeSetBase::OnRep_Gold(const FGameplayAttributeData& OldGold)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, Gold, OldGold);
}
void URPGAttributeSetBase::OnRep_GoldBounty(const FGameplayAttributeData& OldGoldBounty)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(URPGAttributeSetBase, GoldBounty, OldGoldBounty);
}
