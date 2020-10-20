// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPG_V1_init() {}
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_ReceivedDamageDelegate__DelegateSignature();
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature();
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature();
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature();
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature();
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature();
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature();
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_OnInventoryChanged__DelegateSignature();
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RPG_V1()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RPG_V1_ReceivedDamageDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RPG_V1_RPGPlayMontageAndWaitForEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RPG_V1_CharacterBaseHitReactDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RPG_V1_CharacterDiedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RPG_V1_OnInventoryChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RPG_V1_RPGOnGameplayAttributeValueChangedDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/RPG_V1",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x42D7BC9C,
				0xE27F11BA,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
