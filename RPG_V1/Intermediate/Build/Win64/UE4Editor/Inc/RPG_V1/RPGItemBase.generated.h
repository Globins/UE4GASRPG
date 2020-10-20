// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_V1_RPGItemBase_generated_h
#error "RPGItemBase.generated.h already included, missing '#pragma once' in RPGItemBase.h"
#endif
#define RPG_V1_RPGItemBase_generated_h

#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_SPARSE_DATA
#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIdentifierString); \
	DECLARE_FUNCTION(execIsStackable);


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIdentifierString); \
	DECLARE_FUNCTION(execIsStackable);


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGItemBase(); \
	friend struct Z_Construct_UClass_URPGItemBase_Statics; \
public: \
	DECLARE_CLASS(URPGItemBase, UPrimaryDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGItemBase)


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURPGItemBase(); \
	friend struct Z_Construct_UClass_URPGItemBase_Statics; \
public: \
	DECLARE_CLASS(URPGItemBase, UPrimaryDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/RPG_V1"), NO_API) \
	DECLARE_SERIALIZER(URPGItemBase)


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGItemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGItemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGItemBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGItemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGItemBase(URPGItemBase&&); \
	NO_API URPGItemBase(const URPGItemBase&); \
public:


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGItemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URPGItemBase(URPGItemBase&&); \
	NO_API URPGItemBase(const URPGItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGItemBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGItemBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGItemBase)


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_PRIVATE_PROPERTY_OFFSET
#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_13_PROLOG
#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_RPC_WRAPPERS \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_INCLASS \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_PRIVATE_PROPERTY_OFFSET \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_SPARSE_DATA \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_INCLASS_NO_PURE_DECLS \
	RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RPG_V1_API UClass* StaticClass<class URPGItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_Public_Items_RPGItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
