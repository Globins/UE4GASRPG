// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Inventory/RPGExternalStorageActorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGExternalStorageActorBase() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_ARPGExternalStorageActorBase_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGExternalStorageActorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
// End Cross Module References
	void ARPGExternalStorageActorBase::StaticRegisterNativesARPGExternalStorageActorBase()
	{
	}
	UClass* Z_Construct_UClass_ARPGExternalStorageActorBase_NoRegister()
	{
		return ARPGExternalStorageActorBase::StaticClass();
	}
	struct Z_Construct_UClass_ARPGExternalStorageActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGExternalStorageActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGExternalStorageActorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/RPGExternalStorageActorBase.h" },
		{ "ModuleRelativePath", "Public/Inventory/RPGExternalStorageActorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGExternalStorageActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGExternalStorageActorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGExternalStorageActorBase_Statics::ClassParams = {
		&ARPGExternalStorageActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARPGExternalStorageActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGExternalStorageActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGExternalStorageActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGExternalStorageActorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGExternalStorageActorBase, 1356881871);
	template<> RPG_V1_API UClass* StaticClass<ARPGExternalStorageActorBase>()
	{
		return ARPGExternalStorageActorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGExternalStorageActorBase(Z_Construct_UClass_ARPGExternalStorageActorBase, &ARPGExternalStorageActorBase::StaticClass, TEXT("/Script/RPG_V1"), TEXT("ARPGExternalStorageActorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGExternalStorageActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
