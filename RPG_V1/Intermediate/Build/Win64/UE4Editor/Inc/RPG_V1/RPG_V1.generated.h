// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RPG_V1_RPG_V1_generated_h
#error "RPG_V1.generated.h already included, missing '#pragma once' in RPG_V1.h"
#endif
#define RPG_V1_RPG_V1_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RPG_V1_Source_RPG_V1_RPG_V1_h


#define FOREACH_ENUM_ERPGABILITYINPUTID(op) \
	op(ERPGAbilityInputID::None) \
	op(ERPGAbilityInputID::Confirm) \
	op(ERPGAbilityInputID::Cancel) \
	op(ERPGAbilityInputID::Ability1) \
	op(ERPGAbilityInputID::Ability2) \
	op(ERPGAbilityInputID::Ability3) \
	op(ERPGAbilityInputID::Ability4) \
	op(ERPGAbilityInputID::Ability5) \
	op(ERPGAbilityInputID::Ability6) \
	op(ERPGAbilityInputID::Ability7) \
	op(ERPGAbilityInputID::Ability8) \
	op(ERPGAbilityInputID::Interact) 

enum class ERPGAbilityInputID : uint8;
template<> RPG_V1_API UEnum* StaticEnum<ERPGAbilityInputID>();

#define FOREACH_ENUM_ERPGHITREACTDIRECTION(op) \
	op(ERPGHitReactDirection::None) \
	op(ERPGHitReactDirection::Left) \
	op(ERPGHitReactDirection::Front) \
	op(ERPGHitReactDirection::Right) \
	op(ERPGHitReactDirection::Back) 

enum class ERPGHitReactDirection : uint8;
template<> RPG_V1_API UEnum* StaticEnum<ERPGHitReactDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
