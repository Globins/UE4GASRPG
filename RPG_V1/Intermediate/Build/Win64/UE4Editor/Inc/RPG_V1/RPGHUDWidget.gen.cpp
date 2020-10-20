// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/UI/RPGHUDWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGHUDWidget() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_URPGHUDWidget_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGHUDWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
// End Cross Module References
	static FName NAME_URPGHUDWidget_SetCurrentHealth = FName(TEXT("SetCurrentHealth"));
	void URPGHUDWidget::SetCurrentHealth(float CurrentHealth)
	{
		RPGHUDWidget_eventSetCurrentHealth_Parms Parms;
		Parms.CurrentHealth=CurrentHealth;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetCurrentHealth),&Parms);
	}
	static FName NAME_URPGHUDWidget_SetCurrentMana = FName(TEXT("SetCurrentMana"));
	void URPGHUDWidget::SetCurrentMana(float CurrentMana)
	{
		RPGHUDWidget_eventSetCurrentMana_Parms Parms;
		Parms.CurrentMana=CurrentMana;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetCurrentMana),&Parms);
	}
	static FName NAME_URPGHUDWidget_SetCurrentShield = FName(TEXT("SetCurrentShield"));
	void URPGHUDWidget::SetCurrentShield(float CurrentShield)
	{
		RPGHUDWidget_eventSetCurrentShield_Parms Parms;
		Parms.CurrentShield=CurrentShield;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetCurrentShield),&Parms);
	}
	static FName NAME_URPGHUDWidget_SetGold = FName(TEXT("SetGold"));
	void URPGHUDWidget::SetGold(int32 Gold)
	{
		RPGHUDWidget_eventSetGold_Parms Parms;
		Parms.Gold=Gold;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetGold),&Parms);
	}
	static FName NAME_URPGHUDWidget_SetHealthPercentage = FName(TEXT("SetHealthPercentage"));
	void URPGHUDWidget::SetHealthPercentage(float HealthPercentage)
	{
		RPGHUDWidget_eventSetHealthPercentage_Parms Parms;
		Parms.HealthPercentage=HealthPercentage;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetHealthPercentage),&Parms);
	}
	static FName NAME_URPGHUDWidget_SetHealthRegenRate = FName(TEXT("SetHealthRegenRate"));
	void URPGHUDWidget::SetHealthRegenRate(float HealthRegenRate)
	{
		RPGHUDWidget_eventSetHealthRegenRate_Parms Parms;
		Parms.HealthRegenRate=HealthRegenRate;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetHealthRegenRate),&Parms);
	}
	static FName NAME_URPGHUDWidget_SetManaPercentage = FName(TEXT("SetManaPercentage"));
	void URPGHUDWidget::SetManaPercentage(float ManaPercentage)
	{
		RPGHUDWidget_eventSetManaPercentage_Parms Parms;
		Parms.ManaPercentage=ManaPercentage;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetManaPercentage),&Parms);
	}
	static FName NAME_URPGHUDWidget_SetManaRegenRate = FName(TEXT("SetManaRegenRate"));
	void URPGHUDWidget::SetManaRegenRate(float ManaRegenRate)
	{
		RPGHUDWidget_eventSetManaRegenRate_Parms Parms;
		Parms.ManaRegenRate=ManaRegenRate;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetManaRegenRate),&Parms);
	}
	static FName NAME_URPGHUDWidget_SetMaxHealth = FName(TEXT("SetMaxHealth"));
	void URPGHUDWidget::SetMaxHealth(float MaxHealth)
	{
		RPGHUDWidget_eventSetMaxHealth_Parms Parms;
		Parms.MaxHealth=MaxHealth;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetMaxHealth),&Parms);
	}
	static FName NAME_URPGHUDWidget_SetMaxMana = FName(TEXT("SetMaxMana"));
	void URPGHUDWidget::SetMaxMana(float MaxMana)
	{
		RPGHUDWidget_eventSetMaxMana_Parms Parms;
		Parms.MaxMana=MaxMana;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetMaxMana),&Parms);
	}
	static FName NAME_URPGHUDWidget_SetMaxShield = FName(TEXT("SetMaxShield"));
	void URPGHUDWidget::SetMaxShield(float MaxShield)
	{
		RPGHUDWidget_eventSetMaxShield_Parms Parms;
		Parms.MaxShield=MaxShield;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetMaxShield),&Parms);
	}
	static FName NAME_URPGHUDWidget_SetRespawnCountdown = FName(TEXT("SetRespawnCountdown"));
	void URPGHUDWidget::SetRespawnCountdown(float RespawnTimeRemaining)
	{
		RPGHUDWidget_eventSetRespawnCountdown_Parms Parms;
		Parms.RespawnTimeRemaining=RespawnTimeRemaining;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetRespawnCountdown),&Parms);
	}
	static FName NAME_URPGHUDWidget_SetShieldPercentage = FName(TEXT("SetShieldPercentage"));
	void URPGHUDWidget::SetShieldPercentage(float ShieldPercentage)
	{
		RPGHUDWidget_eventSetShieldPercentage_Parms Parms;
		Parms.ShieldPercentage=ShieldPercentage;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetShieldPercentage),&Parms);
	}
	static FName NAME_URPGHUDWidget_SetShieldRegenRate = FName(TEXT("SetShieldRegenRate"));
	void URPGHUDWidget::SetShieldRegenRate(float ShieldRegenRate)
	{
		RPGHUDWidget_eventSetShieldRegenRate_Parms Parms;
		Parms.ShieldRegenRate=ShieldRegenRate;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_SetShieldRegenRate),&Parms);
	}
	static FName NAME_URPGHUDWidget_ShowAbilityConfirmPrompt = FName(TEXT("ShowAbilityConfirmPrompt"));
	void URPGHUDWidget::ShowAbilityConfirmPrompt(bool bShowText)
	{
		RPGHUDWidget_eventShowAbilityConfirmPrompt_Parms Parms;
		Parms.bShowText=bShowText ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_URPGHUDWidget_ShowAbilityConfirmPrompt),&Parms);
	}
	void URPGHUDWidget::StaticRegisterNativesURPGHUDWidget()
	{
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetCurrentHealth_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetCurrentHealth_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetCurrentHealth_Parms, CurrentHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetCurrentHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetCurrentHealth_Statics::NewProp_CurrentHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetCurrentHealth", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetCurrentHealth_Parms), Z_Construct_UFunction_URPGHUDWidget_SetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetCurrentHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetCurrentHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetCurrentHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetCurrentMana_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetCurrentMana_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetCurrentMana_Parms, CurrentMana), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetCurrentMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetCurrentMana_Statics::NewProp_CurrentMana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetCurrentMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetCurrentMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetCurrentMana", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetCurrentMana_Parms), Z_Construct_UFunction_URPGHUDWidget_SetCurrentMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetCurrentMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetCurrentMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetCurrentMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetCurrentMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetCurrentMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetCurrentShield_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentShield;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetCurrentShield_Statics::NewProp_CurrentShield = { "CurrentShield", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetCurrentShield_Parms, CurrentShield), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetCurrentShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetCurrentShield_Statics::NewProp_CurrentShield,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetCurrentShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetCurrentShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetCurrentShield", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetCurrentShield_Parms), Z_Construct_UFunction_URPGHUDWidget_SetCurrentShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetCurrentShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetCurrentShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetCurrentShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetCurrentShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetCurrentShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetGold_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Gold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetGold_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetGold_Parms, Gold), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetGold_Statics::NewProp_Gold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetGold", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetGold_Parms), Z_Construct_UFunction_URPGHUDWidget_SetGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetHealthPercentage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetHealthPercentage_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetHealthPercentage_Parms, HealthPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetHealthPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetHealthPercentage_Statics::NewProp_HealthPercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetHealthPercentage", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetHealthPercentage_Parms), Z_Construct_UFunction_URPGHUDWidget_SetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetHealthPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetHealthPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetHealthPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetHealthRegenRate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthRegenRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetHealthRegenRate_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetHealthRegenRate_Parms, HealthRegenRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetHealthRegenRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetHealthRegenRate_Statics::NewProp_HealthRegenRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetHealthRegenRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetHealthRegenRate", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetHealthRegenRate_Parms), Z_Construct_UFunction_URPGHUDWidget_SetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetHealthRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetHealthRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetHealthRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetHealthRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetHealthRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetManaPercentage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManaPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetManaPercentage_Statics::NewProp_ManaPercentage = { "ManaPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetManaPercentage_Parms, ManaPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetManaPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetManaPercentage_Statics::NewProp_ManaPercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetManaPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetManaPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetManaPercentage", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetManaPercentage_Parms), Z_Construct_UFunction_URPGHUDWidget_SetManaPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetManaPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetManaPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetManaPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetManaPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetManaPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetManaRegenRate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManaRegenRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetManaRegenRate_Statics::NewProp_ManaRegenRate = { "ManaRegenRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetManaRegenRate_Parms, ManaRegenRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetManaRegenRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetManaRegenRate_Statics::NewProp_ManaRegenRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetManaRegenRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetManaRegenRate", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetManaRegenRate_Parms), Z_Construct_UFunction_URPGHUDWidget_SetManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetManaRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetManaRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetManaRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetManaRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetManaRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetMaxHealth_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetMaxHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetMaxHealth_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetMaxHealth_Statics::NewProp_MaxHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Attribute setters\n\x09*/" },
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
		{ "ToolTip", "Attribute setters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetMaxHealth", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetMaxHealth_Parms), Z_Construct_UFunction_URPGHUDWidget_SetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetMaxMana_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetMaxMana_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetMaxMana_Parms, MaxMana), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetMaxMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetMaxMana_Statics::NewProp_MaxMana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetMaxMana", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetMaxMana_Parms), Z_Construct_UFunction_URPGHUDWidget_SetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetMaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetMaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetMaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetMaxShield_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxShield;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetMaxShield_Statics::NewProp_MaxShield = { "MaxShield", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetMaxShield_Parms, MaxShield), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetMaxShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetMaxShield_Statics::NewProp_MaxShield,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetMaxShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetMaxShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetMaxShield", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetMaxShield_Parms), Z_Construct_UFunction_URPGHUDWidget_SetMaxShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetMaxShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetMaxShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetMaxShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetMaxShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetMaxShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetRespawnCountdown_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnTimeRemaining;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetRespawnCountdown_Statics::NewProp_RespawnTimeRemaining = { "RespawnTimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetRespawnCountdown_Parms, RespawnTimeRemaining), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetRespawnCountdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetRespawnCountdown_Statics::NewProp_RespawnTimeRemaining,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetRespawnCountdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetRespawnCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetRespawnCountdown", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetRespawnCountdown_Parms), Z_Construct_UFunction_URPGHUDWidget_SetRespawnCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetRespawnCountdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetRespawnCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetRespawnCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetRespawnCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetRespawnCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetShieldPercentage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShieldPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetShieldPercentage_Statics::NewProp_ShieldPercentage = { "ShieldPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetShieldPercentage_Parms, ShieldPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetShieldPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetShieldPercentage_Statics::NewProp_ShieldPercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetShieldPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetShieldPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetShieldPercentage", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetShieldPercentage_Parms), Z_Construct_UFunction_URPGHUDWidget_SetShieldPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetShieldPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetShieldPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetShieldPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetShieldPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetShieldPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_SetShieldRegenRate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShieldRegenRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGHUDWidget_SetShieldRegenRate_Statics::NewProp_ShieldRegenRate = { "ShieldRegenRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGHUDWidget_eventSetShieldRegenRate_Parms, ShieldRegenRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_SetShieldRegenRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_SetShieldRegenRate_Statics::NewProp_ShieldRegenRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_SetShieldRegenRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_SetShieldRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "SetShieldRegenRate", nullptr, nullptr, sizeof(RPGHUDWidget_eventSetShieldRegenRate_Parms), Z_Construct_UFunction_URPGHUDWidget_SetShieldRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetShieldRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_SetShieldRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_SetShieldRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_SetShieldRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_SetShieldRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt_Statics
	{
		static void NewProp_bShowText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt_Statics::NewProp_bShowText_SetBit(void* Obj)
	{
		((RPGHUDWidget_eventShowAbilityConfirmPrompt_Parms*)Obj)->bShowText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt_Statics::NewProp_bShowText = { "bShowText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGHUDWidget_eventShowAbilityConfirmPrompt_Parms), &Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt_Statics::NewProp_bShowText_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt_Statics::NewProp_bShowText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGHUDWidget, nullptr, "ShowAbilityConfirmPrompt", nullptr, nullptr, sizeof(RPGHUDWidget_eventShowAbilityConfirmPrompt_Parms), Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGHUDWidget_NoRegister()
	{
		return URPGHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_URPGHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGHUDWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGHUDWidget_SetCurrentHealth, "SetCurrentHealth" }, // 2693236605
		{ &Z_Construct_UFunction_URPGHUDWidget_SetCurrentMana, "SetCurrentMana" }, // 3827790448
		{ &Z_Construct_UFunction_URPGHUDWidget_SetCurrentShield, "SetCurrentShield" }, // 2314536956
		{ &Z_Construct_UFunction_URPGHUDWidget_SetGold, "SetGold" }, // 3734212840
		{ &Z_Construct_UFunction_URPGHUDWidget_SetHealthPercentage, "SetHealthPercentage" }, // 2005620189
		{ &Z_Construct_UFunction_URPGHUDWidget_SetHealthRegenRate, "SetHealthRegenRate" }, // 1011334191
		{ &Z_Construct_UFunction_URPGHUDWidget_SetManaPercentage, "SetManaPercentage" }, // 1086165646
		{ &Z_Construct_UFunction_URPGHUDWidget_SetManaRegenRate, "SetManaRegenRate" }, // 3056916809
		{ &Z_Construct_UFunction_URPGHUDWidget_SetMaxHealth, "SetMaxHealth" }, // 898275380
		{ &Z_Construct_UFunction_URPGHUDWidget_SetMaxMana, "SetMaxMana" }, // 2275664086
		{ &Z_Construct_UFunction_URPGHUDWidget_SetMaxShield, "SetMaxShield" }, // 74180077
		{ &Z_Construct_UFunction_URPGHUDWidget_SetRespawnCountdown, "SetRespawnCountdown" }, // 1743205743
		{ &Z_Construct_UFunction_URPGHUDWidget_SetShieldPercentage, "SetShieldPercentage" }, // 3592122608
		{ &Z_Construct_UFunction_URPGHUDWidget_SetShieldRegenRate, "SetShieldRegenRate" }, // 3600826273
		{ &Z_Construct_UFunction_URPGHUDWidget_ShowAbilityConfirmPrompt, "ShowAbilityConfirmPrompt" }, // 4006700014
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGHUDWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/RPGHUDWidget.h" },
		{ "ModuleRelativePath", "Public/UI/RPGHUDWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGHUDWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGHUDWidget_Statics::ClassParams = {
		&URPGHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGHUDWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGHUDWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGHUDWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGHUDWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGHUDWidget, 4289658201);
	template<> RPG_V1_API UClass* StaticClass<URPGHUDWidget>()
	{
		return URPGHUDWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGHUDWidget(Z_Construct_UClass_URPGHUDWidget, &URPGHUDWidget::StaticClass, TEXT("/Script/RPG_V1"), TEXT("URPGHUDWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGHUDWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
