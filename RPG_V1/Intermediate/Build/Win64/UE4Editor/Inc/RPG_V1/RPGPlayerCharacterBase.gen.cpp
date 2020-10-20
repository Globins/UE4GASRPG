// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Characters/Player/RPGPlayerCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGPlayerCharacterBase() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_ARPGPlayerCharacterBase_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGPlayerCharacterBase();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGCharacterBase();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	RPG_V1_API UClass* Z_Construct_UClass_URPGInventoryComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGFloatingStatusBarWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARPGPlayerCharacterBase::execInitializeFloatingStatusBar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeFloatingStatusBar();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerCharacterBase::execServerDropItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DroppedItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerDropItem_Implementation(Z_Param_DroppedItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerCharacterBase::execDropItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DroppedItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropItem(Z_Param_DroppedItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerCharacterBase::execServerSwapInventoryItems)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SwappingIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SwappedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSwapInventoryItems_Implementation(Z_Param_SwappingIndex,Z_Param_SwappedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerCharacterBase::execSwapInventoryItems)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SwappingIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SwappedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapInventoryItems(Z_Param_SwappingIndex,Z_Param_SwappedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerCharacterBase::execServerInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerInteract_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerCharacterBase::execInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerCharacterBase::execGetStartingCameraBoomLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetStartingCameraBoomLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerCharacterBase::execGetStartingCameraBoomArmLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStartingCameraBoomArmLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPlayerCharacterBase::execGetInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URPGInventoryComponent**)Z_Param__Result=P_THIS->GetInventory();
		P_NATIVE_END;
	}
	static FName NAME_ARPGPlayerCharacterBase_ServerDropItem = FName(TEXT("ServerDropItem"));
	void ARPGPlayerCharacterBase::ServerDropItem(int32 DroppedItem)
	{
		RPGPlayerCharacterBase_eventServerDropItem_Parms Parms;
		Parms.DroppedItem=DroppedItem;
		ProcessEvent(FindFunctionChecked(NAME_ARPGPlayerCharacterBase_ServerDropItem),&Parms);
	}
	static FName NAME_ARPGPlayerCharacterBase_ServerInteract = FName(TEXT("ServerInteract"));
	void ARPGPlayerCharacterBase::ServerInteract()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARPGPlayerCharacterBase_ServerInteract),NULL);
	}
	static FName NAME_ARPGPlayerCharacterBase_ServerSwapInventoryItems = FName(TEXT("ServerSwapInventoryItems"));
	void ARPGPlayerCharacterBase::ServerSwapInventoryItems(int32 SwappingIndex, int32 SwappedIndex)
	{
		RPGPlayerCharacterBase_eventServerSwapInventoryItems_Parms Parms;
		Parms.SwappingIndex=SwappingIndex;
		Parms.SwappedIndex=SwappedIndex;
		ProcessEvent(FindFunctionChecked(NAME_ARPGPlayerCharacterBase_ServerSwapInventoryItems),&Parms);
	}
	void ARPGPlayerCharacterBase::StaticRegisterNativesARPGPlayerCharacterBase()
	{
		UClass* Class = ARPGPlayerCharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropItem", &ARPGPlayerCharacterBase::execDropItem },
			{ "GetInventory", &ARPGPlayerCharacterBase::execGetInventory },
			{ "GetStartingCameraBoomArmLength", &ARPGPlayerCharacterBase::execGetStartingCameraBoomArmLength },
			{ "GetStartingCameraBoomLocation", &ARPGPlayerCharacterBase::execGetStartingCameraBoomLocation },
			{ "InitializeFloatingStatusBar", &ARPGPlayerCharacterBase::execInitializeFloatingStatusBar },
			{ "Interact", &ARPGPlayerCharacterBase::execInteract },
			{ "ServerDropItem", &ARPGPlayerCharacterBase::execServerDropItem },
			{ "ServerInteract", &ARPGPlayerCharacterBase::execServerInteract },
			{ "ServerSwapInventoryItems", &ARPGPlayerCharacterBase::execServerSwapInventoryItems },
			{ "SwapInventoryItems", &ARPGPlayerCharacterBase::execSwapInventoryItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARPGPlayerCharacterBase_DropItem_Statics
	{
		struct RPGPlayerCharacterBase_eventDropItem_Parms
		{
			int32 DroppedItem;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DroppedItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARPGPlayerCharacterBase_DropItem_Statics::NewProp_DroppedItem = { "DroppedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerCharacterBase_eventDropItem_Parms, DroppedItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerCharacterBase_DropItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerCharacterBase_DropItem_Statics::NewProp_DroppedItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerCharacterBase_DropItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerCharacterBase_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerCharacterBase, nullptr, "DropItem", nullptr, nullptr, sizeof(RPGPlayerCharacterBase_eventDropItem_Parms), Z_Construct_UFunction_ARPGPlayerCharacterBase_DropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_DropItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerCharacterBase_DropItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_DropItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerCharacterBase_DropItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerCharacterBase_DropItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics
	{
		struct RPGPlayerCharacterBase_eventGetInventory_Parms
		{
			URPGInventoryComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerCharacterBase_eventGetInventory_Parms, ReturnValue), Z_Construct_UClass_URPGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerCharacterBase, nullptr, "GetInventory", nullptr, nullptr, sizeof(RPGPlayerCharacterBase_eventGetInventory_Parms), Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics
	{
		struct RPGPlayerCharacterBase_eventGetStartingCameraBoomArmLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerCharacterBase_eventGetStartingCameraBoomArmLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Camera" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerCharacterBase, nullptr, "GetStartingCameraBoomArmLength", nullptr, nullptr, sizeof(RPGPlayerCharacterBase_eventGetStartingCameraBoomArmLength_Parms), Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomArmLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomArmLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomLocation_Statics
	{
		struct RPGPlayerCharacterBase_eventGetStartingCameraBoomLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerCharacterBase_eventGetStartingCameraBoomLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Camera" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerCharacterBase, nullptr, "GetStartingCameraBoomLocation", nullptr, nullptr, sizeof(RPGPlayerCharacterBase_eventGetStartingCameraBoomLocation_Parms), Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerCharacterBase_InitializeFloatingStatusBar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerCharacterBase_InitializeFloatingStatusBar_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Creates and initializes the floating status bar for heroes.\n// Safe to call many times because it checks to make sure it only executes once.\n" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
		{ "ToolTip", "Creates and initializes the floating status bar for heroes.\nSafe to call many times because it checks to make sure it only executes once." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerCharacterBase_InitializeFloatingStatusBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerCharacterBase, nullptr, "InitializeFloatingStatusBar", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerCharacterBase_InitializeFloatingStatusBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_InitializeFloatingStatusBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerCharacterBase_InitializeFloatingStatusBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerCharacterBase_InitializeFloatingStatusBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerCharacterBase_Interact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerCharacterBase_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerCharacterBase_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerCharacterBase, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerCharacterBase_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerCharacterBase_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerCharacterBase_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerDropItem_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DroppedItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerDropItem_Statics::NewProp_DroppedItem = { "DroppedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerCharacterBase_eventServerDropItem_Parms, DroppedItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerDropItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerDropItem_Statics::NewProp_DroppedItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerDropItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerDropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerCharacterBase, nullptr, "ServerDropItem", nullptr, nullptr, sizeof(RPGPlayerCharacterBase_eventServerDropItem_Parms), Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerDropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerDropItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerDropItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerDropItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerDropItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerDropItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerCharacterBase, nullptr, "ServerInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SwappedIndex;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SwappingIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems_Statics::NewProp_SwappedIndex = { "SwappedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerCharacterBase_eventServerSwapInventoryItems_Parms, SwappedIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems_Statics::NewProp_SwappingIndex = { "SwappingIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerCharacterBase_eventServerSwapInventoryItems_Parms, SwappingIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems_Statics::NewProp_SwappedIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems_Statics::NewProp_SwappingIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerCharacterBase, nullptr, "ServerSwapInventoryItems", nullptr, nullptr, sizeof(RPGPlayerCharacterBase_eventServerSwapInventoryItems_Parms), Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems_Statics
	{
		struct RPGPlayerCharacterBase_eventSwapInventoryItems_Parms
		{
			int32 SwappingIndex;
			int32 SwappedIndex;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SwappedIndex;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SwappingIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems_Statics::NewProp_SwappedIndex = { "SwappedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerCharacterBase_eventSwapInventoryItems_Parms, SwappedIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems_Statics::NewProp_SwappingIndex = { "SwappingIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPlayerCharacterBase_eventSwapInventoryItems_Parms, SwappingIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems_Statics::NewProp_SwappedIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems_Statics::NewProp_SwappingIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPlayerCharacterBase, nullptr, "SwapInventoryItems", nullptr, nullptr, sizeof(RPGPlayerCharacterBase_eventSwapInventoryItems_Parms), Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARPGPlayerCharacterBase_NoRegister()
	{
		return ARPGPlayerCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ARPGPlayerCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DeathEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReviveEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReviveEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KnockDownEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_KnockDownEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIFloatingStatusBarClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UIFloatingStatusBarClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIFloatingStatusBarComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIFloatingStatusBarComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIFloatingStatusBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIFloatingStatusBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingCameraBoomLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartingCameraBoomLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingCameraBoomArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingCameraBoomArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReviveDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReviveDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARPGCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGPlayerCharacterBase_DropItem, "DropItem" }, // 2725234539
		{ &Z_Construct_UFunction_ARPGPlayerCharacterBase_GetInventory, "GetInventory" }, // 1612894821
		{ &Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomArmLength, "GetStartingCameraBoomArmLength" }, // 1473581658
		{ &Z_Construct_UFunction_ARPGPlayerCharacterBase_GetStartingCameraBoomLocation, "GetStartingCameraBoomLocation" }, // 3177863868
		{ &Z_Construct_UFunction_ARPGPlayerCharacterBase_InitializeFloatingStatusBar, "InitializeFloatingStatusBar" }, // 3193385232
		{ &Z_Construct_UFunction_ARPGPlayerCharacterBase_Interact, "Interact" }, // 2846771012
		{ &Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerDropItem, "ServerDropItem" }, // 225110351
		{ &Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerInteract, "ServerInteract" }, // 1835249461
		{ &Z_Construct_UFunction_ARPGPlayerCharacterBase_ServerSwapInventoryItems, "ServerSwapInventoryItems" }, // 2524568186
		{ &Z_Construct_UFunction_ARPGPlayerCharacterBase_SwapInventoryItems, "SwapInventoryItems" }, // 4265331978
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A player or AI controlled hero character.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Player/RPGPlayerCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A player or AI controlled hero character." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_DeathEffect_MetaData[] = {
		{ "Category", "RPG|PlayerCharacterBase" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_DeathEffect = { "DeathEffect", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, DeathEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_DeathEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_DeathEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_ReviveEffect_MetaData[] = {
		{ "Category", "RPG|PlayerCharacterBase" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_ReviveEffect = { "ReviveEffect", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, ReviveEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_ReviveEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_ReviveEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_KnockDownEffect_MetaData[] = {
		{ "Category", "RPG|PlayerCharacterBase" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_KnockDownEffect = { "KnockDownEffect", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, KnockDownEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_KnockDownEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_KnockDownEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, InventoryComponent), Z_Construct_UClass_URPGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_InventoryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_InventoryComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBarClass_MetaData[] = {
		{ "Category", "RPG|UI" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBarClass = { "UIFloatingStatusBarClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, UIFloatingStatusBarClass), Z_Construct_UClass_URPGFloatingStatusBarWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBarClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBarClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBarComponent_MetaData[] = {
		{ "Category", "RPG|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBarComponent = { "UIFloatingStatusBarComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, UIFloatingStatusBarComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBarComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBarComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBar = { "UIFloatingStatusBar", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, UIFloatingStatusBar), Z_Construct_UClass_URPGFloatingStatusBarWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "RPG|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "RPG|Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_StartingCameraBoomLocation_MetaData[] = {
		{ "Category", "RPG|Camera" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_StartingCameraBoomLocation = { "StartingCameraBoomLocation", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, StartingCameraBoomLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_StartingCameraBoomLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_StartingCameraBoomLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_StartingCameraBoomArmLength_MetaData[] = {
		{ "Category", "RPG|Camera" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_StartingCameraBoomArmLength = { "StartingCameraBoomArmLength", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, StartingCameraBoomArmLength), METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_StartingCameraBoomArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_StartingCameraBoomArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "RPG|Camera" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "RPG|Camera" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_ReviveDuration_MetaData[] = {
		{ "Category", "RPG|Abilities" },
		{ "ModuleRelativePath", "Public/Characters/Player/RPGPlayerCharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_ReviveDuration = { "ReviveDuration", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPlayerCharacterBase, ReviveDuration), METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_ReviveDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_ReviveDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_DeathEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_ReviveEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_KnockDownEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_InventoryComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBarClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBarComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_UIFloatingStatusBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_StartingCameraBoomLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_StartingCameraBoomArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::NewProp_ReviveDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGPlayerCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::ClassParams = {
		&ARPGPlayerCharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGPlayerCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGPlayerCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGPlayerCharacterBase, 3418095653);
	template<> RPG_V1_API UClass* StaticClass<ARPGPlayerCharacterBase>()
	{
		return ARPGPlayerCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGPlayerCharacterBase(Z_Construct_UClass_ARPGPlayerCharacterBase, &ARPGPlayerCharacterBase::StaticClass, TEXT("/Script/RPG_V1"), TEXT("ARPGPlayerCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGPlayerCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
