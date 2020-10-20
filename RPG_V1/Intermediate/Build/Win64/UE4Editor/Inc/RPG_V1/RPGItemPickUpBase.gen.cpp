// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Items/RPGItemPickUpBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGItemPickUpBase() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_ARPGItemPickUpBase_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGItemPickUpBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	RPG_V1_API UClass* Z_Construct_UClass_ARPGCharacterBase_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGItemBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARPGItemPickUpBase::execOnRep_IsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGItemPickUpBase::execMulticast_DestroyActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DestroyActor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGItemPickUpBase::execSetItemData)
	{
		P_GET_OBJECT(URPGItemBase,Z_Param_NewItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemData(Z_Param_NewItemData,Z_Param_Quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGItemPickUpBase::execPickupItem)
	{
		P_GET_OBJECT(ARPGCharacterBase,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickupItem(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGItemPickUpBase::execK2_CanBePickedUp)
	{
		P_GET_OBJECT(ARPGCharacterBase,Z_Param_TestCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_CanBePickedUp_Implementation(Z_Param_TestCharacter);
		P_NATIVE_END;
	}
	static FName NAME_ARPGItemPickUpBase_K2_CanBePickedUp = FName(TEXT("K2_CanBePickedUp"));
	bool ARPGItemPickUpBase::K2_CanBePickedUp(ARPGCharacterBase* TestCharacter) const
	{
		RPGItemPickUpBase_eventK2_CanBePickedUp_Parms Parms;
		Parms.TestCharacter=TestCharacter;
		const_cast<ARPGItemPickUpBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_ARPGItemPickUpBase_K2_CanBePickedUp),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ARPGItemPickUpBase_K2_OnPickedUp = FName(TEXT("K2_OnPickedUp"));
	void ARPGItemPickUpBase::K2_OnPickedUp()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARPGItemPickUpBase_K2_OnPickedUp),NULL);
	}
	static FName NAME_ARPGItemPickUpBase_K2_OnRespawned = FName(TEXT("K2_OnRespawned"));
	void ARPGItemPickUpBase::K2_OnRespawned()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARPGItemPickUpBase_K2_OnRespawned),NULL);
	}
	static FName NAME_ARPGItemPickUpBase_Multicast_DestroyActor = FName(TEXT("Multicast_DestroyActor"));
	void ARPGItemPickUpBase::Multicast_DestroyActor()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARPGItemPickUpBase_Multicast_DestroyActor),NULL);
	}
	void ARPGItemPickUpBase::StaticRegisterNativesARPGItemPickUpBase()
	{
		UClass* Class = ARPGItemPickUpBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_CanBePickedUp", &ARPGItemPickUpBase::execK2_CanBePickedUp },
			{ "Multicast_DestroyActor", &ARPGItemPickUpBase::execMulticast_DestroyActor },
			{ "OnRep_IsActive", &ARPGItemPickUpBase::execOnRep_IsActive },
			{ "PickupItem", &ARPGItemPickUpBase::execPickupItem },
			{ "SetItemData", &ARPGItemPickUpBase::execSetItemData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TestCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGItemPickUpBase_eventK2_CanBePickedUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGItemPickUpBase_eventK2_CanBePickedUp_Parms), &Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::NewProp_TestCharacter = { "TestCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGItemPickUpBase_eventK2_CanBePickedUp_Parms, TestCharacter), Z_Construct_UClass_ARPGCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::NewProp_TestCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "CanBePickedUp" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGItemPickUpBase, nullptr, "K2_CanBePickedUp", nullptr, nullptr, sizeof(RPGItemPickUpBase_eventK2_CanBePickedUp_Parms), Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnPickedUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnPickedUp_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Blueprint implementable effects\n" },
		{ "DisplayName", "OnPickedUp" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
		{ "ToolTip", "Blueprint implementable effects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGItemPickUpBase, nullptr, "K2_OnPickedUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnRespawned_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnRespawned_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Blueprint implementable effects\n" },
		{ "DisplayName", "OnRespawned" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
		{ "ToolTip", "Blueprint implementable effects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnRespawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGItemPickUpBase, nullptr, "K2_OnRespawned", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnRespawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnRespawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnRespawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnRespawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGItemPickUpBase_Multicast_DestroyActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGItemPickUpBase_Multicast_DestroyActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGItemPickUpBase_Multicast_DestroyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGItemPickUpBase, nullptr, "Multicast_DestroyActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGItemPickUpBase_Multicast_DestroyActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGItemPickUpBase_Multicast_DestroyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGItemPickUpBase_Multicast_DestroyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGItemPickUpBase_Multicast_DestroyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGItemPickUpBase_OnRep_IsActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGItemPickUpBase_OnRep_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGItemPickUpBase_OnRep_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGItemPickUpBase, nullptr, "OnRep_IsActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGItemPickUpBase_OnRep_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGItemPickUpBase_OnRep_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGItemPickUpBase_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGItemPickUpBase_OnRep_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGItemPickUpBase_PickupItem_Statics
	{
		struct RPGItemPickUpBase_eventPickupItem_Parms
		{
			ARPGCharacterBase* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGItemPickUpBase_PickupItem_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGItemPickUpBase_eventPickupItem_Parms, Pawn), Z_Construct_UClass_ARPGCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGItemPickUpBase_PickupItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGItemPickUpBase_PickupItem_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGItemPickUpBase_PickupItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPGPickup" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGItemPickUpBase_PickupItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGItemPickUpBase, nullptr, "PickupItem", nullptr, nullptr, sizeof(RPGItemPickUpBase_eventPickupItem_Parms), Z_Construct_UFunction_ARPGItemPickUpBase_PickupItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGItemPickUpBase_PickupItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGItemPickUpBase_PickupItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGItemPickUpBase_PickupItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGItemPickUpBase_PickupItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGItemPickUpBase_PickupItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData_Statics
	{
		struct RPGItemPickUpBase_eventSetItemData_Parms
		{
			URPGItemBase* NewItemData;
			int32 Quantity;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewItemData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGItemPickUpBase_eventSetItemData_Parms, Quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData_Statics::NewProp_NewItemData = { "NewItemData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGItemPickUpBase_eventSetItemData_Parms, NewItemData), Z_Construct_UClass_URPGItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData_Statics::NewProp_NewItemData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPGPickup" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGItemPickUpBase, nullptr, "SetItemData", nullptr, nullptr, sizeof(RPGItemPickUpBase_eventSetItemData_Parms), Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARPGItemPickUpBase_NoRegister()
	{
		return ARPGItemPickUpBase::StaticClass();
	}
	struct Z_Construct_UClass_ARPGItemPickUpBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickedUpBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickedUpBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EffectClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrictedPickupTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RestrictedPickupTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanRespawn_MetaData[];
#endif
		static void NewProp_bCanRespawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanRespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGItemPickUpBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARPGItemPickUpBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGItemPickUpBase_K2_CanBePickedUp, "K2_CanBePickedUp" }, // 150496751
		{ &Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnPickedUp, "K2_OnPickedUp" }, // 497598474
		{ &Z_Construct_UFunction_ARPGItemPickUpBase_K2_OnRespawned, "K2_OnRespawned" }, // 3023615593
		{ &Z_Construct_UFunction_ARPGItemPickUpBase_Multicast_DestroyActor, "Multicast_DestroyActor" }, // 3612541878
		{ &Z_Construct_UFunction_ARPGItemPickUpBase_OnRep_IsActive, "OnRep_IsActive" }, // 2364383034
		{ &Z_Construct_UFunction_ARPGItemPickUpBase_PickupItem, "PickupItem" }, // 1579230987
		{ &Z_Construct_UFunction_ARPGItemPickUpBase_SetItemData, "SetItemData" }, // 213727389
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGItemPickUpBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//All Items that can be seen on the floor will be based off this blueprint, can bp directly\n" },
		{ "IncludePath", "Items/RPGItemPickUpBase.h" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
		{ "ToolTip", "All Items that can be seen on the floor will be based off this blueprint, can bp directly" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_PickedUpBy_MetaData[] = {
		{ "Category", "RPGItemPickUpBase" },
		{ "Comment", "// The character who has picked up this pickup\n" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
		{ "ToolTip", "The character who has picked up this pickup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_PickedUpBy = { "PickedUpBy", nullptr, (EPropertyFlags)0x0020080000000034, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGItemPickUpBase, PickedUpBy), Z_Construct_UClass_ARPGCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_PickedUpBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_PickedUpBy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_EffectClasses_MetaData[] = {
		{ "Category", "RPGPickup" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_EffectClasses = { "EffectClasses", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGItemPickUpBase, EffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_EffectClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_EffectClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_EffectClasses_Inner = { "EffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_AbilityClasses_MetaData[] = {
		{ "Category", "RPGPickup" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_AbilityClasses = { "AbilityClasses", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGItemPickUpBase, AbilityClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_AbilityClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_AbilityClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_AbilityClasses_Inner = { "AbilityClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URPGGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_ItemData_MetaData[] = {
		{ "Category", "RPGPickup" },
		{ "Comment", "// Exposed Item to base off of when exposed\n" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
		{ "ToolTip", "Exposed Item to base off of when exposed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGItemPickUpBase, ItemData), Z_Construct_UClass_URPGItemBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_ItemData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_PickupSound_MetaData[] = {
		{ "Category", "RPGPickup" },
		{ "Comment", "// Sound played when player picks it up\n" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
		{ "ToolTip", "Sound played when player picks it up" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGItemPickUpBase, PickupSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_PickupSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_PickupSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_RestrictedPickupTags_MetaData[] = {
		{ "Category", "RPGPickup" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_RestrictedPickupTags = { "RestrictedPickupTags", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGItemPickUpBase, RestrictedPickupTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_RestrictedPickupTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_RestrictedPickupTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "RPGPickup" },
		{ "Comment", "//How many items are in this pickup\n" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
		{ "ToolTip", "How many items are in this pickup" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGItemPickUpBase, Quantity), METADATA_PARAMS(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_RespawnTime_MetaData[] = {
		{ "Category", "RPGPickup" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGItemPickUpBase, RespawnTime), METADATA_PARAMS(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_RespawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_RespawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bCanRespawn_MetaData[] = {
		{ "Category", "RPGPickup" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
	};
#endif
	void Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bCanRespawn_SetBit(void* Obj)
	{
		((ARPGItemPickUpBase*)Obj)->bCanRespawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bCanRespawn = { "bCanRespawn", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARPGItemPickUpBase), &Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bCanRespawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bCanRespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bCanRespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "RPGPickup" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
	};
#endif
	void Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((ARPGItemPickUpBase*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bIsActive = { "bIsActive", "OnRep_IsActive", (EPropertyFlags)0x0020080100000034, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARPGItemPickUpBase), &Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "RPGPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGItemPickUpBase, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "RPGPickup" },
		{ "Comment", "//UFUNCTION(Client, Reliable, WithValidation)\n//\x09void SetRespawnCountdown(float RespawnTimeRemaining);\n//void SetRespawnCountdown_Implementation(float RespawnTimeRemaining);\n//bool SetRespawnCountdown_Validate(float RespawnTimeRemaining);\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/RPGItemPickUpBase.h" },
		{ "ToolTip", "UFUNCTION(Client, Reliable, WithValidation)\n       void SetRespawnCountdown(float RespawnTimeRemaining);\nvoid SetRespawnCountdown_Implementation(float RespawnTimeRemaining);\nbool SetRespawnCountdown_Validate(float RespawnTimeRemaining);" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGItemPickUpBase, CollisionComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_CollisionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_CollisionComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGItemPickUpBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_PickedUpBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_EffectClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_EffectClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_AbilityClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_AbilityClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_PickupSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_RestrictedPickupTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_RespawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bCanRespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGItemPickUpBase_Statics::NewProp_CollisionComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGItemPickUpBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGItemPickUpBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGItemPickUpBase_Statics::ClassParams = {
		&ARPGItemPickUpBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARPGItemPickUpBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARPGItemPickUpBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGItemPickUpBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGItemPickUpBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGItemPickUpBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGItemPickUpBase, 3090518259);
	template<> RPG_V1_API UClass* StaticClass<ARPGItemPickUpBase>()
	{
		return ARPGItemPickUpBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGItemPickUpBase(Z_Construct_UClass_ARPGItemPickUpBase, &ARPGItemPickUpBase::StaticClass, TEXT("/Script/RPG_V1"), TEXT("ARPGItemPickUpBase"), false, nullptr, nullptr, nullptr);

	void ARPGItemPickUpBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsActive(TEXT("bIsActive"));
		static const FName Name_PickedUpBy(TEXT("PickedUpBy"));

		const bool bIsValid = true
			&& Name_bIsActive == ClassReps[(int32)ENetFields_Private::bIsActive].Property->GetFName()
			&& Name_PickedUpBy == ClassReps[(int32)ENetFields_Private::PickedUpBy].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARPGItemPickUpBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGItemPickUpBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
