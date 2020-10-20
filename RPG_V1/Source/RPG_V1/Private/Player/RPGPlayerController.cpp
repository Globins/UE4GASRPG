// Fill out your copyright notice in the Description page of Project Settings.


#include "Player\RPGPlayerController.h"
#include "Characters/Abilities/AttributeSets/RPGAttributeSetBase.h"
#include "Characters/Abilities/RPGAbilitySystemComponent.h"
#include "Player/RPGPlayerState.h"
#include "UI/RPGHUDWidget.h"

void ARPGPlayerController::BeginPlay()
{
	bShowMouseCursor = true;
}

void ARPGPlayerController::CreateHUD()
{
	if (UIHUDWidget)
	{
		return;
	}
	if (!UIHUDWidgetClass)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Missing UIHUDWidgetClass. Please fill in on the Blueprint of the PlayerController."), *FString(__FUNCTION__));
		return;
	}
	// Only create a HUD for local player
	if (!IsLocalPlayerController())
	{
		return;
	}
	ARPGPlayerState* PS = GetPlayerState<ARPGPlayerState>();
	if (!PS)
	{
		return;
	}
	UIHUDWidget = CreateWidget<URPGHUDWidget>(this, UIHUDWidgetClass);
	UIHUDWidget->AddToViewport();

	//// Set attributes
	UIHUDWidget->SetCurrentHealth(PS->GetHealth());
	UIHUDWidget->SetMaxHealth(PS->GetMaxHealth());
	UIHUDWidget->SetHealthPercentage(PS->GetHealth() / PS->GetMaxHealth());
	UIHUDWidget->SetCurrentMana(PS->GetMana());
	UIHUDWidget->SetMaxMana(PS->GetMaxMana());
	UIHUDWidget->SetManaPercentage(PS->GetMana() / PS->GetMaxMana());
	UIHUDWidget->SetHealthRegenRate(PS->GetHealthRegenRate());
	UIHUDWidget->SetManaRegenRate(PS->GetManaRegenRate());
	UIHUDWidget->SetCurrentShield(PS->GetShield());
	UIHUDWidget->SetMaxShield(PS->GetMaxShield());
	UIHUDWidget->SetShieldRegenRate(PS->GetShieldRegenRate());
	UIHUDWidget->SetShieldPercentage(PS->GetShield() / PS->GetMaxShield());
	UIHUDWidget->SetGold(PS->GetGold());
}

void ARPGPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	ARPGPlayerState* PS = GetPlayerState<ARPGPlayerState>();
	if (PS)
	{
		// Init ASC with PS (Owner) and our new Pawn (AvatarActor)
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, InPawn);
	}
}

void ARPGPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	// For edge cases where the PlayerState is repped before the Hero is possessed.
	CreateHUD();
}


URPGHUDWidget* ARPGPlayerController::GetRPGHUD()
{
	return UIHUDWidget;
}


void ARPGPlayerController::Kill()
{
	ServerKill();
}
void ARPGPlayerController::ServerKill_Implementation()
{
	ARPGPlayerState* PS = GetPlayerState<ARPGPlayerState>();
	if (PS)
	{
		PS->GetAttributeSetBase()->SetHealth(0.0f);
	}
}
bool ARPGPlayerController::ServerKill_Validate()
{
	return true;
}

void ARPGPlayerController::ShowDamageNumber_Implementation(float DamageAmount, ARPGCharacterBase* TargetCharacter, FGameplayTagContainer DamageNumberTags)
{
	if (IsValid(TargetCharacter))
	{
		TargetCharacter->AddDamageNumber(DamageAmount, DamageNumberTags);
	}
}
bool ARPGPlayerController::ShowDamageNumber_Validate(float DamageAmount, ARPGCharacterBase* TargetCharacter, FGameplayTagContainer DamageNumberTaRPG)
{
	return true;
}


void ARPGPlayerController::SetRespawnCountdown_Implementation(float RespawnTimeRemaining)
{
	if (UIHUDWidget)
	{
		UIHUDWidget->SetRespawnCountdown(RespawnTimeRemaining);
	}
}
bool ARPGPlayerController::SetRespawnCountdown_Validate(float RespawnTimeRemaining)
{
	return true;
}

void ARPGPlayerController::ClientSetControlRotation_Implementation(FRotator NewRotation)
{
	SetControlRotation(NewRotation);
}
bool ARPGPlayerController::ClientSetControlRotation_Validate(FRotator NewRotation)
{
	return true;
}