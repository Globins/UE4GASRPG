// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URPGAbilitySystemComponent;
#ifdef RPG_V1_RPGAbilitySystemComponent_generated_h
#error "RPGAbilitySystemComponent.generated.h already included, missing '#pragma once' in RPGAbilitySystemComponent.h"
#endif
#define RPG_V1_RPGAbilitySystemComponent_generated_h

#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_10_DELEGATE \
struct _Script_RPG_V1_eventReceivedDamageDelegate_Parms \
{ \
	URPGAbilitySystemComponent* SourceASC; \
	float UnmitigatedDamage; \
	float MitigatedDamage; \
}; \
static inline void FReceivedDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReceivedDamageDelegate, URPGAbilitySystemComponent* SourceASC, float UnmitigatedDamage, float MitigatedDamage) \
{ \
	_Script_RPG_V1_eventReceivedDamageDelegate_Parms Parms; \
	Parms.SourceASC=SourceASC; \
	Parms.UnmitigatedDamage=UnmitigatedDamage; \
	Parms.MitigatedDamage=MitigatedDamage; \
	ReceivedDamageDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_RPC_WRAPPERS
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_URPGAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(URPGAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGAbilitySystemComponent)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesURPGAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_URPGAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(URPGAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGAbilitySystemComponent)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGAbilitySystemComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGAbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAbilitySystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAbilitySystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAbilitySystemComponent(URPGAbilitySystemComponent&&); \
	NO_API URPGAbilitySystemComponent(const URPGAbilitySystemComponent&); \
public:


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAbilitySystemComponent(URPGAbilitySystemComponent&&); \
	NO_API URPGAbilitySystemComponent(const URPGAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAbilitySystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAbilitySystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGAbilitySystemComponent)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_PRIVATE_PROPERTY_OFFSET
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_15_PROLOG
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_INCLASS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class URPGAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_Characters_Abilities_RPGAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
