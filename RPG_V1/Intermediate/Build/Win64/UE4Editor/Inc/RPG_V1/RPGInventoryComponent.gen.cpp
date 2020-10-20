// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Inventory/RPGInventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGInventoryComponent() {}
// Cross Module References
	RPG_V1_API UFunction* Z_Construct_UDelegateFunction_RPG_V1_OnInventoryChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	RPG_V1_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySlot();
	RPG_V1_API UClass* Z_Construct_UClass_URPGItemBase_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGInventoryComponent_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGItemPickUpBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RPG_V1_OnInventoryChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RPG_V1_OnInventoryChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RPG_V1_OnInventoryChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RPG_V1, nullptr, "OnInventoryChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RPG_V1_OnInventoryChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RPG_V1_OnInventoryChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RPG_V1_OnInventoryChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_RPG_V1_OnInventoryChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FInventorySlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RPG_V1_API uint32 Get_Z_Construct_UScriptStruct_FInventorySlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventorySlot, Z_Construct_UPackage__Script_RPG_V1(), TEXT("InventorySlot"), sizeof(FInventorySlot), Get_Z_Construct_UScriptStruct_FInventorySlot_Hash());
	}
	return Singleton;
}
template<> RPG_V1_API UScriptStruct* StaticStruct<FInventorySlot>()
{
	return FInventorySlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInventorySlot(FInventorySlot::StaticStruct, TEXT("/Script/RPG_V1"), TEXT("InventorySlot"), false, nullptr, nullptr);
static struct FScriptStruct_RPG_V1_StaticRegisterNativesFInventorySlot
{
	FScriptStruct_RPG_V1_StaticRegisterNativesFInventorySlot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InventorySlot")),new UScriptStruct::TCppStructOps<FInventorySlot>);
	}
} ScriptStruct_RPG_V1_StaticRegisterNativesFInventorySlot;
	struct Z_Construct_UScriptStruct_FInventorySlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventorySlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventorySlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_Quantity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlot, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_ItemData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventorySlot, ItemData), Z_Construct_UClass_URPGItemBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_ItemData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySlot_Statics::NewProp_ItemData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventorySlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
		nullptr,
		&NewStructOps,
		"InventorySlot",
		sizeof(FInventorySlot),
		alignof(FInventorySlot),
		Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventorySlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventorySlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInventorySlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RPG_V1();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InventorySlot"), sizeof(FInventorySlot), Get_Z_Construct_UScriptStruct_FInventorySlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInventorySlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInventorySlot_Hash() { return 3353620841U; }
	DEFINE_FUNCTION(URPGInventoryComponent::execOnRep_Items)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Items();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGInventoryComponent::execServer_DropItem)
	{
		P_GET_OBJECT(URPGItemBase,Z_Param_Item);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_DropItem_Validate(Z_Param_Item,Z_Param_Quantity))
		{
			RPC_ValidateFailed(TEXT("Server_DropItem_Validate"));
			return;
		}
		P_THIS->Server_DropItem_Implementation(Z_Param_Item,Z_Param_Quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGInventoryComponent::execDropItemAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemToDrop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropItemAtIndex(Z_Param_ItemToDrop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGInventoryComponent::execGetItemAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URPGItemBase**)Z_Param__Result=P_THIS->GetItemAtIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGInventoryComponent::execGetCapacityAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCapacityAtIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGInventoryComponent::execGetCapacity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCapacity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGInventoryComponent::execRemoveAllItemsFromInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllItemsFromInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGInventoryComponent::execGetItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FInventorySlot>*)Z_Param__Result=P_THIS->GetItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGInventoryComponent::execSwapItemsInInventory)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SwappingIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SwappedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwapItemsInInventory(Z_Param_SwappingIndex,Z_Param_SwappedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGInventoryComponent::execGetIndexOfFirstAvailablePartialStack)
	{
		P_GET_OBJECT(URPGItemBase,Z_Param_NewItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIndexOfFirstAvailablePartialStack(Z_Param_NewItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGInventoryComponent::execRemoveItemFromInventory)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_indexToRemoveItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveItemFromInventory(Z_Param_indexToRemoveItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGInventoryComponent::execAddItemToInventory)
	{
		P_GET_OBJECT(URPGItemBase,Z_Param_NewItem);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddItemToInventory(Z_Param_NewItem,Z_Param_Quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGInventoryComponent::execLoadInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGInventoryComponent::execSaveInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveInventory();
		P_NATIVE_END;
	}
	static FName NAME_URPGInventoryComponent_Server_DropItem = FName(TEXT("Server_DropItem"));
	void URPGInventoryComponent::Server_DropItem(URPGItemBase* Item, int32 Quantity)
	{
		RPGInventoryComponent_eventServer_DropItem_Parms Parms;
		Parms.Item=Item;
		Parms.Quantity=Quantity;
		ProcessEvent(FindFunctionChecked(NAME_URPGInventoryComponent_Server_DropItem),&Parms);
	}
	void URPGInventoryComponent::StaticRegisterNativesURPGInventoryComponent()
	{
		UClass* Class = URPGInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToInventory", &URPGInventoryComponent::execAddItemToInventory },
			{ "DropItemAtIndex", &URPGInventoryComponent::execDropItemAtIndex },
			{ "GetCapacity", &URPGInventoryComponent::execGetCapacity },
			{ "GetCapacityAtIndex", &URPGInventoryComponent::execGetCapacityAtIndex },
			{ "GetIndexOfFirstAvailablePartialStack", &URPGInventoryComponent::execGetIndexOfFirstAvailablePartialStack },
			{ "GetItemAtIndex", &URPGInventoryComponent::execGetItemAtIndex },
			{ "GetItems", &URPGInventoryComponent::execGetItems },
			{ "LoadInventory", &URPGInventoryComponent::execLoadInventory },
			{ "OnRep_Items", &URPGInventoryComponent::execOnRep_Items },
			{ "RemoveAllItemsFromInventory", &URPGInventoryComponent::execRemoveAllItemsFromInventory },
			{ "RemoveItemFromInventory", &URPGInventoryComponent::execRemoveItemFromInventory },
			{ "SaveInventory", &URPGInventoryComponent::execSaveInventory },
			{ "Server_DropItem", &URPGInventoryComponent::execServer_DropItem },
			{ "SwapItemsInInventory", &URPGInventoryComponent::execSwapItemsInInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics
	{
		struct RPGInventoryComponent_eventAddItemToInventory_Parms
		{
			URPGItemBase* NewItem;
			int32 Quantity;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGInventoryComponent_eventAddItemToInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGInventoryComponent_eventAddItemToInventory_Parms), &Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventAddItemToInventory_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventAddItemToInventory_Parms, NewItem), Z_Construct_UClass_URPGItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::NewProp_NewItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "Comment", "// Adds a new item to the inventory.\n// Returns true if the item is successfully added\n" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
		{ "ToolTip", "Adds a new item to the inventory.\nReturns true if the item is successfully added" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "AddItemToInventory", nullptr, nullptr, sizeof(RPGInventoryComponent_eventAddItemToInventory_Parms), Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_DropItemAtIndex_Statics
	{
		struct RPGInventoryComponent_eventDropItemAtIndex_Parms
		{
			int32 ItemToDrop;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemToDrop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_DropItemAtIndex_Statics::NewProp_ItemToDrop = { "ItemToDrop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventDropItemAtIndex_Parms, ItemToDrop), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_DropItemAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_DropItemAtIndex_Statics::NewProp_ItemToDrop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_DropItemAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_DropItemAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "DropItemAtIndex", nullptr, nullptr, sizeof(RPGInventoryComponent_eventDropItemAtIndex_Parms), Z_Construct_UFunction_URPGInventoryComponent_DropItemAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_DropItemAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_DropItemAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_DropItemAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_DropItemAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_DropItemAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_GetCapacity_Statics
	{
		struct RPGInventoryComponent_eventGetCapacity_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_GetCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventGetCapacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_GetCapacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_GetCapacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_GetCapacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_GetCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "GetCapacity", nullptr, nullptr, sizeof(RPGInventoryComponent_eventGetCapacity_Parms), Z_Construct_UFunction_URPGInventoryComponent_GetCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_GetCapacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_GetCapacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_GetCapacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_GetCapacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_GetCapacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex_Statics
	{
		struct RPGInventoryComponent_eventGetCapacityAtIndex_Parms
		{
			int32 index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventGetCapacityAtIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventGetCapacityAtIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "GetCapacityAtIndex", nullptr, nullptr, sizeof(RPGInventoryComponent_eventGetCapacityAtIndex_Parms), Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack_Statics
	{
		struct RPGInventoryComponent_eventGetIndexOfFirstAvailablePartialStack_Parms
		{
			URPGItemBase* NewItem;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventGetIndexOfFirstAvailablePartialStack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventGetIndexOfFirstAvailablePartialStack_Parms, NewItem), Z_Construct_UClass_URPGItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack_Statics::NewProp_NewItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "Comment", "// Returns returns the first instance of an item that does not have a partial stack\n// returns nullptr if cannot be found\n" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
		{ "ToolTip", "Returns returns the first instance of an item that does not have a partial stack\nreturns nullptr if cannot be found" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "GetIndexOfFirstAvailablePartialStack", nullptr, nullptr, sizeof(RPGInventoryComponent_eventGetIndexOfFirstAvailablePartialStack_Parms), Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex_Statics
	{
		struct RPGInventoryComponent_eventGetItemAtIndex_Parms
		{
			int32 index;
			URPGItemBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventGetItemAtIndex_Parms, ReturnValue), Z_Construct_UClass_URPGItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventGetItemAtIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "GetItemAtIndex", nullptr, nullptr, sizeof(RPGInventoryComponent_eventGetItemAtIndex_Parms), Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_GetItems_Statics
	{
		struct RPGInventoryComponent_eventGetItems_Parms
		{
			TArray<FInventorySlot> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGInventoryComponent_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventorySlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_GetItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_GetItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_GetItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_GetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "GetItems", nullptr, nullptr, sizeof(RPGInventoryComponent_eventGetItems_Parms), Z_Construct_UFunction_URPGInventoryComponent_GetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_GetItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_GetItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_GetItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_GetItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_GetItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_LoadInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_LoadInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "Comment", "/** Loads inventory from save game on game instance, this will replace arrays */" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
		{ "ToolTip", "Loads inventory from save game on game instance, this will replace arrays" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_LoadInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "LoadInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_LoadInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_LoadInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_LoadInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_LoadInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_OnRep_Items_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_OnRep_Items_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_OnRep_Items_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "OnRep_Items", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_OnRep_Items_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_OnRep_Items_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_OnRep_Items()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_OnRep_Items_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_RemoveAllItemsFromInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_RemoveAllItemsFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_RemoveAllItemsFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "RemoveAllItemsFromInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_RemoveAllItemsFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_RemoveAllItemsFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_RemoveAllItemsFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_RemoveAllItemsFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics
	{
		struct RPGInventoryComponent_eventRemoveItemFromInventory_Parms
		{
			int32 indexToRemoveItem;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indexToRemoveItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGInventoryComponent_eventRemoveItemFromInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGInventoryComponent_eventRemoveItemFromInventory_Parms), &Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::NewProp_indexToRemoveItem = { "indexToRemoveItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventRemoveItemFromInventory_Parms, indexToRemoveItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::NewProp_indexToRemoveItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "Comment", "// Removes a item from the inventory.\n// Returns true if the weapon exists and was removed. False if the item didn't exist in the inventory.\n" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
		{ "ToolTip", "Removes a item from the inventory.\nReturns true if the weapon exists and was removed. False if the item didn't exist in the inventory." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "RemoveItemFromInventory", nullptr, nullptr, sizeof(RPGInventoryComponent_eventRemoveItemFromInventory_Parms), Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_SaveInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_SaveInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "Comment", "/** Manually save the inventory, this is called from add/remove functions automatically */" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
		{ "ToolTip", "Manually save the inventory, this is called from add/remove functions automatically" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_SaveInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "SaveInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_SaveInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_SaveInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_SaveInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_SaveInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventServer_DropItem_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventServer_DropItem_Parms, Item), Z_Construct_UClass_URPGItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "Server_DropItem", nullptr, nullptr, sizeof(RPGInventoryComponent_eventServer_DropItem_Parms), Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics
	{
		struct RPGInventoryComponent_eventSwapItemsInInventory_Parms
		{
			int32 SwappingIndex;
			int32 SwappedIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SwappedIndex;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SwappingIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGInventoryComponent_eventSwapItemsInInventory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGInventoryComponent_eventSwapItemsInInventory_Parms), &Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::NewProp_SwappedIndex = { "SwappedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventSwapItemsInInventory_Parms, SwappedIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::NewProp_SwappingIndex = { "SwappingIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGInventoryComponent_eventSwapItemsInInventory_Parms, SwappingIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::NewProp_SwappedIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::NewProp_SwappingIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Inventory" },
		{ "Comment", "// Returns true if the item swaps successfully\n" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
		{ "ToolTip", "Returns true if the item swaps successfully" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGInventoryComponent, nullptr, "SwapItemsInInventory", nullptr, nullptr, sizeof(RPGInventoryComponent_eventSwapItemsInInventory_Parms), Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGInventoryComponent_NoRegister()
	{
		return URPGInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_URPGInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Capacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDropReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemDropReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGInventoryComponent_AddItemToInventory, "AddItemToInventory" }, // 1145758252
		{ &Z_Construct_UFunction_URPGInventoryComponent_DropItemAtIndex, "DropItemAtIndex" }, // 3684521405
		{ &Z_Construct_UFunction_URPGInventoryComponent_GetCapacity, "GetCapacity" }, // 1725966935
		{ &Z_Construct_UFunction_URPGInventoryComponent_GetCapacityAtIndex, "GetCapacityAtIndex" }, // 3893515897
		{ &Z_Construct_UFunction_URPGInventoryComponent_GetIndexOfFirstAvailablePartialStack, "GetIndexOfFirstAvailablePartialStack" }, // 748453356
		{ &Z_Construct_UFunction_URPGInventoryComponent_GetItemAtIndex, "GetItemAtIndex" }, // 3832344668
		{ &Z_Construct_UFunction_URPGInventoryComponent_GetItems, "GetItems" }, // 2062281900
		{ &Z_Construct_UFunction_URPGInventoryComponent_LoadInventory, "LoadInventory" }, // 1094304269
		{ &Z_Construct_UFunction_URPGInventoryComponent_OnRep_Items, "OnRep_Items" }, // 1145828229
		{ &Z_Construct_UFunction_URPGInventoryComponent_RemoveAllItemsFromInventory, "RemoveAllItemsFromInventory" }, // 1205013533
		{ &Z_Construct_UFunction_URPGInventoryComponent_RemoveItemFromInventory, "RemoveItemFromInventory" }, // 2968244312
		{ &Z_Construct_UFunction_URPGInventoryComponent_SaveInventory, "SaveInventory" }, // 3096559130
		{ &Z_Construct_UFunction_URPGInventoryComponent_Server_DropItem, "Server_DropItem" }, // 3395095044
		{ &Z_Construct_UFunction_URPGInventoryComponent_SwapItemsInInventory, "SwapItemsInInventory" }, // 3584586615
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventory/RPGInventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Capacity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGInventoryComponent, Capacity), METADATA_PARAMS(Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Capacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Capacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Items = { "Items", "OnRep_Items", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGInventoryComponent, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventorySlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_ItemDropReference_MetaData[] = {
		{ "Category", "RPGInventoryComponent" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"GASShooter|Inventory\")\n//void EquipWeapon(AGSWeapon* NewWeapon);\n//UFUNCTION(Server, Reliable)\n//void ServerEquipItem(AGSWeapon* NewWeapon);\n//void ServerEquipItem_Implementation(AGSWeapon* NewWeapon);\n//bool ServerEquipItem_Validate(AGSWeapon* NewWeapon);\n" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"GASShooter|Inventory\")\nvoid EquipWeapon(AGSWeapon* NewWeapon);\nUFUNCTION(Server, Reliable)\nvoid ServerEquipItem(AGSWeapon* NewWeapon);\nvoid ServerEquipItem_Implementation(AGSWeapon* NewWeapon);\nbool ServerEquipItem_Validate(AGSWeapon* NewWeapon);" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_ItemDropReference = { "ItemDropReference", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGInventoryComponent, ItemDropReference), Z_Construct_UClass_ARPGItemPickUpBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_ItemDropReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_ItemDropReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_OnInventoryUpdated_MetaData[] = {
		{ "Category", "RPG|Inventory" },
		{ "ModuleRelativePath", "Public/Inventory/RPGInventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_OnInventoryUpdated = { "OnInventoryUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGInventoryComponent, OnInventoryUpdated), Z_Construct_UDelegateFunction_RPG_V1_OnInventoryChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_OnInventoryUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_OnInventoryUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGInventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Capacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_ItemDropReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInventoryComponent_Statics::NewProp_OnInventoryUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGInventoryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGInventoryComponent_Statics::ClassParams = {
		&URPGInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URPGInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URPGInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGInventoryComponent, 2865576474);
	template<> RPG_V1_API UClass* StaticClass<URPGInventoryComponent>()
	{
		return URPGInventoryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGInventoryComponent(Z_Construct_UClass_URPGInventoryComponent, &URPGInventoryComponent::StaticClass, TEXT("/Script/RPG_V1"), TEXT("URPGInventoryComponent"), false, nullptr, nullptr, nullptr);

	void URPGInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Items(TEXT("Items"));

		const bool bIsValid = true
			&& Name_Items == ClassReps[(int32)ENetFields_Private::Items].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URPGInventoryComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGInventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
