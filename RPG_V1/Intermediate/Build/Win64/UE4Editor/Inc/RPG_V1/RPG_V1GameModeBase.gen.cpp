// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/RPG_V1GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPG_V1GameModeBase() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_ARPG_V1GameModeBase_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_ARPG_V1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
// End Cross Module References
	void ARPG_V1GameModeBase::StaticRegisterNativesARPG_V1GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARPG_V1GameModeBase_NoRegister()
	{
		return ARPG_V1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARPG_V1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPG_V1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPG_V1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RPG_V1GameModeBase.h" },
		{ "ModuleRelativePath", "RPG_V1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPG_V1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPG_V1GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPG_V1GameModeBase_Statics::ClassParams = {
		&ARPG_V1GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARPG_V1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPG_V1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPG_V1GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPG_V1GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPG_V1GameModeBase, 3241709297);
	template<> RPG_V1_API UClass* StaticClass<ARPG_V1GameModeBase>()
	{
		return ARPG_V1GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPG_V1GameModeBase(Z_Construct_UClass_ARPG_V1GameModeBase, &ARPG_V1GameModeBase::StaticClass, TEXT("/Script/RPG_V1"), TEXT("ARPG_V1GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPG_V1GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
