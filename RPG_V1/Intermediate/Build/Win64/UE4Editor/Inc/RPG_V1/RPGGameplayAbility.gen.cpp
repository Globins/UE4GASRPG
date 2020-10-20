// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Characters/Abilities/RPGGameplayAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGGameplayAbility() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_URPGGameplayAbility_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	RPG_V1_API UEnum* Z_Construct_UEnum_RPG_V1_ERPGAbilityInputID();
// End Cross Module References
	void URPGGameplayAbility::StaticRegisterNativesURPGGameplayAbility()
	{
	}
	UClass* Z_Construct_UClass_URPGGameplayAbility_NoRegister()
	{
		return URPGGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_URPGGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateAbilityOnGranted_MetaData[];
#endif
		static void NewProp_ActivateAbilityOnGranted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActivateAbilityOnGranted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbilityID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbilityID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AbilityInputID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AbilityInputID_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Characters/Abilities/RPGGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGGameplayAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Tells an ability to activate immediately when its granted. Used for passive abilities and abilities forced on others.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGGameplayAbility.h" },
		{ "ToolTip", "Tells an ability to activate immediately when its granted. Used for passive abilities and abilities forced on others." },
	};
#endif
	void Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_SetBit(void* Obj)
	{
		((URPGGameplayAbility*)Obj)->ActivateAbilityOnGranted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted = { "ActivateAbilityOnGranted", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URPGGameplayAbility), &Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_SetBit, METADATA_PARAMS(Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityID_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Value to associate an ability with an slot without tying it to an automatically activated input.\n// Passive abilities won't be tied to an input so we need a way to generically associate abilities with slots.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGGameplayAbility.h" },
		{ "ToolTip", "Value to associate an ability with an slot without tying it to an automatically activated input.\nPassive abilities won't be tied to an input so we need a way to generically associate abilities with slots." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityID = { "AbilityID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGGameplayAbility, AbilityID), Z_Construct_UEnum_RPG_V1_ERPGAbilityInputID, METADATA_PARAMS(Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "// Abilities with this set will automatically activate when the input is pressed\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGGameplayAbility.h" },
		{ "ToolTip", "Abilities with this set will automatically activate when the input is pressed" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGGameplayAbility, AbilityInputID), Z_Construct_UEnum_RPG_V1_ERPGAbilityInputID, METADATA_PARAMS(Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityInputID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityInputID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGGameplayAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_ActivateAbilityOnGranted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityInputID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGGameplayAbility_Statics::NewProp_AbilityInputID_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGGameplayAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGGameplayAbility_Statics::ClassParams = {
		&URPGGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URPGGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGGameplayAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGGameplayAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGGameplayAbility, 3543795126);
	template<> RPG_V1_API UClass* StaticClass<URPGGameplayAbility>()
	{
		return URPGGameplayAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGGameplayAbility(Z_Construct_UClass_URPGGameplayAbility, &URPGGameplayAbility::StaticClass, TEXT("/Script/RPG_V1"), TEXT("URPGGameplayAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGGameplayAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
