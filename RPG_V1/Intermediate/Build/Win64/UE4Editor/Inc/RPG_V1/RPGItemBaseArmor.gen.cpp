// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Items/RPGItemBaseArmor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGItemBaseArmor() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_URPGItemBaseArmor_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGItemBaseArmor();
	RPG_V1_API UClass* Z_Construct_UClass_URPGItemBase();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
// End Cross Module References
	void URPGItemBaseArmor::StaticRegisterNativesURPGItemBaseArmor()
	{
	}
	UClass* Z_Construct_UClass_URPGItemBaseArmor_NoRegister()
	{
		return URPGItemBaseArmor::StaticClass();
	}
	struct Z_Construct_UClass_URPGItemBaseArmor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGItemBaseArmor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URPGItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItemBaseArmor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/RPGItemBaseArmor.h" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBaseArmor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGItemBaseArmor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGItemBaseArmor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGItemBaseArmor_Statics::ClassParams = {
		&URPGItemBaseArmor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGItemBaseArmor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBaseArmor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGItemBaseArmor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGItemBaseArmor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGItemBaseArmor, 2209002394);
	template<> RPG_V1_API UClass* StaticClass<URPGItemBaseArmor>()
	{
		return URPGItemBaseArmor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGItemBaseArmor(Z_Construct_UClass_URPGItemBaseArmor, &URPGItemBaseArmor::StaticClass, TEXT("/Script/RPG_V1"), TEXT("URPGItemBaseArmor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGItemBaseArmor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
