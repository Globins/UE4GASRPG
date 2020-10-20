// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPG_V1/Public/Items/RPGItemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGItemBase() {}
// Cross Module References
	RPG_V1_API UClass* Z_Construct_UClass_URPGItemBase_NoRegister();
	RPG_V1_API UClass* Z_Construct_UClass_URPGItemBase();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_RPG_V1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RPG_V1_API UClass* Z_Construct_UClass_URPGGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetType();
// End Cross Module References
	DEFINE_FUNCTION(URPGItemBase::execGetIdentifierString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIdentifierString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URPGItemBase::execIsStackable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStackable();
		P_NATIVE_END;
	}
	void URPGItemBase::StaticRegisterNativesURPGItemBase()
	{
		UClass* Class = URPGItemBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIdentifierString", &URPGItemBase::execGetIdentifierString },
			{ "IsStackable", &URPGItemBase::execIsStackable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URPGItemBase_GetIdentifierString_Statics
	{
		struct RPGItemBase_eventGetIdentifierString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URPGItemBase_GetIdentifierString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGItemBase_eventGetIdentifierString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGItemBase_GetIdentifierString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItemBase_GetIdentifierString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGItemBase_GetIdentifierString_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Item" },
		{ "Comment", "/** Returns the logical name, equivalent to the primary asset id */" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBase.h" },
		{ "ToolTip", "Returns the logical name, equivalent to the primary asset id" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGItemBase_GetIdentifierString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGItemBase, nullptr, "GetIdentifierString", nullptr, nullptr, sizeof(RPGItemBase_eventGetIdentifierString_Parms), Z_Construct_UFunction_URPGItemBase_GetIdentifierString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemBase_GetIdentifierString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGItemBase_GetIdentifierString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemBase_GetIdentifierString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGItemBase_GetIdentifierString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGItemBase_GetIdentifierString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URPGItemBase_IsStackable_Statics
	{
		struct RPGItemBase_eventIsStackable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URPGItemBase_IsStackable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RPGItemBase_eventIsStackable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGItemBase_IsStackable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RPGItemBase_eventIsStackable_Parms), &Z_Construct_UFunction_URPGItemBase_IsStackable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGItemBase_IsStackable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGItemBase_IsStackable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URPGItemBase_IsStackable_Statics::Function_MetaDataParams[] = {
		{ "Category", "RPG|Item|Max" },
		{ "Comment", "/** Returns if the item is consumable (MaxCount <= 0)*/" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBase.h" },
		{ "ToolTip", "Returns if the item is consumable (MaxCount <= 0)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGItemBase_IsStackable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URPGItemBase, nullptr, "IsStackable", nullptr, nullptr, sizeof(RPGItemBase_eventIsStackable_Parms), Z_Construct_UFunction_URPGItemBase_IsStackable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemBase_IsStackable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URPGItemBase_IsStackable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URPGItemBase_IsStackable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URPGItemBase_IsStackable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URPGItemBase_IsStackable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URPGItemBase_NoRegister()
	{
		return URPGItemBase::StaticClass();
	}
	struct Z_Construct_UClass_URPGItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilityLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrantedAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GrantedAbility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_RPG_V1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URPGItemBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGItemBase_GetIdentifierString, "GetIdentifierString" }, // 3116927291
		{ &Z_Construct_UFunction_URPGItemBase_IsStackable, "IsStackable" }, // 877566819
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItemBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base class for all items, do not blueprint directly */" },
		{ "IncludePath", "Items/RPGItemBase.h" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBase.h" },
		{ "ToolTip", "Base class for all items, do not blueprint directly" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItemBase_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "Category", "RPG|Item|Abilities" },
		{ "Comment", "/** Ability level this item grants. <= 0 means the character level */" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBase.h" },
		{ "ToolTip", "Ability level this item grants. <= 0 means the character level" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGItemBase_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItemBase, AbilityLevel), METADATA_PARAMS(Z_Construct_UClass_URPGItemBase_Statics::NewProp_AbilityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBase_Statics::NewProp_AbilityLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItemBase_Statics::NewProp_GrantedAbility_MetaData[] = {
		{ "Category", "RPG|Item|Abilities" },
		{ "Comment", "/** Ability to grant if this item is equipped */" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBase.h" },
		{ "ToolTip", "Ability to grant if this item is equipped" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URPGItemBase_Statics::NewProp_GrantedAbility = { "GrantedAbility", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItemBase, GrantedAbility), Z_Construct_UClass_URPGGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URPGItemBase_Statics::NewProp_GrantedAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBase_Statics::NewProp_GrantedAbility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItemBase_Statics::NewProp_MaxLevel_MetaData[] = {
		{ "Category", "RPG|Item|Max" },
		{ "Comment", "/** Maximum level this item can be, <= 0 means infinite */" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBase.h" },
		{ "ToolTip", "Maximum level this item can be, <= 0 means infinite" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGItemBase_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItemBase, MaxLevel), METADATA_PARAMS(Z_Construct_UClass_URPGItemBase_Statics::NewProp_MaxLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBase_Statics::NewProp_MaxLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItemBase_Statics::NewProp_MaxCount_MetaData[] = {
		{ "Category", "RPG|Item|Max" },
		{ "Comment", "/** Maximum number of instances that can be in a stack at once, <= 0 means infinite */" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBase.h" },
		{ "ToolTip", "Maximum number of instances that can be in a stack at once, <= 0 means infinite" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URPGItemBase_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItemBase, MaxCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_URPGItemBase_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBase_Statics::NewProp_MaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItemBase_Statics::NewProp_Price_MetaData[] = {
		{ "Category", "RPG|Item" },
		{ "Comment", "/** Price in game */" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBase.h" },
		{ "ToolTip", "Price in game" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGItemBase_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItemBase, Price), METADATA_PARAMS(Z_Construct_UClass_URPGItemBase_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBase_Statics::NewProp_Price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemMesh_MetaData[] = {
		{ "Category", "RPG|Item" },
		{ "Comment", "/** Icon to display */" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBase.h" },
		{ "ToolTip", "Icon to display" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItemBase, ItemMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "RPG|Item" },
		{ "Comment", "/** Icon to display */" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBase.h" },
		{ "ToolTip", "Icon to display" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItemBase, ItemIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "RPG|Item" },
		{ "Comment", "/** User-visible long description */" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBase.h" },
		{ "Multiline", "true" },
		{ "ToolTip", "User-visible long description" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItemBase, ItemDescription), METADATA_PARAMS(Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "RPG|Item" },
		{ "Comment", "/** User-visible short name */" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBase.h" },
		{ "ToolTip", "User-visible short name" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItemBase, ItemName), METADATA_PARAMS(Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "RPG|Item" },
		{ "Comment", "/** Type of this item, set in native parent class */" },
		{ "ModuleRelativePath", "Public/Items/RPGItemBase.h" },
		{ "ToolTip", "Type of this item, set in native parent class" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URPGItemBase, ItemType), Z_Construct_UScriptStruct_FPrimaryAssetType, METADATA_PARAMS(Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGItemBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemBase_Statics::NewProp_AbilityLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemBase_Statics::NewProp_GrantedAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemBase_Statics::NewProp_MaxLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemBase_Statics::NewProp_MaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemBase_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemBase_Statics::NewProp_ItemType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGItemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URPGItemBase_Statics::ClassParams = {
		&URPGItemBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URPGItemBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_URPGItemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGItemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URPGItemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URPGItemBase, 469765148);
	template<> RPG_V1_API UClass* StaticClass<URPGItemBase>()
	{
		return URPGItemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URPGItemBase(Z_Construct_UClass_URPGItemBase, &URPGItemBase::StaticClass, TEXT("/Script/RPG_V1"), TEXT("URPGItemBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGItemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
