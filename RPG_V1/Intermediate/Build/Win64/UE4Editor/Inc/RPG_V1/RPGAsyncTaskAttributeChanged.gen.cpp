// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Characters/Abilities/RPGAsyncTaskAttributeChanged.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGAsyncTaskAttributeChanged() {}
// Cross Module References
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	RPG_V1_API UClass* Z_Construct_UClass_URPGAsyncTaskAttributeChanged_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGAsyncTaskAttributeChanged();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics
	{
		struct _Script_RPG_V1_eventOnAttributeChanged_Parms
		{
			FGameplayAttribute Attribute;
			float NewValue;
			float OldValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventOnAttributeChanged_Parms, OldValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventOnAttributeChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_RPG_V1_eventOnAttributeChanged_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::NewProp_OldValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::NewProp_Attribute,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskAttributeChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RPG_V1, nullptr, "OnAttributeChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_RPG_V1_eventOnAttributeChanged_Parms), Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URPGAsyncTaskAttributeChanged::execEndTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAsyncTaskAttributeChanged::execListenForAttributesChange)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_TARRAY(FGameplayAttribute,Z_Param_Attributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URPGAsyncTaskAttributeChanged**)Z_Param__Result=URPGAsyncTaskAttributeChanged::ListenForAttributesChange(Z_Param_AbilitySystemComponent,Z_Param_Attributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGAsyncTaskAttributeChanged::execListenForAttributeChange)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystemComponent);
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URPGAsyncTaskAttributeChanged**)Z_Param__Result=URPGAsyncTaskAttributeChanged::ListenForAttributeChange(Z_Param_AbilitySystemComponent,Z_Param_Attribute);
		P_NATIVE_END;
	}
	void URPGAsyncTaskAttributeChanged::StaticRegisterNativesURPGAsyncTaskAttributeChanged()
	{
		UClass* Class = URPGAsyncTaskAttributeChanged::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndTask", &URPGAsyncTaskAttributeChanged::execEndTask },
			{ "ListenForAttributeChange", &URPGAsyncTaskAttributeChanged::execListenForAttributeChange },
			{ "ListenForAttributesChange", &URPGAsyncTaskAttributeChanged::execListenForAttributesChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_EndTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_EndTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// You must call this function manually when you want the AsyncTask to end.\n// For UMG Widgets, you would call it in the Widget's Destruct event.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskAttributeChanged.h" },
		{ "ToolTip", "You must call this function manually when you want the AsyncTask to end.\nFor UMG Widgets, you would call it in the Widget's Destruct event." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAsyncTaskAttributeChanged, nullptr, "EndTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_EndTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_EndTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_EndTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_EndTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics
	{
		struct RPGAsyncTaskAttributeChanged_eventListenForAttributeChange_Parms
		{
			UAbilitySystemComponent* AbilitySystemComponent;
			FGameplayAttribute Attribute;
			URPGAsyncTaskAttributeChanged* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attribute;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAsyncTaskAttributeChanged_eventListenForAttributeChange_Parms, ReturnValue), Z_Construct_UClass_URPGAsyncTaskAttributeChanged_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAsyncTaskAttributeChanged_eventListenForAttributeChange_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAsyncTaskAttributeChanged_eventListenForAttributeChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::NewProp_AbilitySystemComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "// Listens for an attribute changing.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskAttributeChanged.h" },
		{ "ToolTip", "Listens for an attribute changing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAsyncTaskAttributeChanged, nullptr, "ListenForAttributeChange", nullptr, nullptr, sizeof(RPGAsyncTaskAttributeChanged_eventListenForAttributeChange_Parms), Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics
	{
		struct RPGAsyncTaskAttributeChanged_eventListenForAttributesChange_Parms
		{
			UAbilitySystemComponent* AbilitySystemComponent;
			TArray<FGameplayAttribute> Attributes;
			URPGAsyncTaskAttributeChanged* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAsyncTaskAttributeChanged_eventListenForAttributesChange_Parms, ReturnValue), Z_Construct_UClass_URPGAsyncTaskAttributeChanged_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAsyncTaskAttributeChanged_eventListenForAttributesChange_Parms, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGAsyncTaskAttributeChanged_eventListenForAttributesChange_Parms, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_Attributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_Attributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::NewProp_AbilitySystemComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "// Listens for an attribute changing.\n// Version that takes in an array of Attributes. Check the Attribute output for which Attribute changed.\n" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskAttributeChanged.h" },
		{ "ToolTip", "Listens for an attribute changing.\nVersion that takes in an array of Attributes. Check the Attribute output for which Attribute changed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGAsyncTaskAttributeChanged, nullptr, "ListenForAttributesChange", nullptr, nullptr, sizeof(RPGAsyncTaskAttributeChanged_eventListenForAttributesChange_Parms), Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGAsyncTaskAttributeChanged_NoRegister()
	{
		return URPGAsyncTaskAttributeChanged::StaticClass();
	}
	struct Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAttributeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttributeChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_EndTask, "EndTask" }, // 2041326850
		{ &Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributeChange, "ListenForAttributeChange" }, // 1179014908
		{ &Z_Construct_UFunction_URPGAsyncTaskAttributeChanged_ListenForAttributesChange, "ListenForAttributesChange" }, // 3957338820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint node to automatically register a listener for all attribute changes in an AbilitySystemComponent.\n * Useful to use in UI.\n */" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "Characters/Abilities/RPGAsyncTaskAttributeChanged.h" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskAttributeChanged.h" },
		{ "ToolTip", "Blueprint node to automatically register a listener for all attribute changes in an AbilitySystemComponent.\nUseful to use in UI." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskAttributeChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAsyncTaskAttributeChanged, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::NewProp_ASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::NewProp_ASC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::NewProp_OnAttributeChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/Abilities/RPGAsyncTaskAttributeChanged.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::NewProp_OnAttributeChanged = { "OnAttributeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGAsyncTaskAttributeChanged, OnAttributeChanged), Z_Construct_UDelegateFunction_RPG_V1_OnAttributeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::NewProp_OnAttributeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::NewProp_OnAttributeChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::NewProp_ASC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::NewProp_OnAttributeChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGAsyncTaskAttributeChanged>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::ClassParams = {
		&URPGAsyncTaskAttributeChanged::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGAsyncTaskAttributeChanged()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGAsyncTaskAttributeChanged, 3298849678);
	template<> RPG_V1_API UClass* StaticClass<URPGAsyncTaskAttributeChanged>()
	{
		return URPGAsyncTaskAttributeChanged::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGAsyncTaskAttributeChanged(Z_Construct_UClass_URPGAsyncTaskAttributeChanged, &URPGAsyncTaskAttributeChanged::StaticClass, TEXT("/Script/RPG_V1"), TEXT("URPGAsyncTaskAttributeChanged"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGAsyncTaskAttributeChanged);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
