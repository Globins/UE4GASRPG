// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGAttributeSetBase() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_URPGAttributeSetBase_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGAttributeSetBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_GoldBounty)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldGoldBounty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GoldBounty(Z_Param_Out_OldGoldBounty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_Gold)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldGold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Gold(Z_Param_Out_OldGold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_AttackSpeed)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttackSpeed(Z_Param_Out_OldAttackSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_MoveSpeed)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMoveSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MoveSpeed(Z_Param_Out_OldMoveSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_Armor)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Armor(Z_Param_Out_OldArmor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_ShieldRegenRate)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldShieldRegenRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ShieldRegenRate(Z_Param_Out_OldShieldRegenRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_MaxShield)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxShield);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxShield(Z_Param_Out_OldMaxShield);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_Shield)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldShield);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Shield(Z_Param_Out_OldShield);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_ManaRegenRate)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldManaRegenRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ManaRegenRate(Z_Param_Out_OldManaRegenRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_MaxMana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_Mana)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_HealthRegenRate)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealthRegenRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_HealthRegenRate(Z_Param_Out_OldHealthRegenRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAttributeSetBase::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void URPGAttributeSetBase::StaticRegisterNativesURPGAttributeSetBase()
	{
		UClass* Class = URPGAttributeSetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Armor", &URPGAttributeSetBase::execOnRep_Armor },
			{ "OnRep_AttackSpeed", &URPGAttributeSetBase::execOnRep_AttackSpeed },
			{ "OnRep_Gold", &URPGAttributeSetBase::execOnRep_Gold },
			{ "OnRep_GoldBounty", &URPGAttributeSetBase::execOnRep_GoldBounty },
			{ "OnRep_Health", &URPGAttributeSetBase::execOnRep_Health },
			{ "OnRep_HealthRegenRate", &URPGAttributeSetBase::execOnRep_HealthRegenRate },
			{ "OnRep_Mana", &URPGAttributeSetBase::execOnRep_Mana },
			{ "OnRep_ManaRegenRate", &URPGAttributeSetBase::execOnRep_ManaRegenRate },
			{ "OnRep_MaxHealth", &URPGAttributeSetBase::execOnRep_MaxHealth },
			{ "OnRep_MaxMana", &URPGAttributeSetBase::execOnRep_MaxMana },
			{ "OnRep_MaxShield", &URPGAttributeSetBase::execOnRep_MaxShield },
			{ "OnRep_MoveSpeed", &URPGAttributeSetBase::execOnRep_MoveSpeed },
			{ "OnRep_Shield", &URPGAttributeSetBase::execOnRep_Shield },
			{ "OnRep_ShieldRegenRate", &URPGAttributeSetBase::execOnRep_ShieldRegenRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_Armor_Parms
		{
			FGameplayAttributeData OldArmor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldArmor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics::NewProp_OldArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics::NewProp_OldArmor = { "OldArmor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_Armor_Parms, OldArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics::NewProp_OldArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics::NewProp_OldArmor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics::NewProp_OldArmor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_Armor", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_Armor_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_AttackSpeed_Parms
		{
			FGameplayAttributeData OldAttackSpeed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldAttackSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldAttackSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed = { "OldAttackSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_AttackSpeed_Parms, OldAttackSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics::NewProp_OldAttackSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_AttackSpeed", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_AttackSpeed_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_Gold_Parms
		{
			FGameplayAttributeData OldGold;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldGold_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldGold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics::NewProp_OldGold_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics::NewProp_OldGold = { "OldGold", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_Gold_Parms, OldGold), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics::NewProp_OldGold_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics::NewProp_OldGold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics::NewProp_OldGold,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_Gold", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_Gold_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_GoldBounty_Parms
		{
			FGameplayAttributeData OldGoldBounty;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldGoldBounty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldGoldBounty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics::NewProp_OldGoldBounty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics::NewProp_OldGoldBounty = { "OldGoldBounty", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_GoldBounty_Parms, OldGoldBounty), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics::NewProp_OldGoldBounty_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics::NewProp_OldGoldBounty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics::NewProp_OldGoldBounty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_GoldBounty", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_GoldBounty_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* These OnRep functions exist to make sure that the ability system internal representations are synchronized properly during replication\n\x09**/" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "These OnRep functions exist to make sure that the ability system internal representations are synchronized properly during replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_Health_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_HealthRegenRate_Parms
		{
			FGameplayAttributeData OldHealthRegenRate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldHealthRegenRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldHealthRegenRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate = { "OldHealthRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_HealthRegenRate_Parms, OldHealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics::NewProp_OldHealthRegenRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_HealthRegenRate", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_HealthRegenRate_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_Mana_Parms
		{
			FGameplayAttributeData OldMana;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldMana;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_Mana", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_Mana_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_ManaRegenRate_Parms
		{
			FGameplayAttributeData OldManaRegenRate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldManaRegenRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldManaRegenRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate = { "OldManaRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_ManaRegenRate_Parms, OldManaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics::NewProp_OldManaRegenRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_ManaRegenRate", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_ManaRegenRate_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData OldMaxHealth;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_MaxHealth", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_MaxHealth_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_MaxMana_Parms
		{
			FGameplayAttributeData OldMaxMana;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics::NewProp_OldMaxMana_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_MaxMana", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_MaxMana_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_MaxShield_Parms
		{
			FGameplayAttributeData OldMaxShield;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMaxShield_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldMaxShield;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics::NewProp_OldMaxShield_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics::NewProp_OldMaxShield = { "OldMaxShield", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_MaxShield_Parms, OldMaxShield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics::NewProp_OldMaxShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics::NewProp_OldMaxShield_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics::NewProp_OldMaxShield,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_MaxShield", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_MaxShield_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_MoveSpeed_Parms
		{
			FGameplayAttributeData OldMoveSpeed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldMoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics::NewProp_OldMoveSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics::NewProp_OldMoveSpeed = { "OldMoveSpeed", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_MoveSpeed_Parms, OldMoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics::NewProp_OldMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics::NewProp_OldMoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics::NewProp_OldMoveSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_MoveSpeed", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_MoveSpeed_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_Shield_Parms
		{
			FGameplayAttributeData OldShield;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldShield_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldShield;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics::NewProp_OldShield_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics::NewProp_OldShield = { "OldShield", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_Shield_Parms, OldShield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics::NewProp_OldShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics::NewProp_OldShield_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics::NewProp_OldShield,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_Shield", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_Shield_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics
	{
		struct RPGAttributeSetBase_eventOnRep_ShieldRegenRate_Parms
		{
			FGameplayAttributeData OldShieldRegenRate;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldShieldRegenRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldShieldRegenRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics::NewProp_OldShieldRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics::NewProp_OldShieldRegenRate = { "OldShieldRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAttributeSetBase_eventOnRep_ShieldRegenRate_Parms, OldShieldRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics::NewProp_OldShieldRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics::NewProp_OldShieldRegenRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics::NewProp_OldShieldRegenRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAttributeSetBase, nullptr, "OnRep_ShieldRegenRate", nullptr, nullptr, sizeof(RPGAttributeSetBase_eventOnRep_ShieldRegenRate_Parms), Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGAttributeSetBase_NoRegister()
	{
		return URPGAttributeSetBase::StaticClass();
	}
	struct Z_Construct_UClass_URPGAttributeSetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoldBounty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GoldBounty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldRegenRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShieldRegenRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxShield_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxShield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shield_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Shield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaRegenRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ManaRegenRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthRegenRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HealthRegenRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGAttributeSetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGAttributeSetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Armor, "OnRep_Armor" }, // 1853039367
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_AttackSpeed, "OnRep_AttackSpeed" }, // 524517713
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Gold, "OnRep_Gold" }, // 2847679705
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_GoldBounty, "OnRep_GoldBounty" }, // 1842920777
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Health, "OnRep_Health" }, // 1716856874
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_HealthRegenRate, "OnRep_HealthRegenRate" }, // 2030330322
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Mana, "OnRep_Mana" }, // 1767184942
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ManaRegenRate, "OnRep_ManaRegenRate" }, // 680386110
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 1808421716
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxMana, "OnRep_MaxMana" }, // 3858380788
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MaxShield, "OnRep_MaxShield" }, // 2620782118
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_MoveSpeed, "OnRep_MoveSpeed" }, // 813213789
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_Shield, "OnRep_Shield" }, // 673760545
		{ &Z_Construct_UFunction_URPGAttributeSetBase_OnRep_ShieldRegenRate, "OnRep_ShieldRegenRate" }, // 2072813761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * TODO: ADD Skill Damage and Damge Resistance Modifiers somehow\n */" },
		{ "IncludePath", "Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "TODO: ADD Skill Damage and Damge Resistance Modifiers somehow" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_GoldBounty_MetaData[] = {
		{ "Category", "Gold" },
		{ "Comment", "// Gold awarded to the character's killer. Used to purchase items.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "Gold awarded to the character's killer. Used to purchase items." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_GoldBounty = { "GoldBounty", "OnRep_GoldBounty", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, GoldBounty), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_GoldBounty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_GoldBounty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Gold_MetaData[] = {
		{ "Category", "Gold" },
		{ "Comment", "// Gold gained from killing enemies. Used to purchase items.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "Gold gained from killing enemies. Used to purchase items." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Gold = { "Gold", "OnRep_Gold", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, Gold), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Gold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Gold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "AttackSpeed" },
		{ "Comment", "// AttackSpeed affects how fast characters can attack.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "AttackSpeed affects how fast characters can attack." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_AttackSpeed = { "AttackSpeed", "OnRep_AttackSpeed", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, AttackSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_AttackSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "MoveSpeed" },
		{ "Comment", "// MoveSpeed affects how fast characters can move.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "MoveSpeed affects how fast characters can move." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MoveSpeed = { "MoveSpeed", "OnRep_MoveSpeed", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, MoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "// Damage is a meta attribute used by the DamageExecution to calculate final damage, which then turns into -Health\n// Temporary value that only exists on the Server. Not replicated.\n" },
		{ "HideFromLevelInfos", "" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "Damage is a meta attribute used by the DamageExecution to calculate final damage, which then turns into -Health\nTemporary value that only exists on the Server. Not replicated." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Armor" },
		{ "Comment", "// Armor reduces the amount of damage done by attackers\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "Armor reduces the amount of damage done by attackers" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_ShieldRegenRate_MetaData[] = {
		{ "Category", "Shield" },
		{ "Comment", "// Shield regen rate will passively increase Shield every second\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "Shield regen rate will passively increase Shield every second" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_ShieldRegenRate = { "ShieldRegenRate", "OnRep_ShieldRegenRate", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, ShieldRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_ShieldRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_ShieldRegenRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxShield_MetaData[] = {
		{ "Category", "Shield" },
		{ "Comment", "// Maximum shield that we can have.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "Maximum shield that we can have." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxShield = { "MaxShield", "OnRep_MaxShield", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, MaxShield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxShield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxShield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Shield_MetaData[] = {
		{ "Category", "Shield" },
		{ "Comment", "// Current shield acts like temporary health. When depleted, damage will drain regular health.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "Current shield acts like temporary health. When depleted, damage will drain regular health." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Shield = { "Shield", "OnRep_Shield", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, Shield), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Shield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Shield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_ManaRegenRate_MetaData[] = {
		{ "Category", "Mana" },
		{ "Comment", "// Mana regen rate will passively increase Mana every second\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "Mana regen rate will passively increase Mana every second" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_ManaRegenRate = { "ManaRegenRate", "OnRep_ManaRegenRate", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, ManaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_ManaRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_ManaRegenRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Mana" },
		{ "Comment", "// MaxMana is its own attribute since GameplayEffects may modify it\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "MaxMana is its own attribute since GameplayEffects may modify it" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Mana" },
		{ "Comment", "// Current Mana, used to execute special abilities. Capped by MaxMana.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "Current Mana, used to execute special abilities. Capped by MaxMana." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Mana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_HealthRegenRate_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// Health regen rate will passively increase Health every second\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "Health regen rate will passively increase Health every second" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", "OnRep_HealthRegenRate", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, HealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_HealthRegenRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_HealthRegenRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// MaxHealth is its own attribute since GameplayEffects may modify it\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "MaxHealth is its own attribute since GameplayEffects may modify it" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// Current Health, when 0 we expect owner to die unless prevented by an ability. Capped by MaxHealth.\n// Positive changes can directly use this.\n// Negative changes to Health should go through Damage meta attribute.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/AttributeSets/RPGAttributeSetBase.h" },
		{ "ToolTip", "Current Health, when 0 we expect owner to die unless prevented by an ability. Capped by MaxHealth.\nPositive changes can directly use this.\nNegative changes to Health should go through Damage meta attribute." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAttributeSetBase, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGAttributeSetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_GoldBounty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Gold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_AttackSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_ShieldRegenRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxShield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Shield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_ManaRegenRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Mana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_HealthRegenRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAttributeSetBase_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGAttributeSetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGAttributeSetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGAttributeSetBase_Statics::ClassParams = {
		&URPGAttributeSetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URPGAttributeSetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGAttributeSetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAttributeSetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGAttributeSetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGAttributeSetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGAttributeSetBase, 1271499371);
	template<> RPG_V1_API UClass* StaticClass<URPGAttributeSetBase>()
	{
		return URPGAttributeSetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGAttributeSetBase(Z_Construct_UClass_URPGAttributeSetBase, &URPGAttributeSetBase::StaticClass, TEXT("/Script/RPG_V1"), TEXT("URPGAttributeSetBase"), false, nullptr, nullptr, nullptr);

	void URPGAttributeSetBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));
		static const FName Name_HealthRegenRate(TEXT("HealthRegenRate"));
		static const FName Name_Mana(TEXT("Mana"));
		static const FName Name_MaxMana(TEXT("MaxMana"));
		static const FName Name_ManaRegenRate(TEXT("ManaRegenRate"));
		static const FName Name_Shield(TEXT("Shield"));
		static const FName Name_MaxShield(TEXT("MaxShield"));
		static const FName Name_ShieldRegenRate(TEXT("ShieldRegenRate"));
		static const FName Name_Armor(TEXT("Armor"));
		static const FName Name_MoveSpeed(TEXT("MoveSpeed"));
		static const FName Name_AttackSpeed(TEXT("AttackSpeed"));
		static const FName Name_Gold(TEXT("Gold"));
		static const FName Name_GoldBounty(TEXT("GoldBounty"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
			&& Name_HealthRegenRate == ClassReps[(int32)ENetFields_Private::HealthRegenRate].Property->GetFName()
			&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
			&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName()
			&& Name_ManaRegenRate == ClassReps[(int32)ENetFields_Private::ManaRegenRate].Property->GetFName()
			&& Name_Shield == ClassReps[(int32)ENetFields_Private::Shield].Property->GetFName()
			&& Name_MaxShield == ClassReps[(int32)ENetFields_Private::MaxShield].Property->GetFName()
			&& Name_ShieldRegenRate == ClassReps[(int32)ENetFields_Private::ShieldRegenRate].Property->GetFName()
			&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName()
			&& Name_MoveSpeed == ClassReps[(int32)ENetFields_Private::MoveSpeed].Property->GetFName()
			&& Name_AttackSpeed == ClassReps[(int32)ENetFields_Private::AttackSpeed].Property->GetFName()
			&& Name_Gold == ClassReps[(int32)ENetFields_Private::Gold].Property->GetFName()
			&& Name_GoldBounty == ClassReps[(int32)ENetFields_Private::GoldBounty].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URPGAttributeSetBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGAttributeSetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
