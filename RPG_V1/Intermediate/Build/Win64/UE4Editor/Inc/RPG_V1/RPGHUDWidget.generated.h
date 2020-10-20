// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_V1_RPGHUDWidget_generated_h
#error "RPGHUDWidget.generated.h already included, missing '#pragma once' in RPGHUDWidget.h"
#endif
#define RPG_V1_RPGHUDWidget_generated_h

#define RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_RPC_WRAPPERS
#define RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_EVENT_PARMS \
	struct RPGHUDWidget_eventSetCurrentHealth_Parms \
	{ \
		float CurrentHealth; \
	}; \
	struct RPGHUDWidget_eventSetCurrentMana_Parms \
	{ \
		float CurrentMana; \
	}; \
	struct RPGHUDWidget_eventSetCurrentShield_Parms \
	{ \
		float CurrentShield; \
	}; \
	struct RPGHUDWidget_eventSetGold_Parms \
	{ \
		int32 Gold; \
	}; \
	struct RPGHUDWidget_eventSetHealthPercentage_Parms \
	{ \
		float HealthPercentage; \
	}; \
	struct RPGHUDWidget_eventSetHealthRegenRate_Parms \
	{ \
		float HealthRegenRate; \
	}; \
	struct RPGHUDWidget_eventSetManaPercentage_Parms \
	{ \
		float ManaPercentage; \
	}; \
	struct RPGHUDWidget_eventSetManaRegenRate_Parms \
	{ \
		float ManaRegenRate; \
	}; \
	struct RPGHUDWidget_eventSetMaxHealth_Parms \
	{ \
		float MaxHealth; \
	}; \
	struct RPGHUDWidget_eventSetMaxMana_Parms \
	{ \
		float MaxMana; \
	}; \
	struct RPGHUDWidget_eventSetMaxShield_Parms \
	{ \
		float MaxShield; \
	}; \
	struct RPGHUDWidget_eventSetRespawnCountdown_Parms \
	{ \
		float RespawnTimeRemaining; \
	}; \
	struct RPGHUDWidget_eventSetShieldPercentage_Parms \
	{ \
		float ShieldPercentage; \
	}; \
	struct RPGHUDWidget_eventSetShieldRegenRate_Parms \
	{ \
		float ShieldRegenRate; \
	}; \
	struct RPGHUDWidget_eventShowAbilityConfirmPrompt_Parms \
	{ \
		bool bShowText; \
	};


#define RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_CALLBACK_WRAPPERS
#define RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGHUDWidget(); \
	friend struct Z_Construct_UClass_URPGHUDWidget_Statics; \
public: \
	DECLARE_CLASS(URPGHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGHUDWidget)


#define RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesURPGHUDWidget(); \
	friend struct Z_Construct_UClass_URPGHUDWidget_Statics; \
public: \
	DECLARE_CLASS(URPGHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGHUDWidget)


#define RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGHUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGHUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGHUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGHUDWidget(URPGHUDWidget&&); \
	NO_API URPGHUDWidget(const URPGHUDWidget&); \
public:


#define RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGHUDWidget(URPGHUDWidget&&); \
	NO_API URPGHUDWidget(const URPGHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGHUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGHUDWidget)


#define RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_PRIVATE_PROPERTY_OFFSET
#define RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_15_PROLOG \
	RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_EVENT_PARMS


#define RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_INCLASS \
	RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class URPGHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_UI_RPGHUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
