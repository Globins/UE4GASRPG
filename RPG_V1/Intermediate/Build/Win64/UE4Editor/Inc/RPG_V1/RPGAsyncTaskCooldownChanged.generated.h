// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
class UAbilitySystemComponent;
struct FGameplayTagContainer;
class URPGAsyncTaskCooldownChanged;
#ifdef RPG_V1_RPGAsyncTaskCooldownChanged_generated_h
#error "RPGAsyncTaskCooldownChanged.generated.h already included, missing '#pragma once' in RPGAsyncTaskCooldownChanged.h"
#endif
#define RPG_V1_RPGAsyncTaskCooldownChanged_generated_h

#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_12_DELEGATE \
struct _Script_RPG_V1_eventOnCooldownChanged_Parms \
{ \
	FGameplayTag CooldownTag; \
	float TimeRemaining; \
	float Duration; \
}; \
static inline void FOnCooldownChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCooldownChanged, FGameplayTag CooldownTag, float TimeRemaining, float Duration) \
{ \
	_Script_RPG_V1_eventOnCooldownChanged_Parms Parms; \
	Parms.CooldownTag=CooldownTag; \
	Parms.TimeRemaining=TimeRemaining; \
	Parms.Duration=Duration; \
	OnCooldownChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForCooldownChange);


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForCooldownChange);


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGAsyncTaskCooldownChanged(); \
	friend struct Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics; \
public: \
	DECLARE_CLASS(URPGAsyncTaskCooldownChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGAsyncTaskCooldownChanged)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_INCLASS \
private: \
	static void StaticRegisterNativesURPGAsyncTaskCooldownChanged(); \
	friend struct Z_Construct_UClass_URPGAsyncTaskCooldownChanged_Statics; \
public: \
	DECLARE_CLASS(URPGAsyncTaskCooldownChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGAsyncTaskCooldownChanged)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGAsyncTaskCooldownChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGAsyncTaskCooldownChanged) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAsyncTaskCooldownChanged); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAsyncTaskCooldownChanged); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAsyncTaskCooldownChanged(URPGAsyncTaskCooldownChanged&&); \
	NO_API URPGAsyncTaskCooldownChanged(const URPGAsyncTaskCooldownChanged&); \
public:


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGAsyncTaskCooldownChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAsyncTaskCooldownChanged(URPGAsyncTaskCooldownChanged&&); \
	NO_API URPGAsyncTaskCooldownChanged(const URPGAsyncTaskCooldownChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAsyncTaskCooldownChanged); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAsyncTaskCooldownChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGAsyncTaskCooldownChanged)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ASC() { return STRUCT_OFFSET(URPGAsyncTaskCooldownChanged, ASC); }


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_18_PROLOG
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_INCLASS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class URPGAsyncTaskCooldownChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskCooldownChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
