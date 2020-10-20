// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Characters/Abilities/RPGAsyncTaskCooldownChanged.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGAsyncTaskCooldownChanged() {}
// Cross Module References
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	RPG_V1_API UClass* Z_Construct_UClass_URPGAsyncTaskCooldownChanged_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGAsyncTaskCooldownChanged();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics
	{
		struct _Script_RPG_V1_eventOnCooldownChanged_Parms
		{
			FGameplayTag CooldownTag;
			float TimeRemaining;
			float Duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventOnCooldownChanged_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventOnCooldownChanged_Parms, TimeRemaining), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTag = { "CooldownTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventOnCooldownChanged_Parms, CooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::NewProp_TimeRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::NewProp_CooldownTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskCooldownChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RPG_V1, nullptr, "OnCooldownChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_RPG_V1_eventOnCooldownChanged_Parms), Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URPGAsyncTaskCooldownChanged::execEndTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAsyncTaskCooldownChanged::execListenForCooldownChange)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_CooldownTags);
		P_GET_UBOOL(Z_Param_UseServerCooldown);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URPGAsyncTaskCooldownChanged**)Z_Param__Result=URPGAsyncTaskCooldownChanged::ListenForCooldownChange(Z_Param_AbilitySystemComponent,Z_Param_CooldownTags,Z_Param_UseServerCooldown);
		P_NATIVE_END;
	}
	void URPGAsyncTaskCooldownChanged::StaticRegisterNativesURPGAsyncTaskCooldownChanged()
	{
		UClass* Class = URPGAsyncTaskCooldownChanged::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTask", &URPGAsyncTaskCooldownChanged::execEndTask },
			{ "ListenForCooldownChange", &URPGAsyncTaskCooldownChanged::execListenForCooldownChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_EndTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_EndTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// You must call this function manually when you want the AsyncTask to end.\n// For UMG Widgets, you would call it in the Widget's Destruct event.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskCooldownChanged.h" },
		{ "ToolTip", "You must call this function manually when you want the AsyncTask to end.\nFor UMG Widgets, you would call it in the Widget's Destruct event." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAsyncTaskCooldownChanged, nullptr, "EndTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_EndTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_EndTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_EndTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_EndTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics
	{
		struct RPGAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms
		{
			UAbilitySystemComponent* AbilitySystemComponent;
			FGameplayTagContainer CooldownTags;
			bool UseServerCooldown;
			URPGAsyncTaskCooldownChanged* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_UseServerCooldown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseServerCooldown;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownTags;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms, ReturnValue), Z_Construct_UClass_URPGAsyncTaskCooldownChanged_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_UseServerCooldown_SetBit(void* Obj)
	{
		((RPGAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms*)Obj)->UseServerCooldown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_UseServerCooldown = { "UseServerCooldown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms), &Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_UseServerCooldown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_CooldownTags = { "CooldownTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms, CooldownTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_UseServerCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_CooldownTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::NewProp_AbilitySystemComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "// Listens for changes (Begin and End) to cooldown GameplayEffects based on the cooldown tag.\n// UseServerCooldown determines if the Sever's cooldown is returned in addition to the local predicted cooldown.\n// If using ServerCooldown, TimeRemaining and Duration will return -1 to signal local predicted cooldown has begun.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskCooldownChanged.h" },
		{ "ToolTip", "Listens for changes (Begin and End) to cooldown GameplayEffects based on the cooldown tag.\nUseServerCooldown determines if the Sever's cooldown is returned in addition to the local predicted cooldown.\nIf using ServerCooldown, TimeRemaining and Duration will return -1 to signal local predicted cooldown has begun." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAsyncTaskCooldownChanged, nullptr, "ListenForCooldownChange", nullptr, nullptr, sizeof(RPGAsyncTaskCooldownChanged_eventListenForCooldownChange_Parms), Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGAsyncTaskCooldownChanged_NoRegister()
	{
		return URPGAsyncTaskCooldownChanged::StaticClass();
	}
	struct Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCooldownEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCooldownEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCooldownBegin_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCooldownBegin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_EndTask, "EndTask" }, // 1734563829
		{ &Z_Construct_UFunction_URPGAsyncTaskCooldownChanged_ListenForCooldownChange, "ListenForCooldownChange" }, // 2031898407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint node to automatically register a listener for changes (Begin and End) to an array of Cooldown tags.\n * Useful to use in UI.\n */" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "Characters/Abilities/RPGAsyncTaskCooldownChanged.h" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskCooldownChanged.h" },
		{ "ToolTip", "Blueprint node to automatically register a listener for changes (Begin and End) to an array of Cooldown tags.\nUseful to use in UI." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskCooldownChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAsyncTaskCooldownChanged, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_ASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_ASC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskCooldownChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownEnd = { "OnCooldownEnd", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAsyncTaskCooldownChanged, OnCooldownEnd), Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownBegin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskCooldownChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownBegin = { "OnCooldownBegin", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAsyncTaskCooldownChanged, OnCooldownBegin), Z_Construct_UDelegateFunction_RPG_V1_OnCooldownChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownBegin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_ASC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::NewProp_OnCooldownBegin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGAsyncTaskCooldownChanged>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::ClassParams = {
		&URPGAsyncTaskCooldownChanged::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGAsyncTaskCooldownChanged()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGAsyncTaskCooldownChanged, 801221373);
	template<> RPG_V1_API UClass* StaticClass<URPGAsyncTaskCooldownChanged>()
	{
		return URPGAsyncTaskCooldownChanged::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGAsyncTaskCooldownChanged(Z_Construct_UClass_URPGAsyncTaskCooldownChanged, &URPGAsyncTaskCooldownChanged::StaticClass, TEXT("/Script/RPG_V1"), TEXT("URPGAsyncTaskCooldownChanged"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGAsyncTaskCooldownChanged);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
