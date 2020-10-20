// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class URPGInventoryComponent;
#ifdef RPG_V1_RPGPlayerCharacterBase_generated_h
#error "RPGPlayerCharacterBase.generated.h already included, missing '#pragma once' in RPGPlayerCharacterBase.h"
#endif
#define RPG_V1_RPGPlayerCharacterBase_generated_h

#define RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_RPC_WRAPPERS \
	virtual void ServerDropItem_Implementation(int32 DroppedItem); \
	virtual void ServerSwapInventoryItems_Implementation(int32 SwappingIndex, int32 SwappedIndex); \
	virtual void ServerInteract_Implementation(); \
 \
	DECLARE_FUNCTION(execInitializeFloatingStatusBar); \
	DECLARE_FUNCTION(execServerDropItem); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execServerSwapInventoryItems); \
	DECLARE_FUNCTION(execSwapInventoryItems); \
	DECLARE_FUNCTION(execServerInteract); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execGetStartingCameraBoomLocation); \
	DECLARE_FUNCTION(execGetStartingCameraBoomArmLength); \
	DECLARE_FUNCTION(execGetInventory);


#define RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeFloatingStatusBar); \
	DECLARE_FUNCTION(execServerDropItem); \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execServerSwapInventoryItems); \
	DECLARE_FUNCTION(execSwapInventoryItems); \
	DECLARE_FUNCTION(execServerInteract); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execGetStartingCameraBoomLocation); \
	DECLARE_FUNCTION(execGetStartingCameraBoomArmLength); \
	DECLARE_FUNCTION(execGetInventory);


#define RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_EVENT_PARMS \
	struct RPGPlayerCharacterBase_eventServerDropItem_Parms \
	{ \
		int32 DroppedItem; \
	}; \
	struct RPGPlayerCharacterBase_eventServerSwapInventoryItems_Parms \
	{ \
		int32 SwappingIndex; \
		int32 SwappedIndex; \
	};


#define RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_CALLBACK_WRAPPERS
#define RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGPlayerCharacterBase(); \
	friend struct Z_Construct_UClass_ARPGPlayerCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ARPGPlayerCharacterBase, ARPGCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(ARPGPlayerCharacterBase)


#define RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesARPGPlayerCharacterBase(); \
	friend struct Z_Construct_UClass_ARPGPlayerCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ARPGPlayerCharacterBase, ARPGCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(ARPGPlayerCharacterBase)


#define RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGPlayerCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGPlayerCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGPlayerCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGPlayerCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGPlayerCharacterBase(ARPGPlayerCharacterBase&&); \
	NO_API ARPGPlayerCharacterBase(const ARPGPlayerCharacterBase&); \
public:


#define RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGPlayerCharacterBase(ARPGPlayerCharacterBase&&); \
	NO_API ARPGPlayerCharacterBase(const ARPGPlayerCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGPlayerCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGPlayerCharacterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGPlayerCharacterBase)


#define RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReviveDuration() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, ReviveDuration); } \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookUpRate() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, BaseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__StartingCameraBoomArmLength() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, StartingCameraBoomArmLength); } \
	FORCEINLINE static uint32 __PPO__StartingCameraBoomLocation() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, StartingCameraBoomLocation); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__UIFloatingStatusBar() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, UIFloatingStatusBar); } \
	FORCEINLINE static uint32 __PPO__UIFloatingStatusBarComponent() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, UIFloatingStatusBarComponent); } \
	FORCEINLINE static uint32 __PPO__UIFloatingStatusBarClass() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, UIFloatingStatusBarClass); } \
	FORCEINLINE static uint32 __PPO__InventoryComponent() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, InventoryComponent); } \
	FORCEINLINE static uint32 __PPO__KnockDownEffect() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, KnockDownEffect); } \
	FORCEINLINE static uint32 __PPO__ReviveEffect() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, ReviveEffect); } \
	FORCEINLINE static uint32 __PPO__DeathEffect() { return STRUCT_OFFSET(ARPGPlayerCharacterBase, DeathEffect); }


#define RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_15_PROLOG \
	RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_EVENT_PARMS


#define RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_INCLASS \
	RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class ARPGPlayerCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_Characters_Player_RPGPlayerCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
