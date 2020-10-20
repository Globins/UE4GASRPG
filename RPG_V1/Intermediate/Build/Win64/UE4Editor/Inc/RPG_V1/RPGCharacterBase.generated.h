// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARPGCharacterBase;
enum class ERPGHitReactDirection : uint8;
enum class ERPGAbilityInputID : uint8;
struct FGameplayTag;
class AActor;
struct FVector;
#ifdef RPG_V1_RPGCharacterBase_generated_h
#error "RPGCharacterBase.generated.h already included, missing '#pragma once' in RPGCharacterBase.h"
#endif
#define RPG_V1_RPGCharacterBase_generated_h

#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRPGDamageNumber_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RPG_V1_API UScriptStruct* StaticStruct<struct FRPGDamageNumber>();

#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_14_DELEGATE \
struct _Script_RPG_V1_eventCharacterDiedDelegate_Parms \
{ \
	ARPGCharacterBase* Character; \
}; \
static inline void FCharacterDiedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterDiedDelegate, ARPGCharacterBase* Character) \
{ \
	_Script_RPG_V1_eventCharacterDiedDelegate_Parms Parms; \
	Parms.Character=Character; \
	CharacterDiedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_13_DELEGATE \
struct _Script_RPG_V1_eventCharacterBaseHitReactDelegate_Parms \
{ \
	ERPGHitReactDirection Direction; \
}; \
static inline void FCharacterBaseHitReactDelegate_DelegateWrapper(const FMulticastScriptDelegate& CharacterBaseHitReactDelegate, ERPGHitReactDirection Direction) \
{ \
	_Script_RPG_V1_eventCharacterBaseHitReactDelegate_Parms Parms; \
	Parms.Direction=Direction; \
	CharacterBaseHitReactDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_RPC_WRAPPERS \
	virtual bool PlayHitReact_Validate(FGameplayTag , AActor* ); \
	virtual void PlayHitReact_Implementation(FGameplayTag HitDirection, AActor* DamageCauser); \
 \
	DECLARE_FUNCTION(execGetAttackBaseValue); \
	DECLARE_FUNCTION(execGetAttackSpeed); \
	DECLARE_FUNCTION(execGetMoveSpeedBaseValue); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execGetMaxShield); \
	DECLARE_FUNCTION(execGetShield); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execPlayHitReact); \
	DECLARE_FUNCTION(execGetHitReactDirection); \
	DECLARE_FUNCTION(execFinishDying); \
	DECLARE_FUNCTION(execIsAlive);


#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttackBaseValue); \
	DECLARE_FUNCTION(execGetAttackSpeed); \
	DECLARE_FUNCTION(execGetMoveSpeedBaseValue); \
	DECLARE_FUNCTION(execGetMoveSpeed); \
	DECLARE_FUNCTION(execGetMaxShield); \
	DECLARE_FUNCTION(execGetShield); \
	DECLARE_FUNCTION(execGetMaxMana); \
	DECLARE_FUNCTION(execGetMana); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execPlayHitReact); \
	DECLARE_FUNCTION(execGetHitReactDirection); \
	DECLARE_FUNCTION(execFinishDying); \
	DECLARE_FUNCTION(execIsAlive);


#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_EVENT_PARMS \
	struct RPGCharacterBase_eventPlayHitReact_Parms \
	{ \
		FGameplayTag HitDirection; \
		AActor* DamageCauser; \
	};


#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_CALLBACK_WRAPPERS
#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGCharacterBase(); \
	friend struct Z_Construct_UClass_ARPGCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ARPGCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(ARPGCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGCharacterBase*>(this); }


#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_INCLASS \
private: \
	static void StaticRegisterNativesARPGCharacterBase(); \
	friend struct Z_Construct_UClass_ARPGCharacterBase_Statics; \
public: \
	DECLARE_CLASS(ARPGCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(ARPGCharacterBase) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGCharacterBase*>(this); }


#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGCharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGCharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGCharacterBase(ARPGCharacterBase&&); \
	NO_API ARPGCharacterBase(const ARPGCharacterBase&); \
public:


#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGCharacterBase(ARPGCharacterBase&&); \
	NO_API ARPGCharacterBase(const ARPGCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGCharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGCharacterBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGCharacterBase)


#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AbilitySystemComponent() { return STRUCT_OFFSET(ARPGCharacterBase, AbilitySystemComponent); } \
	FORCEINLINE static uint32 __PPO__AttributeSetBase() { return STRUCT_OFFSET(ARPGCharacterBase, AttributeSetBase); } \
	FORCEINLINE static uint32 __PPO__CharacterName() { return STRUCT_OFFSET(ARPGCharacterBase, CharacterName); } \
	FORCEINLINE static uint32 __PPO__DeathMontage() { return STRUCT_OFFSET(ARPGCharacterBase, DeathMontage); } \
	FORCEINLINE static uint32 __PPO__DeathSound() { return STRUCT_OFFSET(ARPGCharacterBase, DeathSound); } \
	FORCEINLINE static uint32 __PPO__CharacterAbilities() { return STRUCT_OFFSET(ARPGCharacterBase, CharacterAbilities); } \
	FORCEINLINE static uint32 __PPO__DefaultAttributes() { return STRUCT_OFFSET(ARPGCharacterBase, DefaultAttributes); } \
	FORCEINLINE static uint32 __PPO__StartupEffects() { return STRUCT_OFFSET(ARPGCharacterBase, StartupEffects); } \
	FORCEINLINE static uint32 __PPO__DamageNumberClass() { return STRUCT_OFFSET(ARPGCharacterBase, DamageNumberClass); }


#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_38_PROLOG \
	RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_EVENT_PARMS


#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_INCLASS \
	RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class ARPGCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_Characters_RPGCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
