// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Characters/Abilities/RPGAsyncTaskEffectStackChanged.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGAsyncTaskEffectStackChanged() {}
// Cross Module References
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	RPG_V1_API UClass* Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGAsyncTaskEffectStackChanged();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics
	{
		struct _Script_RPG_V1_eventOnGameplayEffectStackChanged_Parms
		{
			FGameplayTag EffectGameplayTag;
			FActiveGameplayEffectHandle Handle;
			int32 NewStackCount;
			int32 OldStackCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OldStackCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewStackCount;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectGameplayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_OldStackCount = { "OldStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventOnGameplayEffectStackChanged_Parms, OldStackCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_NewStackCount = { "NewStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventOnGameplayEffectStackChanged_Parms, NewStackCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventOnGameplayEffectStackChanged_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_EffectGameplayTag = { "EffectGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventOnGameplayEffectStackChanged_Parms, EffectGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_OldStackCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_NewStackCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::NewProp_EffectGameplayTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskEffectStackChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RPG_V1, nullptr, "OnGameplayEffectStackChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_RPG_V1_eventOnGameplayEffectStackChanged_Parms), Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URPGAsyncTaskEffectStackChanged::execEndTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAsyncTaskEffectStackChanged::execListenForGameplayEffectStackChange)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_STRUCT(FGameplayTag,Z_Param_EffectGameplayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URPGAsyncTaskEffectStackChanged**)Z_Param__Result=URPGAsyncTaskEffectStackChanged::ListenForGameplayEffectStackChange(Z_Param_AbilitySystemComponent,Z_Param_EffectGameplayTag);
		P_NATIVE_END;
	}
	void URPGAsyncTaskEffectStackChanged::StaticRegisterNativesURPGAsyncTaskEffectStackChanged()
	{
		UClass* Class = URPGAsyncTaskEffectStackChanged::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTask", &URPGAsyncTaskEffectStackChanged::execEndTask },
			{ "ListenForGameplayEffectStackChange", &URPGAsyncTaskEffectStackChanged::execListenForGameplayEffectStackChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_EndTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_EndTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// You must call this function manually when you want the AsyncTask to end.\n// For UMG Widgets, you would call it in the Widget's Destruct event.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskEffectStackChanged.h" },
		{ "ToolTip", "You must call this function manually when you want the AsyncTask to end.\nFor UMG Widgets, you would call it in the Widget's Destruct event." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAsyncTaskEffectStackChanged, nullptr, "EndTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_EndTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_EndTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_EndTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_EndTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics
	{
		struct RPGAsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms
		{
			UAbilitySystemComponent* AbilitySystemComponent;
			FGameplayTag EffectGameplayTag;
			URPGAsyncTaskEffectStackChanged* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectGameplayTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms, ReturnValue), Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_EffectGameplayTag = { "EffectGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms, EffectGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_EffectGameplayTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::NewProp_AbilitySystemComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskEffectStackChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAsyncTaskEffectStackChanged, nullptr, "ListenForGameplayEffectStackChange", nullptr, nullptr, sizeof(RPGAsyncTaskEffectStackChanged_eventListenForGameplayEffectStackChange_Parms), Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_NoRegister()
	{
		return URPGAsyncTaskEffectStackChanged::StaticClass();
	}
	struct Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ASC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameplayEffectStackChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameplayEffectStackChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_EndTask, "EndTask" }, // 1719717819
		{ &Z_Construct_UFunction_URPGAsyncTaskEffectStackChanged_ListenForGameplayEffectStackChange, "ListenForGameplayEffectStackChange" }, // 4166568921
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint node to automatically register a listener for changes to a GameplayEffect's stack count based on an Asset or Granted tag on the Effect.\n * Useful to use in UI.\n */" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "Characters/Abilities/RPGAsyncTaskEffectStackChanged.h" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskEffectStackChanged.h" },
		{ "ToolTip", "Blueprint node to automatically register a listener for changes to a GameplayEffect's stack count based on an Asset or Granted tag on the Effect.\nUseful to use in UI." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskEffectStackChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAsyncTaskEffectStackChanged, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::NewProp_ASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::NewProp_ASC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskEffectStackChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange = { "OnGameplayEffectStackChange", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAsyncTaskEffectStackChanged, OnGameplayEffectStackChange), Z_Construct_UDelegateFunction_RPG_V1_OnGameplayEffectStackChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::NewProp_ASC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::NewProp_OnGameplayEffectStackChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGAsyncTaskEffectStackChanged>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::ClassParams = {
		&URPGAsyncTaskEffectStackChanged::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGAsyncTaskEffectStackChanged()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGAsyncTaskEffectStackChanged, 2448629685);
	template<> RPG_V1_API UClass* StaticClass<URPGAsyncTaskEffectStackChanged>()
	{
		return URPGAsyncTaskEffectStackChanged::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGAsyncTaskEffectStackChanged(Z_Construct_UClass_URPGAsyncTaskEffectStackChanged, &URPGAsyncTaskEffectStackChanged::StaticClass, TEXT("/Script/RPG_V1"), TEXT("URPGAsyncTaskEffectStackChanged"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGAsyncTaskEffectStackChanged);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
