// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Player/RPGPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGPlayerController() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_ARPGPlayerController_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGCharacterBase_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGHUDWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(ARPGPlayerController::execServerKill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerKill_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerController::execKill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Kill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerController::execClientSetControlRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientSetControlRotation_Validate(Z_Param_NewRotation))
		{
			RPC_ValidateFailed(TEXT("ClientSetControlRotation_Validate"));
			return;
		}
		P_THIS->ClientSetControlRotation_Implementation(Z_Param_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerController::execSetRespawnCountdown)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RespawnTimeRemaining);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SetRespawnCountdown_Validate(Z_Param_RespawnTimeRemaining))
		{
			RPC_ValidateFailed(TEXT("SetRespawnCountdown_Validate"));
			return;
		}
		P_THIS->SetRespawnCountdown_Implementation(Z_Param_RespawnTimeRemaining);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerController::execShowDamageNumber)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_GET_OBJECT(ARPGCharacterBase,Z_Param_TargetCharacter);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_DamageNumberTaRPG);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ShowDamageNumber_Validate(Z_Param_DamageAmount,Z_Param_TargetCharacter,Z_Param_DamageNumberTaRPG))
		{
			RPC_ValidateFailed(TEXT("ShowDamageNumber_Validate"));
			return;
		}
		P_THIS->ShowDamageNumber_Implementation(Z_Param_DamageAmount,Z_Param_TargetCharacter,Z_Param_DamageNumberTaRPG);
		P_NATIVE_END;
	}
	static FName NAME_ARPGPlayerController_ClientSetControlRotation = FName(TEXT("ClientSetControlRotation"));
	void ARPGPlayerController::ClientSetControlRotation(FRotator NewRotation)
	{
		RPGPlayerController_eventClientSetControlRotation_Parms Parms;
		Parms.NewRotation=NewRotation;
		ProcessEvent(FindFunctionChecked(NAME_ARPGPlayerController_ClientSetControlRotation),&Parms);
	}
	static FName NAME_ARPGPlayerController_ServerKill = FName(TEXT("ServerKill"));
	void ARPGPlayerController::ServerKill()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARPGPlayerController_ServerKill),NULL);
	}
	static FName NAME_ARPGPlayerController_SetRespawnCountdown = FName(TEXT("SetRespawnCountdown"));
	void ARPGPlayerController::SetRespawnCountdown(float RespawnTimeRemaining)
	{
		RPGPlayerController_eventSetRespawnCountdown_Parms Parms;
		Parms.RespawnTimeRemaining=RespawnTimeRemaining;
		ProcessEvent(FindFunctionChecked(NAME_ARPGPlayerController_SetRespawnCountdown),&Parms);
	}
	static FName NAME_ARPGPlayerController_ShowDamageNumber = FName(TEXT("ShowDamageNumber"));
	void ARPGPlayerController::ShowDamageNumber(float DamageAmount, ARPGCharacterBase* TargetCharacter, FGameplayTagContainer DamageNumberTaRPG)
	{
		RPGPlayerController_eventShowDamageNumber_Parms Parms;
		Parms.DamageAmount=DamageAmount;
		Parms.TargetCharacter=TargetCharacter;
		Parms.DamageNumberTaRPG=DamageNumberTaRPG;
		ProcessEvent(FindFunctionChecked(NAME_ARPGPlayerController_ShowDamageNumber),&Parms);
	}
	void ARPGPlayerController::StaticRegisterNativesARPGPlayerController()
	{
		UClass* Class = ARPGPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientSetControlRotation", &ARPGPlayerController::execClientSetControlRotation },
			{ "Kill", &ARPGPlayerController::execKill },
			{ "ServerKill", &ARPGPlayerController::execServerKill },
			{ "SetRespawnCountdown", &ARPGPlayerController::execSetRespawnCountdown },
			{ "ShowDamageNumber", &ARPGPlayerController::execShowDamageNumber },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARPGPlayerController_ClientSetControlRotation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGPlayerController_ClientSetControlRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerController_eventClientSetControlRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerController_ClientSetControlRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerController_ClientSetControlRotation_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerController_ClientSetControlRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/RPGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerController_ClientSetControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerController, nullptr, "ClientSetControlRotation", nullptr, nullptr, sizeof(RPGPlayerController_eventClientSetControlRotation_Parms), Z_Construct_UFunction_ARPGPlayerController_ClientSetControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerController_ClientSetControlRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81820CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerController_ClientSetControlRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerController_ClientSetControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerController_ClientSetControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerController_ClientSetControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerController_Kill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerController_Kill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/RPGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerController_Kill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerController, nullptr, "Kill", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerController_Kill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerController_Kill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerController_Kill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerController_Kill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerController_ServerKill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerController_ServerKill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/RPGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerController_ServerKill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerController, nullptr, "ServerKill", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerController_ServerKill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerController_ServerKill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerController_ServerKill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerController_ServerKill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerController_SetRespawnCountdown_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnTimeRemaining;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerController_SetRespawnCountdown_Statics::NewProp_RespawnTimeRemaining = { "RespawnTimeRemaining", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerController_eventSetRespawnCountdown_Parms, RespawnTimeRemaining), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerController_SetRespawnCountdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerController_SetRespawnCountdown_Statics::NewProp_RespawnTimeRemaining,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerController_SetRespawnCountdown_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Simple way to RPC to the client the countdown until they respawn from the GameMode. Will be latency amount of out sync with the Server.\n" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerController.h" },
		{ "ToolTip", "Simple way to RPC to the client the countdown until they respawn from the GameMode. Will be latency amount of out sync with the Server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerController_SetRespawnCountdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerController, nullptr, "SetRespawnCountdown", nullptr, nullptr, sizeof(RPGPlayerController_eventSetRespawnCountdown_Parms), Z_Construct_UFunction_ARPGPlayerController_SetRespawnCountdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerController_SetRespawnCountdown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerController_SetRespawnCountdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerController_SetRespawnCountdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerController_SetRespawnCountdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerController_SetRespawnCountdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageNumberTaRPG;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::NewProp_DamageNumberTaRPG = { "DamageNumberTaRPG", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerController_eventShowDamageNumber_Parms, DamageNumberTaRPG), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerController_eventShowDamageNumber_Parms, TargetCharacter), Z_Construct_UClass_ARPGCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerController_eventShowDamageNumber_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::NewProp_DamageNumberTaRPG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::NewProp_TargetCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/RPGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerController, nullptr, "ShowDamageNumber", nullptr, nullptr, sizeof(RPGPlayerController_eventShowDamageNumber_Parms), Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARPGPlayerController_NoRegister()
	{
		return ARPGPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ARPGPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIHUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIHUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIHUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UIHUDWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARPGPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGPlayerController_ClientSetControlRotation, "ClientSetControlRotation" }, // 2822146994
		{ &Z_Construct_UFunction_ARPGPlayerController_Kill, "Kill" }, // 978966347
		{ &Z_Construct_UFunction_ARPGPlayerController_ServerKill, "ServerKill" }, // 589589644
		{ &Z_Construct_UFunction_ARPGPlayerController_SetRespawnCountdown, "SetRespawnCountdown" }, // 3542154026
		{ &Z_Construct_UFunction_ARPGPlayerController_ShowDamageNumber, "ShowDamageNumber" }, // 675695447
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/RPGPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_UIHUDWidget_MetaData[] = {
		{ "Category", "RPG|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_UIHUDWidget = { "UIHUDWidget", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerController, UIHUDWidget), Z_Construct_UClass_URPGHUDWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_UIHUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_UIHUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_UIHUDWidgetClass_MetaData[] = {
		{ "Category", "RPG|UI" },
		{ "ModuleRelativePath", "Public/Player/RPGPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_UIHUDWidgetClass = { "UIHUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerController, UIHUDWidgetClass), Z_Construct_UClass_URPGHUDWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_UIHUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_UIHUDWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_UIHUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerController_Statics::NewProp_UIHUDWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGPlayerController_Statics::ClassParams = {
		&ARPGPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARPGPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGPlayerController, 3993595404);
	template<> RPG_V1_API UClass* StaticClass<ARPGPlayerController>()
	{
		return ARPGPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGPlayerController(Z_Construct_UClass_ARPGPlayerController, &ARPGPlayerController::StaticClass, TEXT("/Script/RPG_V1"), TEXT("ARPGPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
