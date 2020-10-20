// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/UI/RPGDamageTextWidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGDamageTextWidgetComponent() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_URPGDamageTextWidgetComponent_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGDamageTextWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	static FName NAME_URPGDamageTextWidgetComponent_SetDamageText = FName(TEXT("SetDamageText"));
	void URPGDamageTextWidgetComponent::SetDamageText(float Damage, FGameplayTagContainer const& Tags)
	{
		RPGDamageTextWidgetComponent_eventSetDamageText_Parms Parms;
		Parms.Damage=Damage;
		Parms.Tags=Tags;
		ProcessEvent(FindFunctionChecked(NAME_URPGDamageTextWidgetComponent_SetDamageText),&Parms);
	}
	void URPGDamageTextWidgetComponent::StaticRegisterNativesURPGDamageTextWidgetComponent()
	{
	}
	struct Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGDamageTextWidgetComponent_eventSetDamageText_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGDamageTextWidgetComponent_eventSetDamageText_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGDamageTextWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGDamageTextWidgetComponent, nullptr, "SetDamageText", nullptr, nullptr, sizeof(RPGDamageTextWidgetComponent_eventSetDamageText_Parms), Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGDamageTextWidgetComponent_NoRegister()
	{
		return URPGDamageTextWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_URPGDamageTextWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGDamageTextWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGDamageTextWidgetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGDamageTextWidgetComponent_SetDamageText, "SetDamageText" }, // 581982106
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGDamageTextWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UI/RPGDamageTextWidgetComponent.h" },
		{ "ModuleRelativePath", "Public/UI/RPGDamageTextWidgetComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGDamageTextWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGDamageTextWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGDamageTextWidgetComponent_Statics::ClassParams = {
		&URPGDamageTextWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_URPGDamageTextWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGDamageTextWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGDamageTextWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGDamageTextWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGDamageTextWidgetComponent, 3932176210);
	template<> RPG_V1_API UClass* StaticClass<URPGDamageTextWidgetComponent>()
	{
		return URPGDamageTextWidgetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGDamageTextWidgetComponent(Z_Construct_UClass_URPGDamageTextWidgetComponent, &URPGDamageTextWidgetComponent::StaticClass, TEXT("/Script/RPG_V1"), TEXT("URPGDamageTextWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGDamageTextWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
