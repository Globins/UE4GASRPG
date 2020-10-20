// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
class ARPGCharacterBase;
struct FGameplayTagContainer;
#ifdef RPG_V1_RPGPlayerController_generated_h
#error "RPGPlayerController.generated.h already included, missing '#pragma once' in RPGPlayerController.h"
#endif
#define RPG_V1_RPGPlayerController_generated_h

#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_RPC_WRAPPERS \
	virtual void ServerKill_Implementation(); \
	virtual bool ClientSetControlRotation_Validate(FRotator ); \
	virtual void ClientSetControlRotation_Implementation(FRotator NewRotation); \
	virtual bool SetRespawnCountdown_Validate(float ); \
	virtual void SetRespawnCountdown_Implementation(float RespawnTimeRemaining); \
	virtual bool ShowDamageNumber_Validate(float , ARPGCharacterBase* , FGameplayTagContainer ); \
	virtual void ShowDamageNumber_Implementation(float DamageAmount, ARPGCharacterBase* TargetCharacter, FGameplayTagContainer DamageNumberTaRPG); \
 \
	DECLARE_FUNCTION(execServerKill); \
	DECLARE_FUNCTION(execKill); \
	DECLARE_FUNCTION(execClientSetControlRotation); \
	DECLARE_FUNCTION(execSetRespawnCountdown); \
	DECLARE_FUNCTION(execShowDamageNumber);


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServerKill); \
	DECLARE_FUNCTION(execKill); \
	DECLARE_FUNCTION(execClientSetControlRotation); \
	DECLARE_FUNCTION(execSetRespawnCountdown); \
	DECLARE_FUNCTION(execShowDamageNumber);


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_EVENT_PARMS \
	struct RPGPlayerController_eventClientSetControlRotation_Parms \
	{ \
		FRotator NewRotation; \
	}; \
	struct RPGPlayerController_eventSetRespawnCountdown_Parms \
	{ \
		float RespawnTimeRemaining; \
	}; \
	struct RPGPlayerController_eventShowDamageNumber_Parms \
	{ \
		float DamageAmount; \
		ARPGCharacterBase* TargetCharacter; \
		FGameplayTagContainer DamageNumberTaRPG; \
	};


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_CALLBACK_WRAPPERS
#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGPlayerController(); \
	friend struct Z_Construct_UClass_ARPGPlayerController_Statics; \
public: \
	DECLARE_CLASS(ARPGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(ARPGPlayerController)


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesARPGPlayerController(); \
	friend struct Z_Construct_UClass_ARPGPlayerController_Statics; \
public: \
	DECLARE_CLASS(ARPGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(ARPGPlayerController)


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGPlayerController(ARPGPlayerController&&); \
	NO_API ARPGPlayerController(const ARPGPlayerController&); \
public:


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGPlayerController(ARPGPlayerController&&); \
	NO_API ARPGPlayerController(const ARPGPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGPlayerController)


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UIHUDWidgetClass() { return STRUCT_OFFSET(ARPGPlayerController, UIHUDWidgetClass); } \
	FORCEINLINE static uint32 __PPO__UIHUDWidget() { return STRUCT_OFFSET(ARPGPlayerController, UIHUDWidget); }


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_15_PROLOG \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_EVENT_PARMS


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_INCLASS \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class ARPGPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_Player_RPGPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
