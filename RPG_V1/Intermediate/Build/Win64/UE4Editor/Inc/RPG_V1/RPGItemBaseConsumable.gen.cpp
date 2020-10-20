// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Items/RPGItemBaseConsumable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGItemBaseConsumable() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_URPGItemBaseConsumable_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGItemBaseConsumable();
	RPG_V1_API UClass* Z_Construct_UClass_URPGItemBase();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
// End Cross Module References
	void URPGItemBaseConsumable::StaticRegisterNativesURPGItemBaseConsumable()
	{
	}
	UClass* Z_Construct_UClass_URPGItemBaseConsumable_NoRegister()
	{
		return URPGItemBaseConsumable::StaticClass();
	}
	struct Z_Construct_UClass_URPGItemBaseConsumable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGItemBaseConsumable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URPGItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItemBaseConsumable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/RPGItemBaseConsumable.h" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBaseConsumable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGItemBaseConsumable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGItemBaseConsumable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGItemBaseConsumable_Statics::ClassParams = {
		&URPGItemBaseConsumable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URPGItemBaseConsumable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBaseConsumable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGItemBaseConsumable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGItemBaseConsumable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGItemBaseConsumable, 1297290912);
	template<> RPG_V1_API UClass* StaticClass<URPGItemBaseConsumable>()
	{
		return URPGItemBaseConsumable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGItemBaseConsumable(Z_Construct_UClass_URPGItemBaseConsumable, &URPGItemBaseConsumable::StaticClass, TEXT("/Script/RPG_V1"), TEXT("URPGItemBaseConsumable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGItemBaseConsumable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
