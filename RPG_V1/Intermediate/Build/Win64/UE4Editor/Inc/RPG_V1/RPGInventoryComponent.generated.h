// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URPGItemBase;
struct FInventorySlot;
#ifdef RPG_V1_RPGInventoryComponent_generated_h
#error "RPGInventoryComponent.generated.h already included, missing '#pragma once' in RPGInventoryComponent.h"
#endif
#define RPG_V1_RPGInventoryComponent_generated_h

#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventorySlot_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RPG_V1_API UScriptStruct* StaticStruct<struct FInventorySlot>();

#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_28_DELEGATE \
static inline void FOnInventoryChanged_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryChanged) \
{ \
	OnInventoryChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_RPC_WRAPPERS \
	virtual bool Server_DropItem_Validate(URPGItemBase* , int32 ); \
	virtual void Server_DropItem_Implementation(URPGItemBase* Item, int32 Quantity); \
 \
	DECLARE_FUNCTION(execOnRep_Items); \
	DECLARE_FUNCTION(execServer_DropItem); \
	DECLARE_FUNCTION(execDropItemAtIndex); \
	DECLARE_FUNCTION(execGetItemAtIndex); \
	DECLARE_FUNCTION(execGetCapacityAtIndex); \
	DECLARE_FUNCTION(execGetCapacity); \
	DECLARE_FUNCTION(execRemoveAllItemsFromInventory); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execSwapItemsInInventory); \
	DECLARE_FUNCTION(execGetIndexOfFirstAvailablePartialStack); \
	DECLARE_FUNCTION(execRemoveItemFromInventory); \
	DECLARE_FUNCTION(execAddItemToInventory); \
	DECLARE_FUNCTION(execLoadInventory); \
	DECLARE_FUNCTION(execSaveInventory);


#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Items); \
	DECLARE_FUNCTION(execServer_DropItem); \
	DECLARE_FUNCTION(execDropItemAtIndex); \
	DECLARE_FUNCTION(execGetItemAtIndex); \
	DECLARE_FUNCTION(execGetCapacityAtIndex); \
	DECLARE_FUNCTION(execGetCapacity); \
	DECLARE_FUNCTION(execRemoveAllItemsFromInventory); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execSwapItemsInInventory); \
	DECLARE_FUNCTION(execGetIndexOfFirstAvailablePartialStack); \
	DECLARE_FUNCTION(execRemoveItemFromInventory); \
	DECLARE_FUNCTION(execAddItemToInventory); \
	DECLARE_FUNCTION(execLoadInventory); \
	DECLARE_FUNCTION(execSaveInventory);


#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_EVENT_PARMS \
	struct RPGInventoryComponent_eventServer_DropItem_Parms \
	{ \
		URPGItemBase* Item; \
		int32 Quantity; \
	};


#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_CALLBACK_WRAPPERS
#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGInventoryComponent(); \
	friend struct Z_Construct_UClass_URPGInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(URPGInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGInventoryComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Items=NETFIELD_REP_START, \
		NETFIELD_REP_END=Items	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_INCLASS \
private: \
	static void StaticRegisterNativesURPGInventoryComponent(); \
	friend struct Z_Construct_UClass_URPGInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(URPGInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGInventoryComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Items=NETFIELD_REP_START, \
		NETFIELD_REP_END=Items	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGInventoryComponent(URPGInventoryComponent&&); \
	NO_API URPGInventoryComponent(const URPGInventoryComponent&); \
public:


#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGInventoryComponent(URPGInventoryComponent&&); \
	NO_API URPGInventoryComponent(const URPGInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGInventoryComponent)


#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Items() { return STRUCT_OFFSET(URPGInventoryComponent, Items); } \
	FORCEINLINE static uint32 __PPO__Capacity() { return STRUCT_OFFSET(URPGInventoryComponent, Capacity); }


#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_30_PROLOG \
	RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_EVENT_PARMS


#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_INCLASS \
	RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class URPGInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_Inventory_RPGInventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
