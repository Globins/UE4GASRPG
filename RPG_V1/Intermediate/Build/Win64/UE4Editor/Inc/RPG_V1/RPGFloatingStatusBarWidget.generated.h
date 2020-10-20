// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_V1_RPGFloatingStatusBarWidget_generated_h
#error "RPGFloatingStatusBarWidget.generated.h already included, missing '#pragma once' in RPGFloatingStatusBarWidget.h"
#endif
#define RPG_V1_RPGFloatingStatusBarWidget_generated_h

#define RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_RPC_WRAPPERS
#define RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_EVENT_PARMS \
	struct RPGFloatingStatusBarWidget_eventSetCharacterName_Parms \
	{ \
		FText NewName; \
	}; \
	struct RPGFloatingStatusBarWidget_eventSetHealthPercentage_Parms \
	{ \
		float HealthPercentage; \
	}; \
	struct RPGFloatingStatusBarWidget_eventSetManaPercentage_Parms \
	{ \
		float ManaPercentage; \
	}; \
	struct RPGFloatingStatusBarWidget_eventSetShieldPercentage_Parms \
	{ \
		float ShieldPercentage; \
	};


#define RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_CALLBACK_WRAPPERS
#define RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGFloatingStatusBarWidget(); \
	friend struct Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics; \
public: \
	DECLARE_CLASS(URPGFloatingStatusBarWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGFloatingStatusBarWidget)


#define RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURPGFloatingStatusBarWidget(); \
	friend struct Z_Construct_UClass_URPGFloatingStatusBarWidget_Statics; \
public: \
	DECLARE_CLASS(URPGFloatingStatusBarWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGFloatingStatusBarWidget)


#define RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGFloatingStatusBarWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGFloatingStatusBarWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGFloatingStatusBarWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGFloatingStatusBarWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGFloatingStatusBarWidget(URPGFloatingStatusBarWidget&&); \
	NO_API URPGFloatingStatusBarWidget(const URPGFloatingStatusBarWidget&); \
public:


#define RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGFloatingStatusBarWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGFloatingStatusBarWidget(URPGFloatingStatusBarWidget&&); \
	NO_API URPGFloatingStatusBarWidget(const URPGFloatingStatusBarWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGFloatingStatusBarWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGFloatingStatusBarWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGFloatingStatusBarWidget)


#define RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_12_PROLOG \
	RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_EVENT_PARMS


#define RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_INCLASS \
	RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_CALLBACK_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class URPGFloatingStatusBarWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_UI_RPGFloatingStatusBarWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
