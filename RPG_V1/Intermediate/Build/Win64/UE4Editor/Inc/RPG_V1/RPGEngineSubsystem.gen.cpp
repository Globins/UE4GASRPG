// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/RPGEngineSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGEngineSubsystem() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_URPGEngineSubsystem_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
// End Cross Module References
	void URPGEngineSubsystem::StaticRegisterNativesURPGEngineSubsystem()
	{
	}
	UClass* Z_Construct_UClass_URPGEngineSubsystem_NoRegister()
	{
		return URPGEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_URPGEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RPGEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/RPGEngineSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGEngineSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGEngineSubsystem_Statics::ClassParams = {
		&URPGEngineSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URPGEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGEngineSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGEngineSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGEngineSubsystem, 763048858);
	template<> RPG_V1_API UClass* StaticClass<URPGEngineSubsystem>()
	{
		return URPGEngineSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGEngineSubsystem(Z_Construct_UClass_URPGEngineSubsystem, &URPGEngineSubsystem::StaticClass, TEXT("/Script/RPG_V1"), TEXT("URPGEngineSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGEngineSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
