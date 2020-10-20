// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/RPG_V1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPG_V1() {}
// Cross Module References
	RPG_V1_API UEnum* Z_Construct_UEnum_RPG_V1_ERPGAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	RPG_V1_API UEnum* Z_Construct_UEnum_RPG_V1_ERPGHitReactDirection();
// End Cross Module References
	static UEnum* ERPGAbilityInputID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RPG_V1_ERPGAbilityInputID, Z_Construct_UPackage__Script_RPG_V1(), TEXT("ERPGAbilityInputID"));
		}
		return Singleton;
	}
	template<> RPG_V1_API UEnum* StaticEnum<ERPGAbilityInputID>()
	{
		return ERPGAbilityInputID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERPGAbilityInputID(ERPGAbilityInputID_StaticEnum, TEXT("/Script/RPG_V1"), TEXT("ERPGAbilityInputID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RPG_V1_ERPGAbilityInputID_Hash() { return 3511971440U; }
	UEnum* Z_Construct_UEnum_RPG_V1_ERPGAbilityInputID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RPG_V1();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERPGAbilityInputID"), 0, Get_Z_Construct_UEnum_RPG_V1_ERPGAbilityInputID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERPGAbilityInputID::None", (int64)ERPGAbilityInputID::None },
				{ "ERPGAbilityInputID::Confirm", (int64)ERPGAbilityInputID::Confirm },
				{ "ERPGAbilityInputID::Cancel", (int64)ERPGAbilityInputID::Cancel },
				{ "ERPGAbilityInputID::Ability1", (int64)ERPGAbilityInputID::Ability1 },
				{ "ERPGAbilityInputID::Ability2", (int64)ERPGAbilityInputID::Ability2 },
				{ "ERPGAbilityInputID::Ability3", (int64)ERPGAbilityInputID::Ability3 },
				{ "ERPGAbilityInputID::Ability4", (int64)ERPGAbilityInputID::Ability4 },
				{ "ERPGAbilityInputID::Ability5", (int64)ERPGAbilityInputID::Ability5 },
				{ "ERPGAbilityInputID::Ability6", (int64)ERPGAbilityInputID::Ability6 },
				{ "ERPGAbilityInputID::Ability7", (int64)ERPGAbilityInputID::Ability7 },
				{ "ERPGAbilityInputID::Ability8", (int64)ERPGAbilityInputID::Ability8 },
				{ "ERPGAbilityInputID::Interact", (int64)ERPGAbilityInputID::Interact },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ability1.Comment", "// 3 LMB\n" },
				{ "Ability1.DisplayName", "Ability1" },
				{ "Ability1.Name", "ERPGAbilityInputID::Ability1" },
				{ "Ability1.ToolTip", "3 LMB" },
				{ "Ability2.Comment", "// 4 RMB\n" },
				{ "Ability2.DisplayName", "Ability2" },
				{ "Ability2.Name", "ERPGAbilityInputID::Ability2" },
				{ "Ability2.ToolTip", "4 RMB" },
				{ "Ability3.Comment", "// 5 Q\n" },
				{ "Ability3.DisplayName", "Ability3" },
				{ "Ability3.Name", "ERPGAbilityInputID::Ability3" },
				{ "Ability3.ToolTip", "5 Q" },
				{ "Ability4.Comment", "// 6 W\n" },
				{ "Ability4.DisplayName", "Ability4" },
				{ "Ability4.Name", "ERPGAbilityInputID::Ability4" },
				{ "Ability4.ToolTip", "6 W" },
				{ "Ability5.Comment", "// 7 E\n" },
				{ "Ability5.DisplayName", "Ability5" },
				{ "Ability5.Name", "ERPGAbilityInputID::Ability5" },
				{ "Ability5.ToolTip", "7 E" },
				{ "Ability6.Comment", "// 8 R\n" },
				{ "Ability6.DisplayName", "Ability6" },
				{ "Ability6.Name", "ERPGAbilityInputID::Ability6" },
				{ "Ability6.ToolTip", "8 R" },
				{ "Ability7.Comment", "// 9 T\n" },
				{ "Ability7.DisplayName", "Ability7" },
				{ "Ability7.Name", "ERPGAbilityInputID::Ability7" },
				{ "Ability7.ToolTip", "9 T" },
				{ "Ability8.Comment", "// 10 F\n" },
				{ "Ability8.DisplayName", "Ability8" },
				{ "Ability8.Name", "ERPGAbilityInputID::Ability8" },
				{ "Ability8.ToolTip", "10 F" },
				{ "BlueprintType", "true" },
				{ "Cancel.Comment", "// 2 Cancel\n" },
				{ "Cancel.DisplayName", "Cancel" },
				{ "Cancel.Name", "ERPGAbilityInputID::Cancel" },
				{ "Cancel.ToolTip", "2 Cancel" },
				{ "Confirm.Comment", "// 1 Confirm\n" },
				{ "Confirm.DisplayName", "Confirm" },
				{ "Confirm.Name", "ERPGAbilityInputID::Confirm" },
				{ "Confirm.ToolTip", "1 Confirm" },
				{ "Interact.Comment", "// 11 Interact\n" },
				{ "Interact.DisplayName", "Interact" },
				{ "Interact.Name", "ERPGAbilityInputID::Interact" },
				{ "Interact.ToolTip", "11 Interact" },
				{ "ModuleRelativePath", "RPG_V1.h" },
				{ "None.Comment", "// 0 None\n" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "ERPGAbilityInputID::None" },
				{ "None.ToolTip", "0 None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RPG_V1,
				nullptr,
				"ERPGAbilityInputID",
				"ERPGAbilityInputID",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERPGHitReactDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RPG_V1_ERPGHitReactDirection, Z_Construct_UPackage__Script_RPG_V1(), TEXT("ERPGHitReactDirection"));
		}
		return Singleton;
	}
	template<> RPG_V1_API UEnum* StaticEnum<ERPGHitReactDirection>()
	{
		return ERPGHitReactDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERPGHitReactDirection(ERPGHitReactDirection_StaticEnum, TEXT("/Script/RPG_V1"), TEXT("ERPGHitReactDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RPG_V1_ERPGHitReactDirection_Hash() { return 3558490733U; }
	UEnum* Z_Construct_UEnum_RPG_V1_ERPGHitReactDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RPG_V1();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERPGHitReactDirection"), 0, Get_Z_Construct_UEnum_RPG_V1_ERPGHitReactDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERPGHitReactDirection::None", (int64)ERPGHitReactDirection::None },
				{ "ERPGHitReactDirection::Left", (int64)ERPGHitReactDirection::Left },
				{ "ERPGHitReactDirection::Front", (int64)ERPGHitReactDirection::Front },
				{ "ERPGHitReactDirection::Right", (int64)ERPGHitReactDirection::Right },
				{ "ERPGHitReactDirection::Back", (int64)ERPGHitReactDirection::Back },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Back.Comment", "// 4\n" },
				{ "Back.DisplayName", "Back" },
				{ "Back.Name", "ERPGHitReactDirection::Back" },
				{ "Back.ToolTip", "4" },
				{ "BlueprintType", "true" },
				{ "Front.Comment", "// 2\n" },
				{ "Front.DisplayName", "Front" },
				{ "Front.Name", "ERPGHitReactDirection::Front" },
				{ "Front.ToolTip", "2" },
				{ "Left.Comment", "// 1\n" },
				{ "Left.DisplayName", "Left" },
				{ "Left.Name", "ERPGHitReactDirection::Left" },
				{ "Left.ToolTip", "1" },
				{ "ModuleRelativePath", "RPG_V1.h" },
				{ "None.Comment", "// 0\n" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "ERPGHitReactDirection::None" },
				{ "None.ToolTip", "0" },
				{ "Right.Comment", "// 3\n" },
				{ "Right.DisplayName", "Right" },
				{ "Right.Name", "ERPGHitReactDirection::Right" },
				{ "Right.ToolTip", "3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RPG_V1,
				nullptr,
				"ERPGHitReactDirection",
				"ERPGHitReactDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
