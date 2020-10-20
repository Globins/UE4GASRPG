// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Characters/RPGCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGCharacterBase() {}
// Cross Module References
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGCharacterBase_NoRegister();
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature();
	RPG_V1_API UEnum* Z_Construct_UEnum_RPG_V1_ERPGHitReactDirection();
	RPG_V1_API UScriptStruct* Z_Construct_UScriptStruct_FRPGDamageNumber();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	RPG_V1_API UEnum* Z_Construct_UEnum_RPG_V1_ERPGAbilityInputID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RPG_V1_API UClass* Z_Construct_UClass_URPGDamageTextWidgetComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGAttributeSetBase_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature_Statics
	{
		struct _Script_RPG_V1_eventCharacterDiedDelegate_Parms
		{
			ARPGCharacterBase* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventCharacterDiedDelegate_Parms, Character), Z_Construct_UClass_ARPGCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RPG_V1, nullptr, "CharacterDiedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_RPG_V1_eventCharacterDiedDelegate_Parms), Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature_Statics
	{
		struct _Script_RPG_V1_eventCharacterBaseHitReactDelegate_Parms
		{
			ERPGHitReactDirection Direction;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventCharacterBaseHitReactDelegate_Parms, Direction), Z_Construct_UEnum_RPG_V1_ERPGHitReactDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature_Statics::NewProp_Direction_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RPG_V1, nullptr, "CharacterBaseHitReactDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_RPG_V1_eventCharacterBaseHitReactDelegate_Parms), Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FRPGDamageNumber::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RPG_V1_API uint32 Get_Z_Construct_UScriptStruct_FRPGDamageNumber_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGDamageNumber, Z_Construct_UPackage__Script_RPG_V1(), TEXT("RPGDamageNumber"), sizeof(FRPGDamageNumber), Get_Z_Construct_UScriptStruct_FRPGDamageNumber_Hash());
	}
	return Singleton;
}
template<> RPG_V1_API UScriptStruct* StaticStruct<FRPGDamageNumber>()
{
	return FRPGDamageNumber::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRPGDamageNumber(FRPGDamageNumber::StaticStruct, TEXT("/Script/RPG_V1"), TEXT("RPGDamageNumber"), false, nullptr, nullptr);
static struct FScriptStruct_RPG_V1_StaticRegisterNativesFRPGDamageNumber
{
	FScriptStruct_RPG_V1_StaticRegisterNativesFRPGDamageNumber()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RPGDamageNumber")),new UScriptStruct::TCppStructOps<FRPGDamageNumber>);
	}
} ScriptStruct_RPG_V1_StaticRegisterNativesFRPGDamageNumber;
	struct Z_Construct_UScriptStruct_FRPGDamageNumber_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPGDamageNumber_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRPGDamageNumber_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGDamageNumber>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGDamageNumber_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
		nullptr,
		&NewStructOps,
		"RPGDamageNumber",
		sizeof(FRPGDamageNumber),
		alignof(FRPGDamageNumber),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRPGDamageNumber_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGDamageNumber_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRPGDamageNumber()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRPGDamageNumber_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RPG_V1();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RPGDamageNumber"), sizeof(FRPGDamageNumber), Get_Z_Construct_UScriptStruct_FRPGDamageNumber_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRPGDamageNumber_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRPGDamageNumber_Hash() { return 3774402031U; }
	DEFINE_FUNCTION(ARPGCharacterBase::execGetAttackBaseValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttackBaseValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetAttackSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAttackSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetMoveSpeedBaseValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoveSpeedBaseValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetMoveSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoveSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetMaxShield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxShield();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetShield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShield();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetMaxMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetAbilityLevel)
	{
		P_GET_ENUM(ERPGAbilityInputID,Z_Param_AbilityID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAbilityLevel(ERPGAbilityInputID(Z_Param_AbilityID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execPlayHitReact)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_HitDirection);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->PlayHitReact_Validate(Z_Param_HitDirection,Z_Param_DamageCauser))
		{
			RPC_ValidateFailed(TEXT("PlayHitReact_Validate"));
			return;
		}
		P_THIS->PlayHitReact_Implementation(Z_Param_HitDirection,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execGetHitReactDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERPGHitReactDirection*)Z_Param__Result=P_THIS->GetHitReactDirection(Z_Param_Out_ImpactPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execFinishDying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishDying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGCharacterBase::execIsAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAlive();
		P_NATIVE_END;
	}
	static FName NAME_ARPGCharacterBase_PlayHitReact = FName(TEXT("PlayHitReact"));
	void ARPGCharacterBase::PlayHitReact(FGameplayTag HitDirection, AActor* DamageCauser)
	{
		RPGCharacterBase_eventPlayHitReact_Parms Parms;
		Parms.HitDirection=HitDirection;
		Parms.DamageCauser=DamageCauser;
		ProcessEvent(FindFunctionChecked(NAME_ARPGCharacterBase_PlayHitReact),&Parms);
	}
	void ARPGCharacterBase::StaticRegisterNativesARPGCharacterBase()
	{
		UClass* Class = ARPGCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishDying", &ARPGCharacterBase::execFinishDying },
			{ "GetAbilityLevel", &ARPGCharacterBase::execGetAbilityLevel },
			{ "GetAttackBaseValue", &ARPGCharacterBase::execGetAttackBaseValue },
			{ "GetAttackSpeed", &ARPGCharacterBase::execGetAttackSpeed },
			{ "GetHealth", &ARPGCharacterBase::execGetHealth },
			{ "GetHitReactDirection", &ARPGCharacterBase::execGetHitReactDirection },
			{ "GetMana", &ARPGCharacterBase::execGetMana },
			{ "GetMaxHealth", &ARPGCharacterBase::execGetMaxHealth },
			{ "GetMaxMana", &ARPGCharacterBase::execGetMaxMana },
			{ "GetMaxShield", &ARPGCharacterBase::execGetMaxShield },
			{ "GetMoveSpeed", &ARPGCharacterBase::execGetMoveSpeed },
			{ "GetMoveSpeedBaseValue", &ARPGCharacterBase::execGetMoveSpeedBaseValue },
			{ "GetShield", &ARPGCharacterBase::execGetShield },
			{ "IsAlive", &ARPGCharacterBase::execIsAlive },
			{ "PlayHitReact", &ARPGCharacterBase::execPlayHitReact },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_FinishDying_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_FinishDying_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGCharacter" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_FinishDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "FinishDying", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_FinishDying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_FinishDying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_FinishDying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_FinishDying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics
	{
		struct RPGCharacterBase_eventGetAbilityLevel_Parms
		{
			ERPGAbilityInputID AbilityID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbilityID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbilityID_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetAbilityLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::NewProp_AbilityID = { "AbilityID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetAbilityLevel_Parms, AbilityID), Z_Construct_UEnum_RPG_V1_ERPGAbilityInputID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::NewProp_AbilityID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::NewProp_AbilityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::NewProp_AbilityID_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGCharacter" },
		{ "Comment", "// Switch on AbilityID to return individual ability levels. Hardcoded to 1 for every ability in this project.\n" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
		{ "ToolTip", "Switch on AbilityID to return individual ability levels. Hardcoded to 1 for every ability in this project." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetAbilityLevel", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetAbilityLevel_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetAttackBaseValue_Statics
	{
		struct RPGCharacterBase_eventGetAttackBaseValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetAttackBaseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetAttackBaseValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetAttackBaseValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetAttackBaseValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetAttackBaseValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetAttackBaseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetAttackBaseValue", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetAttackBaseValue_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetAttackBaseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetAttackBaseValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetAttackBaseValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetAttackBaseValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetAttackBaseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetAttackBaseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetAttackSpeed_Statics
	{
		struct RPGCharacterBase_eventGetAttackSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetAttackSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetAttackSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetAttackSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetAttackSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetAttackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetAttackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetAttackSpeed", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetAttackSpeed_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetAttackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetAttackSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetAttackSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetAttackSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetAttackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetAttackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics
	{
		struct RPGCharacterBase_eventGetHealth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGCharacter|Attributes" },
		{ "Comment", "/**\n\x09* Getters for attributes from RPGAttributeSetBase\n\x09**/" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
		{ "ToolTip", "Getters for attributes from RPGAttributeSetBase" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetHealth", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetHealth_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics
	{
		struct RPGCharacterBase_eventGetHitReactDirection_Parms
		{
			FVector ImpactPoint;
			ERPGHitReactDirection ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetHitReactDirection_Parms, ReturnValue), Z_Construct_UEnum_RPG_V1_ERPGHitReactDirection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::NewProp_ImpactPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetHitReactDirection_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::NewProp_ImpactPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::NewProp_ImpactPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::NewProp_ImpactPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetHitReactDirection", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetHitReactDirection_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics
	{
		struct RPGCharacterBase_eventGetMana_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetMana", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetMana_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics
	{
		struct RPGCharacterBase_eventGetMaxHealth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetMaxHealth_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics
	{
		struct RPGCharacterBase_eventGetMaxMana_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetMaxMana", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetMaxMana_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetMaxShield_Statics
	{
		struct RPGCharacterBase_eventGetMaxShield_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetMaxShield_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetMaxShield_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetMaxShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetMaxShield_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetMaxShield_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetMaxShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetMaxShield", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetMaxShield_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetMaxShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMaxShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetMaxShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMaxShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetMaxShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetMaxShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics
	{
		struct RPGCharacterBase_eventGetMoveSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGCharacter|Attributes" },
		{ "Comment", "// Gets the Current value of MoveSpeed\n" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
		{ "ToolTip", "Gets the Current value of MoveSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetMoveSpeed", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetMoveSpeed_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeedBaseValue_Statics
	{
		struct RPGCharacterBase_eventGetMoveSpeedBaseValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeedBaseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetMoveSpeedBaseValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeedBaseValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeedBaseValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeedBaseValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGCharacter|Attributes" },
		{ "Comment", "// Gets the Base value of MoveSpeed\n" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
		{ "ToolTip", "Gets the Base value of MoveSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeedBaseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetMoveSpeedBaseValue", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetMoveSpeedBaseValue_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeedBaseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeedBaseValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeedBaseValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeedBaseValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeedBaseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeedBaseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_GetShield_Statics
	{
		struct RPGCharacterBase_eventGetShield_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacterBase_GetShield_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventGetShield_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_GetShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_GetShield_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_GetShield_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_GetShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "GetShield", nullptr, nullptr, sizeof(RPGCharacterBase_eventGetShield_Parms), Z_Construct_UFunction_ARPGCharacterBase_GetShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetShield_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_GetShield_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_GetShield_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_GetShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_GetShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_IsAlive_Statics
	{
		struct RPGCharacterBase_eventIsAlive_Parms
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
	void Z_Construct_UFunction_ARPGCharacterBase_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGCharacterBase_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGCharacterBase_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGCharacterBase_eventIsAlive_Parms), &Z_Construct_UFunction_ARPGCharacterBase_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_IsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|RPGCharacter" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "IsAlive", nullptr, nullptr, sizeof(RPGCharacterBase_eventIsAlive_Parms), Z_Construct_UFunction_ARPGCharacterBase_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_IsAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_IsAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventPlayHitReact_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact_Statics::NewProp_HitDirection = { "HitDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGCharacterBase_eventPlayHitReact_Parms, HitDirection), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact_Statics::NewProp_HitDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacterBase, nullptr, "PlayHitReact", nullptr, nullptr, sizeof(RPGCharacterBase_eventPlayHitReact_Parms), Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARPGCharacterBase_NoRegister()
	{
		return ARPGCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ARPGCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageNumberClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageNumberClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartupEffects;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartupEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterAbilities;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CharacterAbilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSetBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSetBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCharacterDied_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCharacterDied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowHitReact_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ShowHitReact;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARPGCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGCharacterBase_FinishDying, "FinishDying" }, // 4141394517
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetAbilityLevel, "GetAbilityLevel" }, // 726371055
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetAttackBaseValue, "GetAttackBaseValue" }, // 1267621574
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetAttackSpeed, "GetAttackSpeed" }, // 1652292125
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetHealth, "GetHealth" }, // 2957374762
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetHitReactDirection, "GetHitReactDirection" }, // 549295239
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetMana, "GetMana" }, // 1548268814
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetMaxHealth, "GetMaxHealth" }, // 2026317560
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetMaxMana, "GetMaxMana" }, // 545643942
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetMaxShield, "GetMaxShield" }, // 2678206396
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeed, "GetMoveSpeed" }, // 283603616
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetMoveSpeedBaseValue, "GetMoveSpeedBaseValue" }, // 2427565197
		{ &Z_Construct_UFunction_ARPGCharacterBase_GetShield, "GetShield" }, // 1416757021
		{ &Z_Construct_UFunction_ARPGCharacterBase_IsAlive, "IsAlive" }, // 1626897869
		{ &Z_Construct_UFunction_ARPGCharacterBase_PlayHitReact, "PlayHitReact" }, // 656873584
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* The base Character class for the game. Everything with an AbilitySystemComponent in this game will inherit from this class.\n* This class should not be instantiated and instead subclassed. Will be AI Controlled.\n*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/RPGCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The base Character class for the game. Everything with an AbilitySystemComponent in this game will inherit from this class.\nThis class should not be instantiated and instead subclassed. Will be AI Controlled." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DamageNumberClass_MetaData[] = {
		{ "Category", "RPG|UI" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DamageNumberClass = { "DamageNumberClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, DamageNumberClass), Z_Construct_UClass_URPGDamageTextWidgetComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DamageNumberClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DamageNumberClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_StartupEffects_MetaData[] = {
		{ "Category", "RPG|Abilities" },
		{ "Comment", "// These effects are only applied one time on startup\n" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
		{ "ToolTip", "These effects are only applied one time on startup" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_StartupEffects = { "StartupEffects", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, StartupEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_StartupEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_StartupEffects_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_StartupEffects_Inner = { "StartupEffects", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultAttributes_MetaData[] = {
		{ "Category", "RPG|Abilities" },
		{ "Comment", "// Default attributes for a character for initializing on spawn/respawn.\n// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.\n" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
		{ "ToolTip", "Default attributes for a character for initializing on spawn/respawn.\nThis is an instant GE that overrides the values for attributes that get reset on spawn/respawn." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, DefaultAttributes), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterAbilities_MetaData[] = {
		{ "Category", "RPG|Abilities" },
		{ "Comment", "// Default abilities for this Character. These will be removed on Character death and regiven if Character respawns.\n" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
		{ "ToolTip", "Default abilities for this Character. These will be removed on Character death and regiven if Character respawns." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterAbilities = { "CharacterAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, CharacterAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterAbilities_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterAbilities_Inner = { "CharacterAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URPGGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DeathSound_MetaData[] = {
		{ "Category", "RPG|Audio" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DeathSound = { "DeathSound", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, DeathSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DeathSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DeathSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DeathMontage_MetaData[] = {
		{ "Category", "RPG|Animation" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DeathMontage = { "DeathMontage", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, DeathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DeathMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DeathMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "RPG|RPGCharacter" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, CharacterName), METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AttributeSetBase_MetaData[] = {
		{ "Comment", "// Reference to the AttributeSetBase. It will live on the PlayerState or here if the character doesn't have a PlayerState.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
		{ "ToolTip", "Reference to the AttributeSetBase. It will live on the PlayerState or here if the character doesn't have a PlayerState." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AttributeSetBase = { "AttributeSetBase", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, AttributeSetBase), Z_Construct_UClass_URPGAttributeSetBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AttributeSetBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AttributeSetBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Comment", "// Reference to the ASC. It will live on the PlayerState or here if the character doesn't have a PlayerState.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
		{ "ToolTip", "Reference to the ASC. It will live on the PlayerState or here if the character doesn't have a PlayerState." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, AbilitySystemComponent), Z_Construct_UClass_URPGAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_OnCharacterDied_MetaData[] = {
		{ "Category", "RPG|RPGCharacter" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_OnCharacterDied = { "OnCharacterDied", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, OnCharacterDied), Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_OnCharacterDied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_OnCharacterDied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_ShowHitReact_MetaData[] = {
		{ "Category", "RPG|RPGCharacter" },
		{ "Comment", "// Set the Hit React direction in the Animation Blueprint\n" },
		{ "ModuleRelativePath", "Public/Characters/RPGCharacterBase.h" },
		{ "ToolTip", "Set the Hit React direction in the Animation Blueprint" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_ShowHitReact = { "ShowHitReact", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGCharacterBase, ShowHitReact), Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_ShowHitReact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_ShowHitReact_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DamageNumberClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_StartupEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_StartupEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DefaultAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterAbilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DeathSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_DeathMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_CharacterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AttributeSetBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_AbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_OnCharacterDied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacterBase_Statics::NewProp_ShowHitReact,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARPGCharacterBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ARPGCharacterBase, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGCharacterBase_Statics::ClassParams = {
		&ARPGCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARPGCharacterBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARPGCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGCharacterBase, 2962760580);
	template<> RPG_V1_API UClass* StaticClass<ARPGCharacterBase>()
	{
		return ARPGCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGCharacterBase(Z_Construct_UClass_ARPGCharacterBase, &ARPGCharacterBase::StaticClass, TEXT("/Script/RPG_V1"), TEXT("ARPGCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
