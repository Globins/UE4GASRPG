// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/UI/RPGFloatingStatusBarWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGFloatingStatusBarWidget() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_URPGFloatingStatusBarWidget_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGFloatingStatusBarWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGCharacterBase_NoRegister();
// End Cross Module References
	static FName NAME_URPGFloatingStatusBarWidget_SetCharacterName = FName(TEXT("SetCharacterName"));
	void URPGFloatingStatusBarWidget::SetCharacterName(FText const& NewName)
	{
		RPGFloatingStatusBarWidget_eventSetCharacterName_Parms Parms;
		Parms.NewName=NewName;
		ProcessEvent(FindFunctionChecked(NAME_URPGFloatingStatusBarWidget_SetCharacterName),&Parms);
	}
	static FName NAME_URPGFloatingStatusBarWidget_SetHealthPercentage = FName(TEXT("SetHealthPercentage"));
	void URPGFloatingStatusBarWidget::SetHealthPercentage(float HealthPercentage)
	{
		RPGFloatingStatusBarWidget_eventSetHealthPercentage_Parms Parms;
		Parms.HealthPercentage=HealthPercentage;
		ProcessEvent(FindFunctionChecked(NAME_URPGFloatingStatusBarWidget_SetHealthPercentage),&Parms);
	}
	static FName NAME_URPGFloatingStatusBarWidget_SetManaPercentage = FName(TEXT("SetManaPercentage"));
	void URPGFloatingStatusBarWidget::SetManaPercentage(float ManaPercentage)
	{
		RPGFloatingStatusBarWidget_eventSetManaPercentage_Parms Parms;
		Parms.ManaPercentage=ManaPercentage;
		ProcessEvent(FindFunctionChecked(NAME_URPGFloatingStatusBarWidget_SetManaPercentage),&Parms);
	}
	static FName NAME_URPGFloatingStatusBarWidget_SetShieldPercentage = FName(TEXT("SetShieldPercentage"));
	void URPGFloatingStatusBarWidget::SetShieldPercentage(float ShieldPercentage)
	{
		RPGFloatingStatusBarWidget_eventSetShieldPercentage_Parms Parms;
		Parms.ShieldPercentage=ShieldPercentage;
		ProcessEvent(FindFunctionChecked(NAME_URPGFloatingStatusBarWidget_SetShieldPercentage),&Parms);
	}
	void URPGFloatingStatusBarWidget::StaticRegisterNativesURPGFloatingStatusBarWidget()
	{
	}
	struct Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGFloatingStatusBarWidget_eventSetCharacterName_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics::NewProp_NewName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGFloatingStatusBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGFloatingStatusBarWidget, nullptr, "SetCharacterName", nullptr, nullptr, sizeof(RPGFloatingStatusBarWidget_eventSetCharacterName_Parms), Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetHealthPercentage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetHealthPercentage_Statics::NewProp_HealthPercentage = { "HealthPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGFloatingStatusBarWidget_eventSetHealthPercentage_Parms, HealthPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetHealthPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetHealthPercentage_Statics::NewProp_HealthPercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGFloatingStatusBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGFloatingStatusBarWidget, nullptr, "SetHealthPercentage", nullptr, nullptr, sizeof(RPGFloatingStatusBarWidget_eventSetHealthPercentage_Parms), Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetHealthPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetHealthPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetHealthPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetManaPercentage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ManaPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetManaPercentage_Statics::NewProp_ManaPercentage = { "ManaPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGFloatingStatusBarWidget_eventSetManaPercentage_Parms, ManaPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetManaPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetManaPercentage_Statics::NewProp_ManaPercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetManaPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGFloatingStatusBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetManaPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGFloatingStatusBarWidget, nullptr, "SetManaPercentage", nullptr, nullptr, sizeof(RPGFloatingStatusBarWidget_eventSetManaPercentage_Parms), Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetManaPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetManaPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetManaPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetManaPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetManaPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetManaPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetShieldPercentage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShieldPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetShieldPercentage_Statics::NewProp_ShieldPercentage = { "ShieldPercentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGFloatingStatusBarWidget_eventSetShieldPercentage_Parms, ShieldPercentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetShieldPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetShieldPercentage_Statics::NewProp_ShieldPercentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetShieldPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/RPGFloatingStatusBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetShieldPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGFloatingStatusBarWidget, nullptr, "SetShieldPercentage", nullptr, nullptr, sizeof(RPGFloatingStatusBarWidget_eventSetShieldPercentage_Parms), Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetShieldPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetShieldPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetShieldPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetShieldPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetShieldPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetShieldPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGFloatingStatusBarWidget_NoRegister()
	{
		return URPGFloatingStatusBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetCharacterName, "SetCharacterName" }, // 1963608202
		{ &Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetHealthPercentage, "SetHealthPercentage" }, // 3721735062
		{ &Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetManaPercentage, "SetManaPercentage" }, // 2505250380
		{ &Z_Construct_UFunction_URPGFloatingStatusBarWidget_SetShieldPercentage, "SetShieldPercentage" }, // 970573921
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/RPGFloatingStatusBarWidget.h" },
		{ "ModuleRelativePath", "Public/UI/RPGFloatingStatusBarWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::NewProp_OwningCharacter_MetaData[] = {
		{ "Category", "RPGFloatingStatusBarWidget" },
		{ "ModuleRelativePath", "Public/UI/RPGFloatingStatusBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGFloatingStatusBarWidget, OwningCharacter), Z_Construct_UClass_ARPGCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::NewProp_OwningCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::NewProp_OwningCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::NewProp_OwningCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGFloatingStatusBarWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::ClassParams = {
		&URPGFloatingStatusBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGFloatingStatusBarWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGFloatingStatusBarWidget, 262158911);
	template<> RPG_V1_API UClass* StaticClass<URPGFloatingStatusBarWidget>()
	{
		return URPGFloatingStatusBarWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGFloatingStatusBarWidget(Z_Construct_UClass_URPGFloatingStatusBarWidget, &URPGFloatingStatusBarWidget::StaticClass, TEXT("/Script/RPG_V1"), TEXT("URPGFloatingStatusBarWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGFloatingStatusBarWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
