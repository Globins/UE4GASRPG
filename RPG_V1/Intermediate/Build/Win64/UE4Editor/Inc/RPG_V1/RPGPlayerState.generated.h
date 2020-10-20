// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttribute;
#ifdef RPG_V1_RPGPlayerState_generated_h
#error "RPGPlayerState.generated.h already included, missing '#pragma once' in RPGPlayerState.h"
#endif
#define RPG_V1_RPGPlayerState_generated_h

#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_11_DELEGATE \
struct _Script_RPG_V1_eventRPGOnGameplayAttributeValueChangedDelegate_Parms \
{ \
	FGameplayAttribute Attribute; \
	float NewValue; \
	float OldValue; \
}; \
static inline void FRPGOnGameplayAttributeValueChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& RPGOnGameplayAttributeValueChangedDelegate, FGameplayAttribute Attribute, float NewValue, float OldValue) \
{ \
	_Script_RPG_V1_eventRPGOnGameplayAttributeValueChangedDelegate_Parms Parms; \
	Parms.Attribute=Attribute; \
	Parms.NewValue=NewValue; \
	Parms.OldValue=OldValue; \
	RPGOnGameplayAttributeValueChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGoldBounty); \
	DECLARE_FUNCTION(execGetGold); \
	DECLARE_FUNCTION(execGetAttackSpeed); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execGetArmor); \
	DECLARE_FUNCTION(execGetShieldRegenRate); \
	DECLARE_FUNCTION(execGetMaxShield); \
	DECLARE_FUNCTION(execGetShield); \
	DECLARE_FUNCTION(execGetManaRegenRate); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetHealthRegenRate); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execShowAbilityConfirmPrompt); \
	DECLARE_FUNCTION(execIsAlive);


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGoldBounty); \
	DECLARE_FUNCTION(execGetGold); \
	DECLARE_FUNCTION(execGetAttackSpeed); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execGetArmor); \
	DECLARE_FUNCTION(execGetShieldRegenRate); \
	DECLARE_FUNCTION(execGetMaxShield); \
	DECLARE_FUNCTION(execGetShield); \
	DECLARE_FUNCTION(execGetManaRegenRate); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetHealthRegenRate); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execShowAbilityConfirmPrompt); \
	DECLARE_FUNCTION(execIsAlive);


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGPlayerState(); \
	friend struct Z_Construct_UClass_ARPGPlayerState_Statics; \
public: \
	DECLARE_CLASS(ARPGPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(ARPGPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGPlayerState*>(this); }


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_INCLASS \
private: \
	static void StaticRegisterNativesARPGPlayerState(); \
	friend struct Z_Construct_UClass_ARPGPlayerState_Statics; \
public: \
	DECLARE_CLASS(ARPGPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(ARPGPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGPlayerState*>(this); }


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGPlayerState(ARPGPlayerState&&); \
	NO_API ARPGPlayerState(const ARPGPlayerState&); \
public:


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGPlayerState(ARPGPlayerState&&); \
	NO_API ARPGPlayerState(const ARPGPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARPGPlayerState)


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AbilitySystemComponent() { return STRUCT_OFFSET(ARPGPlayerState, AbilitySystemComponent); } \
	FORCEINLINE static uint32 __PPO__AttributeSetBase() { return STRUCT_OFFSET(ARPGPlayerState, AttributeSetBase); }


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_16_PROLOG
#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_INCLASS \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class ARPGPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
