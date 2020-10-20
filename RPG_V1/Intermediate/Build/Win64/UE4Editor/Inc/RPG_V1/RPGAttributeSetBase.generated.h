// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef RPG_V1_RPGAttributeSetBase_generated_h
#error "RPGAttributeSetBase.generated.h already included, missing '#pragma once' in RPGAttributeSetBase.h"
#endif
#define RPG_V1_RPGAttributeSetBase_generated_h

#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_GoldBounty); \
	DECLARE_FUNCTION(execOnRep_Gold); \
	DECLARE_FUNCTION(execOnRep_AttackSpeed); \
	DECLARE_FUNCTION(execOnRep_MoveSpeed); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_ShieldRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxShield); \
	DECLARE_FUNCTION(execOnRep_Shield); \
	DECLARE_FUNCTION(execOnRep_ManaRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_HealthRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_GoldBounty); \
	DECLARE_FUNCTION(execOnRep_Gold); \
	DECLARE_FUNCTION(execOnRep_AttackSpeed); \
	DECLARE_FUNCTION(execOnRep_MoveSpeed); \
	DECLARE_FUNCTION(execOnRep_Armor); \
	DECLARE_FUNCTION(execOnRep_ShieldRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxShield); \
	DECLARE_FUNCTION(execOnRep_Shield); \
	DECLARE_FUNCTION(execOnRep_ManaRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxMana); \
	DECLARE_FUNCTION(execOnRep_Mana); \
	DECLARE_FUNCTION(execOnRep_HealthRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGAttributeSetBase(); \
	friend struct Z_Construct_UClass_URPGAttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(URPGAttributeSetBase, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGAttributeSetBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		HealthRegenRate, \
		Mana, \
		MaxMana, \
		ManaRegenRate, \
		Shield, \
		MaxShield, \
		ShieldRegenRate, \
		Armor, \
		MoveSpeed, \
		AttackSpeed, \
		Gold, \
		GoldBounty, \
		NETFIELD_REP_END=GoldBounty	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(URPGAttributeSetBase) \
public:


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesURPGAttributeSetBase(); \
	friend struct Z_Construct_UClass_URPGAttributeSetBase_Statics; \
public: \
	DECLARE_CLASS(URPGAttributeSetBase, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGAttributeSetBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		HealthRegenRate, \
		Mana, \
		MaxMana, \
		ManaRegenRate, \
		Shield, \
		MaxShield, \
		ShieldRegenRate, \
		Armor, \
		MoveSpeed, \
		AttackSpeed, \
		Gold, \
		GoldBounty, \
		NETFIELD_REP_END=GoldBounty	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(URPGAttributeSetBase) \
public:


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGAttributeSetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGAttributeSetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAttributeSetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAttributeSetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAttributeSetBase(URPGAttributeSetBase&&); \
	NO_API URPGAttributeSetBase(const URPGAttributeSetBase&); \
public:


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGAttributeSetBase(URPGAttributeSetBase&&); \
	NO_API URPGAttributeSetBase(const URPGAttributeSetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAttributeSetBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAttributeSetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGAttributeSetBase)


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_PRIVATE_PROPERTY_OFFSET
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_21_PROLOG
#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_INCLASS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class URPGAttributeSetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_Characters_Abilities_AttributeSets_RPGAttributeSetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
