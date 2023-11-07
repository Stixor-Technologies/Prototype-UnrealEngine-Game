// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Templates/GSCTemplate_GameplayEffectDefinition.h"
#include "GameplayAbilitySpec.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCTemplate_GameplayEffectDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectUIData_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalGameplayEffect();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecDef();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCue();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectQuery();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FInheritedTagContainer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UGSCTemplate_GameplayEffectDefinition::StaticRegisterNativesUGSCTemplate_GameplayEffectDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCTemplate_GameplayEffectDefinition);
	UClass* Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_NoRegister()
	{
		return UGSCTemplate_GameplayEffectDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DurationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DurationPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DurationMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecutePeriodicEffectOnApplication_MetaData[];
#endif
		static void NewProp_bExecutePeriodicEffectOnApplication_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecutePeriodicEffectOnApplication;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PeriodicInhibitionPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeriodicInhibitionPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PeriodicInhibitionPolicy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Executions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Executions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Executions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToApplyToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChanceToApplyToTarget;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ApplicationRequirements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplicationRequirements;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionalGameplayEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionalGameplayEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConditionalGameplayEffects;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverflowEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverflowEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverflowEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDenyOverflowApplication_MetaData[];
#endif
		static void NewProp_bDenyOverflowApplication_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyOverflowApplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearStackOnOverflow_MetaData[];
#endif
		static void NewProp_bClearStackOnOverflow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearStackOnOverflow;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PrematureExpirationEffectClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrematureExpirationEffectClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrematureExpirationEffectClasses;
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoutineExpirationEffectClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoutineExpirationEffectClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoutineExpirationEffectClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireModifierSuccessToTriggerCues_MetaData[];
#endif
		static void NewProp_bRequireModifierSuccessToTriggerCues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireModifierSuccessToTriggerCues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressStackingCues_MetaData[];
#endif
		static void NewProp_bSuppressStackingCues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressStackingCues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayCues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UIData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritableGameplayEffectTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InheritableGameplayEffectTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritableOwnedTagsContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InheritableOwnedTagsContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OngoingTagRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OngoingTagRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationTagRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApplicationTagRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovalTagRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalTagRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveGameplayEffectsWithTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveGameplayEffectsWithTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedApplicationImmunityTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedApplicationImmunityTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedApplicationImmunityQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedApplicationImmunityQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveGameplayEffectQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveGameplayEffectQuery;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StackingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StackingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackLimitCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackLimitCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StackDurationRefreshPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackDurationRefreshPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StackDurationRefreshPolicy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StackPeriodResetPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackPeriodResetPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StackPeriodResetPolicy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StackExpirationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackExpirationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StackExpirationPolicy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parent class for Gameplay Effect Templates.\n *\n * Templates are one of special kind. They are only meant to be used to create other Gameplay Effect\n * based on their Class Default Object, and not meant to be used directly or inherited.\n *\n * These are not child of UGameplayEffect, but rather an UObject sharing the exact same properties as UGameplayEffect.\n *\n * This class exists only to allow creation of GE templates Blueprint, that can be configured in Project Settings, without\n * having them interfere with standard Gameplay Effects dropdown in properties and nodes like ApplyGameplayEffect.\n *\n * When a new GE is created from a template, a real UGameplayEffect Blueprint is created based on the properties defined by the template.\n */" },
		{ "IncludePath", "Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Parent class for Gameplay Effect Templates.\n\nTemplates are one of special kind. They are only meant to be used to create other Gameplay Effect\nbased on their Class Default Object, and not meant to be used directly or inherited.\n\nThese are not child of UGameplayEffect, but rather an UObject sharing the exact same properties as UGameplayEffect.\n\nThis class exists only to allow creation of GE templates Blueprint, that can be configured in Project Settings, without\nhaving them interfere with standard Gameplay Effects dropdown in properties and nodes like ApplyGameplayEffect.\n\nWhen a new GE is created from a template, a real UGameplayEffect Blueprint is created based on the properties defined by the template." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_DurationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_DurationPolicy_MetaData[] = {
		{ "Category", "GameplayEffect" },
		{ "Comment", "/** Policy for the duration of this effect */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Policy for the duration of this effect" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_DurationPolicy = { "DurationPolicy", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, DurationPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_DurationPolicy_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_DurationPolicy_MetaData) }; // 2970687177
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_DurationMagnitude_MetaData[] = {
		{ "Category", "GameplayEffect" },
		{ "Comment", "/** Duration in seconds. 0.0 for instantaneous effects; -1.0 for infinite duration. */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Duration in seconds. 0.0 for instantaneous effects; -1.0 for infinite duration." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_DurationMagnitude = { "DurationMagnitude", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, DurationMagnitude), Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_DurationMagnitude_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_DurationMagnitude_MetaData) }; // 2859749926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Period" },
		{ "Comment", "/** Period in seconds. 0.0 for non-periodic effects */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Period in seconds. 0.0 for non-periodic effects" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, Period), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Period_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Period_MetaData) }; // 4070660376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bExecutePeriodicEffectOnApplication_MetaData[] = {
		{ "Category", "Period" },
		{ "Comment", "/** If true, the effect executes on application and then at every period interval. If false, no execution occurs until the first period elapses. */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "If true, the effect executes on application and then at every period interval. If false, no execution occurs until the first period elapses." },
	};
#endif
	void Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bExecutePeriodicEffectOnApplication_SetBit(void* Obj)
	{
		((UGSCTemplate_GameplayEffectDefinition*)Obj)->bExecutePeriodicEffectOnApplication = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bExecutePeriodicEffectOnApplication = { "bExecutePeriodicEffectOnApplication", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCTemplate_GameplayEffectDefinition), &Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bExecutePeriodicEffectOnApplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bExecutePeriodicEffectOnApplication_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bExecutePeriodicEffectOnApplication_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PeriodicInhibitionPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PeriodicInhibitionPolicy_MetaData[] = {
		{ "Category", "Period" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PeriodicInhibitionPolicy = { "PeriodicInhibitionPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, PeriodicInhibitionPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PeriodicInhibitionPolicy_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PeriodicInhibitionPolicy_MetaData) }; // 2339228042
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayModifierInfo, METADATA_PARAMS(0, nullptr) }; // 4234896061
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "GameplayEffect" },
		{ "Comment", "/** Array of modifiers that will affect the target of this effect */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "TitleProperty", "Attribute" },
		{ "ToolTip", "Array of modifiers that will affect the target of this effect" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Modifiers_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Modifiers_MetaData) }; // 4234896061
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Executions_Inner = { "Executions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition, METADATA_PARAMS(0, nullptr) }; // 1374529225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Executions_MetaData[] = {
		{ "Category", "GameplayEffect" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Executions = { "Executions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, Executions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Executions_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Executions_MetaData) }; // 1374529225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ChanceToApplyToTarget_MetaData[] = {
		{ "Category", "Application" },
		{ "Comment", "/** Probability that this gameplay effect will be applied to the target actor (0.0 for never, 1.0 for always) */" },
		{ "GameplayAttribute", "True" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Probability that this gameplay effect will be applied to the target actor (0.0 for never, 1.0 for always)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ChanceToApplyToTarget = { "ChanceToApplyToTarget", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, ChanceToApplyToTarget), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ChanceToApplyToTarget_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ChanceToApplyToTarget_MetaData) }; // 4070660376
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ApplicationRequirements_Inner = { "ApplicationRequirements", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ApplicationRequirements_MetaData[] = {
		{ "Category", "Application" },
		{ "DisplayName", "Application Requirement" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ApplicationRequirements = { "ApplicationRequirements", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, ApplicationRequirements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ApplicationRequirements_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ApplicationRequirements_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ConditionalGameplayEffects_Inner = { "ConditionalGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FConditionalGameplayEffect, METADATA_PARAMS(0, nullptr) }; // 3966782288
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ConditionalGameplayEffects_MetaData[] = {
		{ "Category", "GameplayEffect" },
		{ "Comment", "/** other gameplay effects that will be applied to the target of this effect if this effect applies */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "other gameplay effects that will be applied to the target of this effect if this effect applies" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ConditionalGameplayEffects = { "ConditionalGameplayEffects", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, ConditionalGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ConditionalGameplayEffects_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ConditionalGameplayEffects_MetaData) }; // 3966782288
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_OverflowEffects_Inner = { "OverflowEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_OverflowEffects_MetaData[] = {
		{ "Category", "Overflow" },
		{ "Comment", "/** Effects to apply when a stacking effect \"overflows\" its stack count through another attempted application. Added whether the overflow application succeeds or not. */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Effects to apply when a stacking effect \"overflows\" its stack count through another attempted application. Added whether the overflow application succeeds or not." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_OverflowEffects = { "OverflowEffects", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, OverflowEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_OverflowEffects_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_OverflowEffects_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bDenyOverflowApplication_MetaData[] = {
		{ "Category", "Overflow" },
		{ "Comment", "/** If true, stacking attempts made while at the stack count will fail, resulting in the duration and context not being refreshed */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "If true, stacking attempts made while at the stack count will fail, resulting in the duration and context not being refreshed" },
	};
#endif
	void Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bDenyOverflowApplication_SetBit(void* Obj)
	{
		((UGSCTemplate_GameplayEffectDefinition*)Obj)->bDenyOverflowApplication = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bDenyOverflowApplication = { "bDenyOverflowApplication", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCTemplate_GameplayEffectDefinition), &Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bDenyOverflowApplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bDenyOverflowApplication_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bDenyOverflowApplication_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bClearStackOnOverflow_MetaData[] = {
		{ "Category", "Overflow" },
		{ "Comment", "/** If true, the entire stack of the effect will be cleared once it overflows */" },
		{ "EditCondition", "bDenyOverflowApplication" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "If true, the entire stack of the effect will be cleared once it overflows" },
	};
#endif
	void Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bClearStackOnOverflow_SetBit(void* Obj)
	{
		((UGSCTemplate_GameplayEffectDefinition*)Obj)->bClearStackOnOverflow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bClearStackOnOverflow = { "bClearStackOnOverflow", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCTemplate_GameplayEffectDefinition), &Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bClearStackOnOverflow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bClearStackOnOverflow_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bClearStackOnOverflow_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PrematureExpirationEffectClasses_Inner = { "PrematureExpirationEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PrematureExpirationEffectClasses_MetaData[] = {
		{ "Category", "Expiration" },
		{ "Comment", "/** Effects to apply when this effect is made to expire prematurely (like via a forced removal, clear tags, etc.); Only works for effects with a duration */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Effects to apply when this effect is made to expire prematurely (like via a forced removal, clear tags, etc.); Only works for effects with a duration" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PrematureExpirationEffectClasses = { "PrematureExpirationEffectClasses", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, PrematureExpirationEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PrematureExpirationEffectClasses_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PrematureExpirationEffectClasses_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RoutineExpirationEffectClasses_Inner = { "RoutineExpirationEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RoutineExpirationEffectClasses_MetaData[] = {
		{ "Category", "Expiration" },
		{ "Comment", "/** Effects to apply when this effect expires naturally via its duration; Only works for effects with a duration */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Effects to apply when this effect expires naturally via its duration; Only works for effects with a duration" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RoutineExpirationEffectClasses = { "RoutineExpirationEffectClasses", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, RoutineExpirationEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RoutineExpirationEffectClasses_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RoutineExpirationEffectClasses_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bRequireModifierSuccessToTriggerCues_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** If true, cues will only trigger when GE modifiers succeed being applied (whether through modifiers or executions) */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "If true, cues will only trigger when GE modifiers succeed being applied (whether through modifiers or executions)" },
	};
#endif
	void Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bRequireModifierSuccessToTriggerCues_SetBit(void* Obj)
	{
		((UGSCTemplate_GameplayEffectDefinition*)Obj)->bRequireModifierSuccessToTriggerCues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bRequireModifierSuccessToTriggerCues = { "bRequireModifierSuccessToTriggerCues", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCTemplate_GameplayEffectDefinition), &Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bRequireModifierSuccessToTriggerCues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bRequireModifierSuccessToTriggerCues_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bRequireModifierSuccessToTriggerCues_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bSuppressStackingCues_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** If true, GameplayCues will only be triggered for the first instance in a stacking GameplayEffect. */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "If true, GameplayCues will only be triggered for the first instance in a stacking GameplayEffect." },
	};
#endif
	void Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bSuppressStackingCues_SetBit(void* Obj)
	{
		((UGSCTemplate_GameplayEffectDefinition*)Obj)->bSuppressStackingCues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bSuppressStackingCues = { "bSuppressStackingCues", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCTemplate_GameplayEffectDefinition), &Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bSuppressStackingCues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bSuppressStackingCues_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bSuppressStackingCues_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GameplayCues_Inner = { "GameplayCues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayEffectCue, METADATA_PARAMS(0, nullptr) }; // 1808717257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GameplayCues_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Cues to trigger non-simulated reactions in response to this GameplayEffect such as sounds, particle effects, etc */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Cues to trigger non-simulated reactions in response to this GameplayEffect such as sounds, particle effects, etc" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GameplayCues = { "GameplayCues", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, GameplayCues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GameplayCues_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GameplayCues_MetaData) }; // 1808717257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_UIData_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Data for the UI representation of this effect. This should include things like text, icons, etc. Not available in server-only builds. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Data for the UI representation of this effect. This should include things like text, icons, etc. Not available in server-only builds." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_UIData = { "UIData", nullptr, (EPropertyFlags)0x001600000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, UIData), Z_Construct_UClass_UGameplayEffectUIData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_UIData_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_UIData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_InheritableGameplayEffectTags_MetaData[] = {
		{ "Categories", "GameplayEffectTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** The GameplayEffect's Tags: tags the the GE *has* and DOES NOT give to the actor. */" },
		{ "DisplayName", "GameplayEffectAssetTag" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "The GameplayEffect's Tags: tags the the GE *has* and DOES NOT give to the actor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_InheritableGameplayEffectTags = { "InheritableGameplayEffectTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, InheritableGameplayEffectTags), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_InheritableGameplayEffectTags_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_InheritableGameplayEffectTags_MetaData) }; // 3013930984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_InheritableOwnedTagsContainer_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** \"These tags are applied to the actor I am applied to\" */" },
		{ "DisplayName", "GrantedTags" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "\"These tags are applied to the actor I am applied to\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_InheritableOwnedTagsContainer = { "InheritableOwnedTagsContainer", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, InheritableOwnedTagsContainer), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_InheritableOwnedTagsContainer_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_InheritableOwnedTagsContainer_MetaData) }; // 3013930984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_OngoingTagRequirements_MetaData[] = {
		{ "Categories", "OngoingTagRequirementsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** Once Applied, these tags requirements are used to determined if the GameplayEffect is \"on\" or \"off\". A GameplayEffect can be off and do nothing, but still applied. */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Once Applied, these tags requirements are used to determined if the GameplayEffect is \"on\" or \"off\". A GameplayEffect can be off and do nothing, but still applied." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_OngoingTagRequirements = { "OngoingTagRequirements", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, OngoingTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_OngoingTagRequirements_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_OngoingTagRequirements_MetaData) }; // 3703454900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ApplicationTagRequirements_MetaData[] = {
		{ "Categories", "ApplicationTagRequirementsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** Tag requirements for this GameplayEffect to be applied to a target. This is pass/fail at the time of application. If fail, this GE fails to apply. */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Tag requirements for this GameplayEffect to be applied to a target. This is pass/fail at the time of application. If fail, this GE fails to apply." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ApplicationTagRequirements = { "ApplicationTagRequirements", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, ApplicationTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ApplicationTagRequirements_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ApplicationTagRequirements_MetaData) }; // 3703454900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemovalTagRequirements_MetaData[] = {
		{ "Categories", "ApplicationTagRequirementsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** Tag requirements that if met will remove this effect. Also prevents effect application. */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Tag requirements that if met will remove this effect. Also prevents effect application." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemovalTagRequirements = { "RemovalTagRequirements", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, RemovalTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemovalTagRequirements_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemovalTagRequirements_MetaData) }; // 3703454900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemoveGameplayEffectsWithTags_MetaData[] = {
		{ "Categories", "RemoveTagRequirementsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** GameplayEffects that *have* tags in this container will be cleared upon effect application. */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "GameplayEffects that *have* tags in this container will be cleared upon effect application." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemoveGameplayEffectsWithTags = { "RemoveGameplayEffectsWithTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, RemoveGameplayEffectsWithTags), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemoveGameplayEffectsWithTags_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemoveGameplayEffectsWithTags_MetaData) }; // 3013930984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedApplicationImmunityTags_MetaData[] = {
		{ "Categories", "GrantedApplicationImmunityTagsCategory" },
		{ "Category", "Immunity" },
		{ "Comment", "/** Grants the owner immunity from these source tags.  */" },
		{ "DisplayName", "GrantedApplicationImmunityTags" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Grants the owner immunity from these source tags." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedApplicationImmunityTags = { "GrantedApplicationImmunityTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, GrantedApplicationImmunityTags), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedApplicationImmunityTags_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedApplicationImmunityTags_MetaData) }; // 3703454900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedApplicationImmunityQuery_MetaData[] = {
		{ "Category", "Immunity" },
		{ "Comment", "/** Grants immunity to GameplayEffects that match this query. Queries are more powerful but slightly slower than GrantedApplicationImmunityTags. */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Grants immunity to GameplayEffects that match this query. Queries are more powerful but slightly slower than GrantedApplicationImmunityTags." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedApplicationImmunityQuery = { "GrantedApplicationImmunityQuery", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, GrantedApplicationImmunityQuery), Z_Construct_UScriptStruct_FGameplayEffectQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedApplicationImmunityQuery_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedApplicationImmunityQuery_MetaData) }; // 789866029
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemoveGameplayEffectQuery_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/** On Application of an effect, any active effects with this this query that matches against the added effect will be removed. Queries are more powerful but slightly slower than RemoveGameplayEffectsWithTags. */" },
		{ "DisplayAfter", "RemovalTagRequirements" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "On Application of an effect, any active effects with this this query that matches against the added effect will be removed. Queries are more powerful but slightly slower than RemoveGameplayEffectsWithTags." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemoveGameplayEffectQuery = { "RemoveGameplayEffectQuery", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, RemoveGameplayEffectQuery), Z_Construct_UScriptStruct_FGameplayEffectQuery, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemoveGameplayEffectQuery_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemoveGameplayEffectQuery_MetaData) }; // 789866029
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackingType_MetaData[] = {
		{ "Category", "Stacking" },
		{ "Comment", "/** How this GameplayEffect stacks with other instances of this same GameplayEffect */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "How this GameplayEffect stacks with other instances of this same GameplayEffect" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackingType = { "StackingType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, StackingType), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackingType_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackingType_MetaData) }; // 1361123328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackLimitCount_MetaData[] = {
		{ "Category", "Stacking" },
		{ "Comment", "/** Stack limit for StackingType */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Stack limit for StackingType" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackLimitCount = { "StackLimitCount", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, StackLimitCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackLimitCount_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackLimitCount_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackDurationRefreshPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackDurationRefreshPolicy_MetaData[] = {
		{ "Category", "Stacking" },
		{ "Comment", "/** Policy for how the effect duration should be refreshed while stacking */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Policy for how the effect duration should be refreshed while stacking" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackDurationRefreshPolicy = { "StackDurationRefreshPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, StackDurationRefreshPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackDurationRefreshPolicy_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackDurationRefreshPolicy_MetaData) }; // 4183945553
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackPeriodResetPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackPeriodResetPolicy_MetaData[] = {
		{ "Category", "Stacking" },
		{ "Comment", "/** Policy for how the effect period should be reset (or not) while stacking */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Policy for how the effect period should be reset (or not) while stacking" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackPeriodResetPolicy = { "StackPeriodResetPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, StackPeriodResetPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackPeriodResetPolicy_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackPeriodResetPolicy_MetaData) }; // 1576035039
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackExpirationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackExpirationPolicy_MetaData[] = {
		{ "Category", "Stacking" },
		{ "Comment", "/** Policy for how to handle duration expiring on this gameplay effect */" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Policy for how to handle duration expiring on this gameplay effect" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackExpirationPolicy = { "StackExpirationPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, StackExpirationPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackExpirationPolicy_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackExpirationPolicy_MetaData) }; // 4105340511
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecDef, METADATA_PARAMS(0, nullptr) }; // 3045358525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "Granted Abilities" },
		{ "Comment", "// ----------------------------------------------------------------------\n//\x09Granted abilities\n// ----------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/Templates/GSCTemplate_GameplayEffectDefinition.h" },
		{ "ToolTip", "Granted abilities" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCTemplate_GameplayEffectDefinition, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedAbilities_MetaData), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedAbilities_MetaData) }; // 3045358525
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_DurationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_DurationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_DurationMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Period,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bExecutePeriodicEffectOnApplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PeriodicInhibitionPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PeriodicInhibitionPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Executions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_Executions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ChanceToApplyToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ApplicationRequirements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ApplicationRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ConditionalGameplayEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ConditionalGameplayEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_OverflowEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_OverflowEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bDenyOverflowApplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bClearStackOnOverflow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PrematureExpirationEffectClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_PrematureExpirationEffectClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RoutineExpirationEffectClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RoutineExpirationEffectClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bRequireModifierSuccessToTriggerCues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_bSuppressStackingCues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GameplayCues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GameplayCues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_UIData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_InheritableGameplayEffectTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_InheritableOwnedTagsContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_OngoingTagRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_ApplicationTagRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemovalTagRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemoveGameplayEffectsWithTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedApplicationImmunityTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedApplicationImmunityQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_RemoveGameplayEffectQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackLimitCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackDurationRefreshPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackDurationRefreshPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackPeriodResetPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackPeriodResetPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackExpirationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_StackExpirationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::NewProp_GrantedAbilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCTemplate_GameplayEffectDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::ClassParams = {
		&UGSCTemplate_GameplayEffectDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition()
	{
		if (!Z_Registration_Info_UClass_UGSCTemplate_GameplayEffectDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCTemplate_GameplayEffectDefinition.OuterSingleton, Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCTemplate_GameplayEffectDefinition.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCTemplate_GameplayEffectDefinition>()
	{
		return UGSCTemplate_GameplayEffectDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCTemplate_GameplayEffectDefinition);
	UGSCTemplate_GameplayEffectDefinition::~UGSCTemplate_GameplayEffectDefinition() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Templates_GSCTemplate_GameplayEffectDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Templates_GSCTemplate_GameplayEffectDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCTemplate_GameplayEffectDefinition, UGSCTemplate_GameplayEffectDefinition::StaticClass, TEXT("UGSCTemplate_GameplayEffectDefinition"), &Z_Registration_Info_UClass_UGSCTemplate_GameplayEffectDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCTemplate_GameplayEffectDefinition), 2154617377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Templates_GSCTemplate_GameplayEffectDefinition_h_4186726898(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Templates_GSCTemplate_GameplayEffectDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Templates_GSCTemplate_GameplayEffectDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
