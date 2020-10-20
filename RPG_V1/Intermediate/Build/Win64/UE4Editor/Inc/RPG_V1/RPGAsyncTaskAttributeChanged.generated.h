// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttribute;
class UAbilitySystemComponent;
class URPGAsyncTaskAttributeChanged;
#ifdef RPG_V1_RPGAsyncTaskAttributeChanged_generated_h
#error "RPGAsyncTaskAttributeChanged.generated.h already included, missing '#pragma once' in RPGAsyncTaskAttributeChanged.h"
#endif
#define RPG_V1_RPGAsyncTaskAttributeChanged_generated_h

#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_11_DELEGATE \
struct _Script_RPG_V1_eventOnAttributeChanged_Parms \
{ \
	FGameplayAttribute Attribute; \
	float NewValue; \
	float OldValue; \
}; \
static inline void FOnAttributeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAttributeChanged, FGameplayAttribute Attribute, float NewValue, float OldValue) \
{ \
	_Script_RPG_V1_eventOnAttributeChanged_Parms Parms; \
	Parms.Attribute=Attribute; \
	Parms.NewValue=NewValue; \
	Parms.OldValue=OldValue; \
	OnAttributeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForAttributesChange); \
	DECLARE_FUNCTION(execListenForAttributeChange);


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execListenForAttributesChange); \
	DECLARE_FUNCTION(execListenForAttributeChange);


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGAsyncTaskAttributeChanged(); \
	friend struct Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics; \
public: \
	DECLARE_CLASS(URPGAsyncTaskAttributeChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGAsyncTaskAttributeChanged)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_INCLASS \
private: \
	static void StaticRegisterNativesURPGAsyncTaskAttributeChanged(); \
	friend struct Z_Construct_UClass_URPGAsyncTaskAttributeChanged_Statics; \
public: \
	DECLARE_CLASS(URPGAsyncTaskAttributeChanged, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGAsyncTaskAttributeChanged)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGAsyncTaskAttributeChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGAsyncTaskAttributeChanged) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAsyncTaskAttributeChanged); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAsyncTaskAttributeChanged); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAsyncTaskAttributeChanged(URPGAsyncTaskAttributeChanged&&); \
	NO_API URPGAsyncTaskAttributeChanged(const URPGAsyncTaskAttributeChanged&); \
public:


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGAsyncTaskAttributeChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAsyncTaskAttributeChanged(URPGAsyncTaskAttributeChanged&&); \
	NO_API URPGAsyncTaskAttributeChanged(const URPGAsyncTaskAttributeChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAsyncTaskAttributeChanged); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAsyncTaskAttributeChanged); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGAsyncTaskAttributeChanged)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ASC() { return STRUCT_OFFSET(URPGAsyncTaskAttributeChanged, ASC); }


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_16_PROLOG
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_INCLASS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class URPGAsyncTaskAttributeChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAsyncTaskAttributeChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
