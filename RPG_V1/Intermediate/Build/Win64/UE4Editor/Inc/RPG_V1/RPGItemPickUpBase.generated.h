// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URPGItemBase;
class ARPGCharacterBase;
#ifdef RPG_V1_RPGItemPickUpBase_generated_h
#error "RPGItemPickUpBase.generated.h already included, missing '#pragma once' in RPGItemPickUpBase.h"
#endif
#define RPG_V1_RPGItemPickUpBase_generated_h

#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_RPC_WRAPPERS \
	virtual void Multicast_DestroyActor_Implementation(); \
	virtual bool K2_CanBePickedUp_Implementation(ARPGCharacterBase* TestCharacter) const; \
 \
	DECLARE_FUNCTION(execOnRep_IsActive); \
	DECLARE_FUNCTION(execMulticast_DestroyActor); \
	DECLARE_FUNCTION(execSetItemData); \
	DECLARE_FUNCTION(execPickupItem); \
	DECLARE_FUNCTION(execK2_CanBePickedUp);


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive); \
	DECLARE_FUNCTION(execMulticast_DestroyActor); \
	DECLARE_FUNCTION(execSetItemData); \
	DECLARE_FUNCTION(execPickupItem); \
	DECLARE_FUNCTION(execK2_CanBePickedUp);


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_EVENT_PARMS \
	struct RPGItemPickUpBase_eventK2_CanBePickedUp_Parms \
	{ \
		ARPGCharacterBase* TestCharacter; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		RPGItemPickUpBase_eventK2_CanBePickedUp_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_CALLBACK_WRAPPERS
#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGItemPickUpBase(); \
	friend struct Z_Construct_UClass_ARPGItemPickUpBase_Statics; \
public: \
	DECLARE_CLASS(ARPGItemPickUpBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(ARPGItemPickUpBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsActive=NETFIELD_REP_START, \
		PickedUpBy, \
		NETFIELD_REP_END=PickedUpBy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesARPGItemPickUpBase(); \
	friend struct Z_Construct_UClass_ARPGItemPickUpBase_Statics; \
public: \
	DECLARE_CLASS(ARPGItemPickUpBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(ARPGItemPickUpBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsActive=NETFIELD_REP_START, \
		PickedUpBy, \
		NETFIELD_REP_END=PickedUpBy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGItemPickUpBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGItemPickUpBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGItemPickUpBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGItemPickUpBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGItemPickUpBase(ARPGItemPickUpBase&&); \
	NO_API ARPGItemPickUpBase(const ARPGItemPickUpBase&); \
public:


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGItemPickUpBase(ARPGItemPickUpBase&&); \
	NO_API ARPGItemPickUpBase(const ARPGItemPickUpBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGItemPickUpBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGItemPickUpBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARPGItemPickUpBase)


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ARPGItemPickUpBase, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ARPGItemPickUpBase, MeshComp); } \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(ARPGItemPickUpBase, bIsActive); } \
	FORCEINLINE static uint32 __PPO__bCanRespawn() { return STRUCT_OFFSET(ARPGItemPickUpBase, bCanRespawn); } \
	FORCEINLINE static uint32 __PPO__RespawnTime() { return STRUCT_OFFSET(ARPGItemPickUpBase, RespawnTime); } \
	FORCEINLINE static uint32 __PPO__Quantity() { return STRUCT_OFFSET(ARPGItemPickUpBase, Quantity); } \
	FORCEINLINE static uint32 __PPO__RestrictedPickupTags() { return STRUCT_OFFSET(ARPGItemPickUpBase, RestrictedPickupTags); } \
	FORCEINLINE static uint32 __PPO__PickupSound() { return STRUCT_OFFSET(ARPGItemPickUpBase, PickupSound); } \
	FORCEINLINE static uint32 __PPO__ItemData() { return STRUCT_OFFSET(ARPGItemPickUpBase, ItemData); } \
	FORCEINLINE static uint32 __PPO__AbilityClasses() { return STRUCT_OFFSET(ARPGItemPickUpBase, AbilityClasses); } \
	FORCEINLINE static uint32 __PPO__EffectClasses() { return STRUCT_OFFSET(ARPGItemPickUpBase, EffectClasses); } \
	FORCEINLINE static uint32 __PPO__PickedUpBy() { return STRUCT_OFFSET(ARPGItemPickUpBase, PickedUpBy); }


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_14_PROLOG \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_EVENT_PARMS


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_INCLASS \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class ARPGItemPickUpBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_Items_RPGItemPickUpBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
