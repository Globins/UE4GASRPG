// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Player/RPGPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGPlayerState() {}
// Cross Module References
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGPlayerState_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	RPG_V1_API UClass* Z_Construct_UClass_URPGAttributeSetBase_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_RPG_V1_eventRPGOnGameplayAttributeValueChangedDelegate_Parms
		{
			FGameplayAttribute Attribute;
			float NewValue;
			float OldValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventRPGOnGameplayAttributeValueChangedDelegate_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventRPGOnGameplayAttributeValueChangedDelegate_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventRPGOnGameplayAttributeValueChangedDelegate_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::NewProp_OldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RPG_V1, nullptr, "RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_RPG_V1_eventRPGOnGameplayAttributeValueChangedDelegate_Parms), Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetGoldBounty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGoldBounty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetGold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetAttackSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttackSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetMoveSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoveSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetArmor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetArmor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetShieldRegenRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShieldRegenRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetMaxShield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxShield();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetShield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShield();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetManaRegenRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetManaRegenRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetMaxMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetHealthRegenRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthRegenRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execShowAbilityConfirmPrompt)
	{
		P_GET_UBOOL(Z_Param_bShowPrompt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowAbilityConfirmPrompt(Z_Param_bShowPrompt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerState::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	void ARPGPlayerState::StaticRegisterNativesARPGPlayerState()
	{
		UClass* Class = ARPGPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetArmor", &ARPGPlayerState::execGetArmor },
			{ "GetAttackSpeed", &ARPGPlayerState::execGetAttackSpeed },
			{ "GetGold", &ARPGPlayerState::execGetGold },
			{ "GetGoldBounty", &ARPGPlayerState::execGetGoldBounty },
			{ "GetHealth", &ARPGPlayerState::execGetHealth },
			{ "GetHealthRegenRate", &ARPGPlayerState::execGetHealthRegenRate },
			{ "GetMana", &ARPGPlayerState::execGetMana },
			{ "GetManaRegenRate", &ARPGPlayerState::execGetManaRegenRate },
			{ "GetMaxHealth", &ARPGPlayerState::execGetMaxHealth },
			{ "GetMaxMana", &ARPGPlayerState::execGetMaxMana },
			{ "GetMaxShield", &ARPGPlayerState::execGetMaxShield },
			{ "GetMoveSpeed", &ARPGPlayerState::execGetMoveSpeed },
			{ "GetShield", &ARPGPlayerState::execGetShield },
			{ "GetShieldRegenRate", &ARPGPlayerState::execGetShieldRegenRate },
			{ "IsAlive", &ARPGPlayerState::execIsAlive },
			{ "ShowAbilityConfirmPrompt", &ARPGPlayerState::execShowAbilityConfirmPrompt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetArmor_Statics
	{
		struct RPGPlayerState_eventGetArmor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetArmor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetArmor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetArmor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetArmor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetArmor_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetArmor", nullptr, nullptr, sizeof(RPGPlayerState_eventGetArmor_Parms), Z_Construct_UFunction_ARPGPlayerState_GetArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetAttackSpeed_Statics
	{
		struct RPGPlayerState_eventGetAttackSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetAttackSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetAttackSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetAttackSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetAttackSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetAttackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetAttackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetAttackSpeed", nullptr, nullptr, sizeof(RPGPlayerState_eventGetAttackSpeed_Parms), Z_Construct_UFunction_ARPGPlayerState_GetAttackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetAttackSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetAttackSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetAttackSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetAttackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetAttackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetGold_Statics
	{
		struct RPGPlayerState_eventGetGold_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetGold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetGold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetGold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetGold_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetGold", nullptr, nullptr, sizeof(RPGPlayerState_eventGetGold_Parms), Z_Construct_UFunction_ARPGPlayerState_GetGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetGoldBounty_Statics
	{
		struct RPGPlayerState_eventGetGoldBounty_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetGoldBounty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetGoldBounty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetGoldBounty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetGoldBounty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetGoldBounty_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetGoldBounty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetGoldBounty", nullptr, nullptr, sizeof(RPGPlayerState_eventGetGoldBounty_Parms), Z_Construct_UFunction_ARPGPlayerState_GetGoldBounty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetGoldBounty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetGoldBounty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetGoldBounty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetGoldBounty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetGoldBounty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetHealth_Statics
	{
		struct RPGPlayerState_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "Comment", "/**\n\x09* Getters for attributes from GDAttributeSetBase. Returns Current Value unless otherwise specified.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
		{ "ToolTip", "Getters for attributes from GDAttributeSetBase. Returns Current Value unless otherwise specified." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetHealth", nullptr, nullptr, sizeof(RPGPlayerState_eventGetHealth_Parms), Z_Construct_UFunction_ARPGPlayerState_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetHealthRegenRate_Statics
	{
		struct RPGPlayerState_eventGetHealthRegenRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetHealthRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetHealthRegenRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetHealthRegenRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetHealthRegenRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetHealthRegenRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetHealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetHealthRegenRate", nullptr, nullptr, sizeof(RPGPlayerState_eventGetHealthRegenRate_Parms), Z_Construct_UFunction_ARPGPlayerState_GetHealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetHealthRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetHealthRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetHealthRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetHealthRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetHealthRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetMana_Statics
	{
		struct RPGPlayerState_eventGetMana_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetMana", nullptr, nullptr, sizeof(RPGPlayerState_eventGetMana_Parms), Z_Construct_UFunction_ARPGPlayerState_GetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetManaRegenRate_Statics
	{
		struct RPGPlayerState_eventGetManaRegenRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetManaRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetManaRegenRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetManaRegenRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetManaRegenRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetManaRegenRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetManaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetManaRegenRate", nullptr, nullptr, sizeof(RPGPlayerState_eventGetManaRegenRate_Parms), Z_Construct_UFunction_ARPGPlayerState_GetManaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetManaRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetManaRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetManaRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetManaRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetManaRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetMaxHealth_Statics
	{
		struct RPGPlayerState_eventGetMaxHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(RPGPlayerState_eventGetMaxHealth_Parms), Z_Construct_UFunction_ARPGPlayerState_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetMaxMana_Statics
	{
		struct RPGPlayerState_eventGetMaxMana_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetMaxMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetMaxMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetMaxMana", nullptr, nullptr, sizeof(RPGPlayerState_eventGetMaxMana_Parms), Z_Construct_UFunction_ARPGPlayerState_GetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetMaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetMaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetMaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetMaxShield_Statics
	{
		struct RPGPlayerState_eventGetMaxShield_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetMaxShield_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetMaxShield_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetMaxShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetMaxShield_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetMaxShield_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetMaxShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetMaxShield", nullptr, nullptr, sizeof(RPGPlayerState_eventGetMaxShield_Parms), Z_Construct_UFunction_ARPGPlayerState_GetMaxShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetMaxShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetMaxShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetMaxShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetMaxShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetMaxShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetMoveSpeed_Statics
	{
		struct RPGPlayerState_eventGetMoveSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetMoveSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetMoveSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetMoveSpeed", nullptr, nullptr, sizeof(RPGPlayerState_eventGetMoveSpeed_Parms), Z_Construct_UFunction_ARPGPlayerState_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetMoveSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetMoveSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetShield_Statics
	{
		struct RPGPlayerState_eventGetShield_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetShield_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetShield_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetShield_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetShield_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetShield", nullptr, nullptr, sizeof(RPGPlayerState_eventGetShield_Parms), Z_Construct_UFunction_ARPGPlayerState_GetShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_GetShieldRegenRate_Statics
	{
		struct RPGPlayerState_eventGetShieldRegenRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerState_GetShieldRegenRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerState_eventGetShieldRegenRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_GetShieldRegenRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_GetShieldRegenRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_GetShieldRegenRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|Attributes" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_GetShieldRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "GetShieldRegenRate", nullptr, nullptr, sizeof(RPGPlayerState_eventGetShieldRegenRate_Parms), Z_Construct_UFunction_ARPGPlayerState_GetShieldRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetShieldRegenRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_GetShieldRegenRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_GetShieldRegenRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_GetShieldRegenRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_GetShieldRegenRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_IsAlive_Statics
	{
		struct RPGPlayerState_eventIsAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGPlayerState_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGPlayerState_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGPlayerState_eventIsAlive_Parms), &Z_Construct_UFunction_ARPGPlayerState_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_IsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "IsAlive", nullptr, nullptr, sizeof(RPGPlayerState_eventIsAlive_Parms), Z_Construct_UFunction_ARPGPlayerState_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt_Statics
	{
		struct RPGPlayerState_eventShowAbilityConfirmPrompt_Parms
		{
			bool bShowPrompt;
		};
		static void NewProp_bShowPrompt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPrompt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt_Statics::NewProp_bShowPrompt_SetBit(void* Obj)
	{
		((RPGPlayerState_eventShowAbilityConfirmPrompt_Parms*)Obj)->bShowPrompt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt_Statics::NewProp_bShowPrompt = { "bShowPrompt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGPlayerState_eventShowAbilityConfirmPrompt_Parms), &Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt_Statics::NewProp_bShowPrompt_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt_Statics::NewProp_bShowPrompt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGPlayerState|UI" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerState, nullptr, "ShowAbilityConfirmPrompt", nullptr, nullptr, sizeof(RPGPlayerState_eventShowAbilityConfirmPrompt_Parms), Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARPGPlayerState_NoRegister()
	{
		return ARPGPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ARPGPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSetBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSetBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARPGPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGPlayerState_GetArmor, "GetArmor" }, // 664607489
		{ &Z_Construct_UFunction_ARPGPlayerState_GetAttackSpeed, "GetAttackSpeed" }, // 653291468
		{ &Z_Construct_UFunction_ARPGPlayerState_GetGold, "GetGold" }, // 1198398990
		{ &Z_Construct_UFunction_ARPGPlayerState_GetGoldBounty, "GetGoldBounty" }, // 1611545504
		{ &Z_Construct_UFunction_ARPGPlayerState_GetHealth, "GetHealth" }, // 1286181684
		{ &Z_Construct_UFunction_ARPGPlayerState_GetHealthRegenRate, "GetHealthRegenRate" }, // 2953328434
		{ &Z_Construct_UFunction_ARPGPlayerState_GetMana, "GetMana" }, // 1144107253
		{ &Z_Construct_UFunction_ARPGPlayerState_GetManaRegenRate, "GetManaRegenRate" }, // 4164375274
		{ &Z_Construct_UFunction_ARPGPlayerState_GetMaxHealth, "GetMaxHealth" }, // 1693315306
		{ &Z_Construct_UFunction_ARPGPlayerState_GetMaxMana, "GetMaxMana" }, // 1031188507
		{ &Z_Construct_UFunction_ARPGPlayerState_GetMaxShield, "GetMaxShield" }, // 4141185378
		{ &Z_Construct_UFunction_ARPGPlayerState_GetMoveSpeed, "GetMoveSpeed" }, // 1661152211
		{ &Z_Construct_UFunction_ARPGPlayerState_GetShield, "GetShield" }, // 2840080922
		{ &Z_Construct_UFunction_ARPGPlayerState_GetShieldRegenRate, "GetShieldRegenRate" }, // 3187020116
		{ &Z_Construct_UFunction_ARPGPlayerState_IsAlive, "IsAlive" }, // 1319601529
		{ &Z_Construct_UFunction_ARPGPlayerState_ShowAbilityConfirmPrompt, "ShowAbilityConfirmPrompt" }, // 1296980915
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/RPGPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_AttributeSetBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_AttributeSetBase = { "AttributeSetBase", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerState, AttributeSetBase), Z_Construct_UClass_URPGAttributeSetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_AttributeSetBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_AttributeSetBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerState, AbilitySystemComponent), Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_AttributeSetBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerState_Statics::NewProp_AbilitySystemComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARPGPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ARPGPlayerState, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGPlayerState_Statics::ClassParams = {
		&ARPGPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARPGPlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGPlayerState, 3712155818);
	template<> RPG_V1_API UClass* StaticClass<ARPGPlayerState>()
	{
		return ARPGPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGPlayerState(Z_Construct_UClass_ARPGPlayerState, &ARPGPlayerState::StaticClass, TEXT("/Script/RPG_V1"), TEXT("ARPGPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
