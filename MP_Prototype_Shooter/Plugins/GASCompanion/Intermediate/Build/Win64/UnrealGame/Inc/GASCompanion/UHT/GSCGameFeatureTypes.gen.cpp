// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/GameFeatures/GSCGameFeatureTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCGameFeatureTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GASCOMPANION_API UEnum* Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping;
class UScriptStruct* FGSCGameFeatureAbilityMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCGameFeatureAbilityMapping"));
	}
	return Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCGameFeatureAbilityMapping>()
{
	return FGSCGameFeatureAbilityMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityType_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AbilityType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSCGameFeatureTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCGameFeatureAbilityMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_AbilityType_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Type of ability to grant */" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSCGameFeatureTypes.h" },
		{ "ToolTip", "Type of ability to grant" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_AbilityType = { "AbilityType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameFeatureAbilityMapping, AbilityType), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_AbilityType_MetaData), Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_AbilityType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Level to grant the ability at */" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSCGameFeatureTypes.h" },
		{ "ToolTip", "Level to grant the ability at" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameFeatureAbilityMapping, Level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_Level_MetaData), Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_Level_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Input action to bind the ability to, if any (can be left unset) */" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSCGameFeatureTypes.h" },
		{ "ToolTip", "Input action to bind the ability to, if any (can be left unset)" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameFeatureAbilityMapping, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_InputAction_MetaData), Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_InputAction_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** The enhanced input action event to use for ability activation */" },
		{ "EditCondition", "InputAction != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSCGameFeatureTypes.h" },
		{ "ToolTip", "The enhanced input action event to use for ability activation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameFeatureAbilityMapping, TriggerEvent), Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent_MetaData), Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent_MetaData) }; // 1698390805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_AbilityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewProp_TriggerEvent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCGameFeatureAbilityMapping",
		Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::PropPointers),
		sizeof(FGSCGameFeatureAbilityMapping),
		alignof(FGSCGameFeatureAbilityMapping),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping.InnerSingleton, Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping;
class UScriptStruct* FGSCGameFeatureAttributeSetMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCGameFeatureAttributeSetMapping"));
	}
	return Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCGameFeatureAttributeSetMapping>()
{
	return FGSCGameFeatureAttributeSetMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializationData_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InitializationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSCGameFeatureTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCGameFeatureAttributeSetMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** Attribute Set to grant */" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSCGameFeatureTypes.h" },
		{ "ToolTip", "Attribute Set to grant" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameFeatureAttributeSetMapping, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_InitializationData_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** Data table referent to initialize the attributes with, if any (can be left unset) */" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSCGameFeatureTypes.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/GameplayAbilities.AttributeMetaData" },
		{ "ToolTip", "Data table referent to initialize the attributes with, if any (can be left unset)" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_InitializationData = { "InitializationData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameFeatureAttributeSetMapping, InitializationData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_InitializationData_MetaData), Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_InitializationData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewProp_InitializationData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCGameFeatureAttributeSetMapping",
		Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::PropPointers),
		sizeof(FGSCGameFeatureAttributeSetMapping),
		alignof(FGSCGameFeatureAttributeSetMapping),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping.InnerSingleton, Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCGameFeatureGameplayEffectMapping;
class UScriptStruct* FGSCGameFeatureGameplayEffectMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureGameplayEffectMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCGameFeatureGameplayEffectMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCGameFeatureGameplayEffectMapping"));
	}
	return Z_Registration_Info_UScriptStruct_GSCGameFeatureGameplayEffectMapping.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCGameFeatureGameplayEffectMapping>()
{
	return FGSCGameFeatureGameplayEffectMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_EffectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSCGameFeatureTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCGameFeatureGameplayEffectMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::NewProp_EffectType_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "Comment", "/** Gameplay Effect to apply */" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSCGameFeatureTypes.h" },
		{ "ToolTip", "Gameplay Effect to apply" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameFeatureGameplayEffectMapping, EffectType), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::NewProp_EffectType_MetaData), Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::NewProp_EffectType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "Comment", "/** Level for the Gameplay Effect to apply */" },
		{ "ModuleRelativePath", "Public/GameFeatures/GSCGameFeatureTypes.h" },
		{ "ToolTip", "Level for the Gameplay Effect to apply" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameFeatureGameplayEffectMapping, Level), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::NewProp_Level_MetaData), Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::NewProp_Level_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::NewProp_EffectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::NewProp_Level,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCGameFeatureGameplayEffectMapping",
		Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::PropPointers),
		sizeof(FGSCGameFeatureGameplayEffectMapping),
		alignof(FGSCGameFeatureGameplayEffectMapping),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureGameplayEffectMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCGameFeatureGameplayEffectMapping.InnerSingleton, Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCGameFeatureGameplayEffectMapping.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_GSCGameFeatureTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_GSCGameFeatureTypes_h_Statics::ScriptStructInfo[] = {
		{ FGSCGameFeatureAbilityMapping::StaticStruct, Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping_Statics::NewStructOps, TEXT("GSCGameFeatureAbilityMapping"), &Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilityMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCGameFeatureAbilityMapping), 910207942U) },
		{ FGSCGameFeatureAttributeSetMapping::StaticStruct, Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping_Statics::NewStructOps, TEXT("GSCGameFeatureAttributeSetMapping"), &Z_Registration_Info_UScriptStruct_GSCGameFeatureAttributeSetMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCGameFeatureAttributeSetMapping), 4022225833U) },
		{ FGSCGameFeatureGameplayEffectMapping::StaticStruct, Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping_Statics::NewStructOps, TEXT("GSCGameFeatureGameplayEffectMapping"), &Z_Registration_Info_UScriptStruct_GSCGameFeatureGameplayEffectMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCGameFeatureGameplayEffectMapping), 3628320800U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_GSCGameFeatureTypes_h_1250566212(TEXT("/Script/GASCompanion"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_GSCGameFeatureTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_GSCGameFeatureTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
