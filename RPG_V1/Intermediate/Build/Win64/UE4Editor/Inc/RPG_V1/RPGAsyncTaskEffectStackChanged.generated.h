// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FActiveGameplayEffectHandle;
class UAbilitySystemComponent;
class URPGAsyncTaskEffectStackChanged;
#ifdef RPG_V1_RPGAsyncTaskEffectStackChanged_generated_h
#error "RPGAsyncTaskEffectStackChanged.generated.h already included, missing '#pragma once' in RPGAsyncTaskEffectStackChanged.h"
#endif
#define RPG_V1_RPGAsyncTaskEffectStackChanged_generated_h

#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_10_DELEGATE \
struct _Script_RPG_V1_eventOnGameplayEffectStackChanged_Parms \
{ \
	FGameplayTag EffectGameplayTag; \
	FActiveGameplayEffectHandle Handle; \
	int32 NewStackCount; \
	int32 OldStackCount; \
}; \
static inline void FOnGameplayEffectStackChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameplayEffectStackChanged, FGameplayTag EffectGameplayTag, FActiveGameplayEffectHandle Handle, int32 NewStackCount, int32 OldStackCount) \
{ \
	_Script_RPG_V1_eventOnGameplayEffectStackChanged_Parms Parms; \
	Parms.EffectGameplayTag=EffectGameplayTag; \
	Parms.Handle=Handle; \
	Parms.NewStackCount=NewStackCount; \
	Parms.OldStackCount=OldStackCount; \
	OnGameplayEffectStackChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForGameplayEffectStackChange);


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForGameplayEffectStackChange);


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGAsyncTaskEffectStackChanged(); \
	friend struct Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics; \
public: \
	DECLARE_CLASS(URPGAsyncTaskEffectStackChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGAsyncTaskEffectStackChanged)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_INCLASS \
private: \
	static void StaticRegisterNativesURPGAsyncTaskEffectStackChanged(); \
	friend struct Z_Construct_UClass_URPGAsyncTaskEffectStackChanged_Statics; \
public: \
	DECLARE_CLASS(URPGAsyncTaskEffectStackChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGAsyncTaskEffectStackChanged)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGAsyncTaskEffectStackChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGAsyncTaskEffectStackChanged) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAsyncTaskEffectStackChanged); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAsyncTaskEffectStackChanged); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAsyncTaskEffectStackChanged(URPGAsyncTaskEffectStackChanged&&); \
	NO_API URPGAsyncTaskEffectStackChanged(const URPGAsyncTaskEffectStackChanged&); \
public:


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGAsyncTaskEffectStackChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAsyncTaskEffectStackChanged(URPGAsyncTaskEffectStackChanged&&); \
	NO_API URPGAsyncTaskEffectStackChanged(const URPGAsyncTaskEffectStackChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAsyncTaskEffectStackChanged); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAsyncTaskEffectStackChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGAsyncTaskEffectStackChanged)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ASC() { return STRUCT_OFFSET(URPGAsyncTaskEffectStackChanged, ASC); }


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_16_PROLOG
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_INCLASS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class URPGAsyncTaskEffectStackChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskEffectStackChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
