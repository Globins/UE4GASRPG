// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameplayEventData;
class UGameplayAbility;
class UAnimMontage;
struct FGameplayTagContainer;
class URPGAT_PlayMontageAndWaitForEvent;
#ifdef RPG_V1_RPGAT_PlayMontageAndWaitForEvent_generated_h
#error "RPGAT_PlayMontageAndWaitForEvent.generated.h already included, missing '#pragma once' in RPGAT_PlayMontageAndWaitForEvent.h"
#endif
#define RPG_V1_RPGAT_PlayMontageAndWaitForEvent_generated_h

#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_12_DELEGATE \
struct _Script_RPG_V1_eventRPGPlayMontageAndWaitForEventDelegate_Parms \
{ \
	FGameplayTag EventTag; \
	FGameplayEventData EventData; \
}; \
static inline void FRPGPlayMontageAndWaitForEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& RPGPlayMontageAndWaitForEventDelegate, FGameplayTag EventTag, FGameplayEventData EventData) \
{ \
	_Script_RPG_V1_eventRPGPlayMontageAndWaitForEventDelegate_Parms Parms; \
	Parms.EventTag=EventTag; \
	Parms.EventData=EventData; \
	RPGPlayMontageAndWaitForEventDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayMontageAndWaitForEvent);


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayMontageAndWaitForEvent);


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGAT_PlayMontageAndWaitForEvent(); \
	friend struct Z_Construct_UClass_URPGAT_PlayMontageAndWaitForEvent_Statics; \
public: \
	DECLARE_CLASS(URPGAT_PlayMontageAndWaitForEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGAT_PlayMontageAndWaitForEvent)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesURPGAT_PlayMontageAndWaitForEvent(); \
	friend struct Z_Construct_UClass_URPGAT_PlayMontageAndWaitForEvent_Statics; \
public: \
	DECLARE_CLASS(URPGAT_PlayMontageAndWaitForEvent, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGAT_PlayMontageAndWaitForEvent)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGAT_PlayMontageAndWaitForEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGAT_PlayMontageAndWaitForEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAT_PlayMontageAndWaitForEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAT_PlayMontageAndWaitForEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAT_PlayMontageAndWaitForEvent(URPGAT_PlayMontageAndWaitForEvent&&); \
	NO_API URPGAT_PlayMontageAndWaitForEvent(const URPGAT_PlayMontageAndWaitForEvent&); \
public:


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAT_PlayMontageAndWaitForEvent(URPGAT_PlayMontageAndWaitForEvent&&); \
	NO_API URPGAT_PlayMontageAndWaitForEvent(const URPGAT_PlayMontageAndWaitForEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAT_PlayMontageAndWaitForEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAT_PlayMontageAndWaitForEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGAT_PlayMontageAndWaitForEvent)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MontageToPlay() { return STRUCT_OFFSET(URPGAT_PlayMontageAndWaitForEvent, MontageToPlay); } \
	FORCEINLINE static uint32 __PPO__EventTags() { return STRUCT_OFFSET(URPGAT_PlayMontageAndWaitForEvent, EventTags); } \
	FORCEINLINE static uint32 __PPO__Rate() { return STRUCT_OFFSET(URPGAT_PlayMontageAndWaitForEvent, Rate); } \
	FORCEINLINE static uint32 __PPO__StartSection() { return STRUCT_OFFSET(URPGAT_PlayMontageAndWaitForEvent, StartSection); } \
	FORCEINLINE static uint32 __PPO__AnimRootMotionTranslationScale() { return STRUCT_OFFSET(URPGAT_PlayMontageAndWaitForEvent, AnimRootMotionTranslationScale); } \
	FORCEINLINE static uint32 __PPO__bStopWhenAbilityEnds() { return STRUCT_OFFSET(URPGAT_PlayMontageAndWaitForEvent, bStopWhenAbilityEnds); }


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_21_PROLOG
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_INCLASS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class URPGAT_PlayMontageAndWaitForEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AbilityTasks_RPGAT_PlayMontageAndWaitForEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
