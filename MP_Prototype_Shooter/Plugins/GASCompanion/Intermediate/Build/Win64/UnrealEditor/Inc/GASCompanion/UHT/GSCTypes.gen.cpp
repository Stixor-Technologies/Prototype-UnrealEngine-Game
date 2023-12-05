// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Abilities/GSCTypes.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTargetType_NoRegister();
	GASCOMPANION_API UEnum* Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayEffectContainer();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGSCAbilityTriggerEvent;
	static UEnum* EGSCAbilityTriggerEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGSCAbilityTriggerEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGSCAbilityTriggerEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("EGSCAbilityTriggerEvent"));
		}
		return Z_Registration_Info_UEnum_EGSCAbilityTriggerEvent.OuterSingleton;
	}
	template<> GASCOMPANION_API UEnum* StaticEnum<EGSCAbilityTriggerEvent>()
	{
		return EGSCAbilityTriggerEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent_Statics::Enumerators[] = {
		{ "EGSCAbilityTriggerEvent::Started", (int64)EGSCAbilityTriggerEvent::Started },
		{ "EGSCAbilityTriggerEvent::Triggered", (int64)EGSCAbilityTriggerEvent::Triggered },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enum listing all possible ability activation input trigger event. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCTypes.h" },
		{ "Started.Comment", "/** The most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button. */" },
		{ "Started.DisplayName", "Activate on Action Started (recommended)" },
		{ "Started.Name", "EGSCAbilityTriggerEvent::Started" },
		{ "Started.ToolTip", "The most common trigger types are likely to be Started for actions that happen once, immediately upon pressing a button." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum listing all possible ability activation input trigger event." },
#endif
		{ "Triggered.Comment", "/**\n\x09 * Triggered for continuous actions that happen every frame while holding an input\n\x09 *\n\x09 * Warning: This value should only be used for Input Actions that you know only trigger once. If your action\n\x09 * triggered event happens on every tick, this might lead to issues with ability activation (since you'll be\n\x09 * trying to activate abilities every frame). When in doubt, use the default Started value.\n\x09 */" },
		{ "Triggered.DisplayName", "Activate on Action Triggered (use with caution)" },
		{ "Triggered.Name", "EGSCAbilityTriggerEvent::Triggered" },
		{ "Triggered.ToolTip", "Triggered for continuous actions that happen every frame while holding an input\n\nWarning: This value should only be used for Input Actions that you know only trigger once. If your action\ntriggered event happens on every tick, this might lead to issues with ability activation (since you'll be\ntrying to activate abilities every frame). When in doubt, use the default Started value." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		"EGSCAbilityTriggerEvent",
		"EGSCAbilityTriggerEvent",
		Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent()
	{
		if (!Z_Registration_Info_UEnum_EGSCAbilityTriggerEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGSCAbilityTriggerEvent.InnerSingleton, Z_Construct_UEnum_GASCompanion_EGSCAbilityTriggerEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGSCAbilityTriggerEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainer;
class UScriptStruct* FGSCGameplayEffectContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCGameplayEffectContainer, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCGameplayEffectContainer"));
	}
	return Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainer.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCGameplayEffectContainer>()
{
	return FGSCGameplayEffectContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetType;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetGameplayEffectClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSetByCallerMagnitude_MetaData[];
#endif
		static void NewProp_bUseSetByCallerMagnitude_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSetByCallerMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetByCallerDataTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetByCallerDataTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetByCallerMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SetByCallerMagnitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Struct defining a list of gameplay effects, a tag, and targeting info\n*\n* These containers are defined statically in blueprints or assets and then turn into Specs at runtime\n*/" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct defining a list of gameplay effects, a tag, and targeting info\n\nThese containers are defined statically in blueprints or assets and then turn into Specs at runtime" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCGameplayEffectContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the way that targeting happens */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the way that targeting happens" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectContainer, TargetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UGSCTargetType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_TargetType_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_TargetType_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses = { "TargetGameplayEffectClasses", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectContainer, TargetGameplayEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
		{ "ModuleRelativePath", "Public/Abilities/GSCTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude_SetBit(void* Obj)
	{
		((FGSCGameplayEffectContainer*)Obj)->bUseSetByCallerMagnitude = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude = { "bUseSetByCallerMagnitude", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGSCGameplayEffectContainer), &Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_SetByCallerDataTag_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
		{ "ModuleRelativePath", "Public/Abilities/GSCTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_SetByCallerDataTag = { "SetByCallerDataTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectContainer, SetByCallerDataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_SetByCallerDataTag_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_SetByCallerDataTag_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_SetByCallerMagnitude_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
		{ "ModuleRelativePath", "Public/Abilities/GSCTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_SetByCallerMagnitude = { "SetByCallerMagnitude", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectContainer, SetByCallerMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_SetByCallerMagnitude_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_SetByCallerMagnitude_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_TargetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_TargetGameplayEffectClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_bUseSetByCallerMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_SetByCallerDataTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewProp_SetByCallerMagnitude,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCGameplayEffectContainer",
		Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::PropPointers),
		sizeof(FGSCGameplayEffectContainer),
		alignof(FGSCGameplayEffectContainer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayEffectContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainer.InnerSingleton, Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainerSpec;
class UScriptStruct* FGSCGameplayEffectContainerSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainerSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainerSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCGameplayEffectContainerSpec"));
	}
	return Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainerSpec.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCGameplayEffectContainerSpec>()
{
	return FGSCGameplayEffectContainerSpec::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetGameplayEffectSpecs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGameplayEffectSpecs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetGameplayEffectSpecs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A \"processed\" version of GSCGameplayEffectContainer that can be passed around and eventually applied */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A \"processed\" version of GSCGameplayEffectContainer that can be passed around and eventually applied" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCGameplayEffectContainerSpec>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewProp_TargetData_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Computed target data */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Computed target data" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectContainerSpec, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewProp_TargetData_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewProp_TargetData_MetaData) }; // 3419327209
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 2882128022
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_MetaData[] = {
		{ "Category", "GameplayEffectContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of gameplay effects to apply to the targets */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of gameplay effects to apply to the targets" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs = { "TargetGameplayEffectSpecs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameplayEffectContainerSpec, TargetGameplayEffectSpecs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_MetaData), Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_MetaData) }; // 2882128022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewProp_TargetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewProp_TargetGameplayEffectSpecs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCGameplayEffectContainerSpec",
		Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::PropPointers),
		sizeof(FGSCGameplayEffectContainerSpec),
		alignof(FGSCGameplayEffectContainerSpec),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainerSpec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainerSpec.InnerSingleton, Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainerSpec.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTypes_h_Statics::EnumInfo[] = {
		{ EGSCAbilityTriggerEvent_StaticEnum, TEXT("EGSCAbilityTriggerEvent"), &Z_Registration_Info_UEnum_EGSCAbilityTriggerEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2362312655U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTypes_h_Statics::ScriptStructInfo[] = {
		{ FGSCGameplayEffectContainer::StaticStruct, Z_Construct_UScriptStruct_FGSCGameplayEffectContainer_Statics::NewStructOps, TEXT("GSCGameplayEffectContainer"), &Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCGameplayEffectContainer), 1057264585U) },
		{ FGSCGameplayEffectContainerSpec::StaticStruct, Z_Construct_UScriptStruct_FGSCGameplayEffectContainerSpec_Statics::NewStructOps, TEXT("GSCGameplayEffectContainerSpec"), &Z_Registration_Info_UScriptStruct_GSCGameplayEffectContainerSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCGameplayEffectContainerSpec), 2872509900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTypes_h_1951598606(TEXT("/Script/GASCompanion"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
