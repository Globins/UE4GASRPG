// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/AI/RPGPlayerAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGPlayerAIController() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_ARPGPlayerAIController_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGPlayerAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
// End Cross Module References
	void ARPGPlayerAIController::StaticRegisterNativesARPGPlayerAIController()
	{
	}
	UClass* Z_Construct_UClass_ARPGPlayerAIController_NoRegister()
	{
		return ARPGPlayerAIController::StaticClass();
	}
	struct Z_Construct_UClass_ARPGPlayerAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGPlayerAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI/RPGPlayerAIController.h" },
		{ "ModuleRelativePath", "Public/AI/RPGPlayerAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGPlayerAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGPlayerAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGPlayerAIController_Statics::ClassParams = {
		&ARPGPlayerAIController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGPlayerAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGPlayerAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGPlayerAIController, 3814328399);
	template<> RPG_V1_API UClass* StaticClass<ARPGPlayerAIController>()
	{
		return ARPGPlayerAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGPlayerAIController(Z_Construct_UClass_ARPGPlayerAIController, &ARPGPlayerAIController::StaticClass, TEXT("/Script/RPG_V1"), TEXT("ARPGPlayerAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGPlayerAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
