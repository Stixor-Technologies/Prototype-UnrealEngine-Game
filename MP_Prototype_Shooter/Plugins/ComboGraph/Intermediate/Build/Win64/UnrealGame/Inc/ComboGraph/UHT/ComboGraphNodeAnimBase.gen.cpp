// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Graph/ComboGraphNodeAnimBase.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "ComboGraph/Public/ComboGraphRuntimeTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphNodeAnimBase() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraph_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeAnimBase();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeAnimBase_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeBase();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphAsyncHandlingMethod();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphDamageHandlingMethod();
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphCueContainer();
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition();
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer();
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer();
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComboGraphAsyncHandlingMethod;
	static UEnum* EComboGraphAsyncHandlingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphAsyncHandlingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComboGraphAsyncHandlingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComboGraph_EComboGraphAsyncHandlingMethod, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("EComboGraphAsyncHandlingMethod"));
		}
		return Z_Registration_Info_UEnum_EComboGraphAsyncHandlingMethod.OuterSingleton;
	}
	template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphAsyncHandlingMethod>()
	{
		return EComboGraphAsyncHandlingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ComboGraph_EComboGraphAsyncHandlingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComboGraph_EComboGraphAsyncHandlingMethod_Statics::Enumerators[] = {
		{ "EComboGraphAsyncHandlingMethod::ResolvedObjects", (int64)EComboGraphAsyncHandlingMethod::ResolvedObjects },
		{ "EComboGraphAsyncHandlingMethod::SoftObjectPaths", (int64)EComboGraphAsyncHandlingMethod::SoftObjectPaths },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComboGraph_EComboGraphAsyncHandlingMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ResolvedObjects.Comment", "/** Async load of soft pointers in containers are handled upfront, gameplay cues get resolved objects in cue parameters */" },
		{ "ResolvedObjects.DisplayName", "Pass down resolved objects to cues" },
		{ "ResolvedObjects.Name", "EComboGraphAsyncHandlingMethod::ResolvedObjects" },
		{ "ResolvedObjects.ToolTip", "Async load of soft pointers in containers are handled upfront, gameplay cues get resolved objects in cue parameters" },
		{ "SoftObjectPaths.Comment", "/** Pass down just the source object paths to cues, letting the gameplay cue handler do the async loading if need be */" },
		{ "SoftObjectPaths.DisplayName", "Only pass down soft object paths" },
		{ "SoftObjectPaths.Name", "EComboGraphAsyncHandlingMethod::SoftObjectPaths" },
		{ "SoftObjectPaths.ToolTip", "Pass down just the source object paths to cues, letting the gameplay cue handler do the async loading if need be" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComboGraph_EComboGraphAsyncHandlingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		"EComboGraphAsyncHandlingMethod",
		"EComboGraphAsyncHandlingMethod",
		Z_Construct_UEnum_ComboGraph_EComboGraphAsyncHandlingMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphAsyncHandlingMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphAsyncHandlingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComboGraph_EComboGraphAsyncHandlingMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphAsyncHandlingMethod()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphAsyncHandlingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComboGraphAsyncHandlingMethod.InnerSingleton, Z_Construct_UEnum_ComboGraph_EComboGraphAsyncHandlingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComboGraphAsyncHandlingMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComboGraphDamageHandlingMethod;
	static UEnum* EComboGraphDamageHandlingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphDamageHandlingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComboGraphDamageHandlingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComboGraph_EComboGraphDamageHandlingMethod, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("EComboGraphDamageHandlingMethod"));
		}
		return Z_Registration_Info_UEnum_EComboGraphDamageHandlingMethod.OuterSingleton;
	}
	template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphDamageHandlingMethod>()
	{
		return EComboGraphDamageHandlingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ComboGraph_EComboGraphDamageHandlingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComboGraph_EComboGraphDamageHandlingMethod_Statics::Enumerators[] = {
		{ "EComboGraphDamageHandlingMethod::AbilitySystem", (int64)EComboGraphDamageHandlingMethod::AbilitySystem },
		{ "EComboGraphDamageHandlingMethod::DamageSystem", (int64)EComboGraphDamageHandlingMethod::DamageSystem },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComboGraph_EComboGraphDamageHandlingMethod_Statics::Enum_MetaDataParams[] = {
		{ "AbilitySystem.Comment", "/** Use Gameplay Ability System (Gameplay Effects) */" },
		{ "AbilitySystem.DisplayName", "Gameplay Ability System" },
		{ "AbilitySystem.Name", "EComboGraphDamageHandlingMethod::AbilitySystem" },
		{ "AbilitySystem.ToolTip", "Use Gameplay Ability System (Gameplay Effects)" },
		{ "BlueprintType", "true" },
		{ "DamageSystem.Comment", "/** Use Unreal's Damage System (for Pawns not using Attributes and Effects from GAS) */" },
		{ "DamageSystem.DisplayName", "Unreal's Damage System" },
		{ "DamageSystem.Name", "EComboGraphDamageHandlingMethod::DamageSystem" },
		{ "DamageSystem.ToolTip", "Use Unreal's Damage System (for Pawns not using Attributes and Effects from GAS)" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComboGraph_EComboGraphDamageHandlingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		"EComboGraphDamageHandlingMethod",
		"EComboGraphDamageHandlingMethod",
		Z_Construct_UEnum_ComboGraph_EComboGraphDamageHandlingMethod_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphDamageHandlingMethod_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphDamageHandlingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComboGraph_EComboGraphDamageHandlingMethod_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphDamageHandlingMethod()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphDamageHandlingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComboGraphDamageHandlingMethod.InnerSingleton, Z_Construct_UEnum_ComboGraph_EComboGraphDamageHandlingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComboGraphDamageHandlingMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphCueContainerDefinition;
class UScriptStruct* FComboGraphCueContainerDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphCueContainerDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphCueContainerDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("ComboGraphCueContainerDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphCueContainerDefinition.OuterSingleton;
}
template<> COMBOGRAPH_API UScriptStruct* StaticStruct<FComboGraphCueContainerDefinition>()
{
	return FComboGraphCueContainerDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CueSourceObjectType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueSourceObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CueSourceObjectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CascadeSystem_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CascadeSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundEffect_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoundEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Struct defining a list of gameplay tags, and optional source object to pass arbitrary data to GameplayCues (in GameplayCueParameters' SourceObject)\n*/" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Struct defining a list of gameplay tags, and optional source object to pass arbitrary data to GameplayCues (in GameplayCueParameters' SourceObject)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphCueContainerDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_GameplayCueTags_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "GameplayCueContainer" },
		{ "Comment", "/** Tags passed to the gameplay cue handler when this cue container is activated (multiple tags if matching valid gameplay cues will invoke them individually) */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Tags passed to the gameplay cue handler when this cue container is activated (multiple tags if matching valid gameplay cues will invoke them individually)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_GameplayCueTags = { "GameplayCueTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphCueContainerDefinition, GameplayCueTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_GameplayCueTags_MetaData), Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_GameplayCueTags_MetaData) }; // 405371792
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_CueSourceObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_CueSourceObjectType_MetaData[] = {
		{ "Category", "GameplayCueContainer" },
		{ "Comment", "/**\n\x09 * Specify here which type of SourceObject you'd like to pass down to GameplayCues.\n\x09 *\n\x09 * Allows to pass arbitrary data down to GameplayCues, made available in GameplayCueParameters' Effect Context.\n\x09 *\n\x09 * Example usage: Pass down a Niagara Emitter or Cascade Particle System, or SoundCues.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Specify here which type of SourceObject you'd like to pass down to GameplayCues.\n\nAllows to pass arbitrary data down to GameplayCues, made available in GameplayCueParameters' Effect Context.\n\nExample usage: Pass down a Niagara Emitter or Cascade Particle System, or SoundCues." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_CueSourceObjectType = { "CueSourceObjectType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphCueContainerDefinition, CueSourceObjectType), Z_Construct_UEnum_ComboGraph_EComboGraphCueSourceObjectType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_CueSourceObjectType_MetaData), Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_CueSourceObjectType_MetaData) }; // 324283642
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "Category", "GameplayCueContainer" },
		{ "Comment", "/** A particle system (Niagara) that if defined will be passed down to Gameplay Cues as SourceObject and available in params */" },
		{ "EditCondition", "CueSourceObjectType == EComboGraphCueSourceObjectType::Niagara" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "A particle system (Niagara) that if defined will be passed down to Gameplay Cues as SourceObject and available in params" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphCueContainerDefinition, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_NiagaraSystem_MetaData), Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_NiagaraSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_CascadeSystem_MetaData[] = {
		{ "Category", "GameplayCueContainer" },
		{ "Comment", "/** A particle system (Cascade) that if defined will be passed down to Gameplay Cues as SourceObject and available in params */" },
		{ "EditCondition", "CueSourceObjectType == EComboGraphCueSourceObjectType::Cascade" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "A particle system (Cascade) that if defined will be passed down to Gameplay Cues as SourceObject and available in params" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_CascadeSystem = { "CascadeSystem", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphCueContainerDefinition, CascadeSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_CascadeSystem_MetaData), Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_CascadeSystem_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_SoundEffect_MetaData[] = {
		{ "Category", "GameplayCueContainer" },
		{ "Comment", "/** The Sound to play (Cue, Wave, ...) that if defined will be passed down to Gameplay Cues as SourceObject and available in params */" },
		{ "EditCondition", "CueSourceObjectType == EComboGraphCueSourceObjectType::Sound" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "The Sound to play (Cue, Wave, ...) that if defined will be passed down to Gameplay Cues as SourceObject and available in params" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_SoundEffect = { "SoundEffect", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphCueContainerDefinition, SoundEffect), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_SoundEffect_MetaData), Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_SoundEffect_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_GameplayCueTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_CueSourceObjectType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_CueSourceObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_CascadeSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewProp_SoundEffect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		&NewStructOps,
		"ComboGraphCueContainerDefinition",
		Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::PropPointers),
		sizeof(FComboGraphCueContainerDefinition),
		alignof(FComboGraphCueContainerDefinition),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphCueContainerDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphCueContainerDefinition.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphCueContainerDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphCueContainer;
class UScriptStruct* FComboGraphCueContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphCueContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphCueContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphCueContainer, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("ComboGraphCueContainer"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphCueContainer.OuterSingleton;
}
template<> COMBOGRAPH_API UScriptStruct* StaticStruct<FComboGraphCueContainer>()
{
	return FComboGraphCueContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Definitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Definitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Struct holding a list of GameplayCueContainer definitions with gameplay tags, and optional source object to pass arbitrary data to GameplayCues (in GameplayCueParameters' SourceObject)\n*/" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Struct holding a list of GameplayCueContainer definitions with gameplay tags, and optional source object to pass arbitrary data to GameplayCues (in GameplayCueParameters' SourceObject)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphCueContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::NewProp_Definitions_Inner = { "Definitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition, METADATA_PARAMS(0, nullptr) }; // 872798746
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::NewProp_Definitions_MetaData[] = {
		{ "Category", "GameplayCueContainer" },
		{ "Comment", "/** List of gameplay tags (that should be associated with Gameplay Cues), and optional source object to pass arbitrary data to GameplayCues (in GameplayCueParameters' SourceObject) */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "List of gameplay tags (that should be associated with Gameplay Cues), and optional source object to pass arbitrary data to GameplayCues (in GameplayCueParameters' SourceObject)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::NewProp_Definitions = { "Definitions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphCueContainer, Definitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::NewProp_Definitions_MetaData), Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::NewProp_Definitions_MetaData) }; // 872798746
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::NewProp_Definitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::NewProp_Definitions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		&NewStructOps,
		"ComboGraphCueContainer",
		Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::PropPointers),
		sizeof(FComboGraphCueContainer),
		alignof(FComboGraphCueContainer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphCueContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphCueContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphCueContainer.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphCueContainer.InnerSingleton;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execK2_CanActivateNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_CanActivateNode_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execGetMagnitudeForContainer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OriginalMagnitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ElapsedSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TriggeredSeconds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimationLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MontagePlayTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InputMagnitude);
		P_GET_STRUCT(FGameplayTag,Z_Param_ContainerTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMagnitudeForContainer_Implementation(Z_Param_OriginalMagnitude,Z_Param_ElapsedSeconds,Z_Param_TriggeredSeconds,Z_Param_AnimationLength,Z_Param_MontagePlayTime,Z_Param_InputMagnitude,Z_Param_ContainerTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execGetAvatarAsCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->GetAvatarAsCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execGetAvatarAsPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetAvatarAsPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execGetAvatarActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAvatarActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execGetOwnerActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwnerActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execK2_GetPreviousNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UComboGraphNodeAnimBase**)Z_Param__Result=P_THIS->K2_GetPreviousNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execK2_GetOwningAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameplayAbility**)Z_Param__Result=P_THIS->K2_GetOwningAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execK2_GetOwningTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UComboGraphAbilityTask_StartGraph**)Z_Param__Result=P_THIS->K2_GetOwningTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execK2_GetOwningGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UComboGraph**)Z_Param__Result=P_THIS->K2_GetOwningGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execK2_GetChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UComboGraphNodeAnimBase*>*)Z_Param__Result=P_THIS->K2_GetChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execK2_GetAnimationClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->K2_GetAnimationClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execK2_GetAnimationAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequenceBase**)Z_Param__Result=P_THIS->K2_GetAnimationAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeAnimBase::execK2_GetNodeTitle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->K2_GetNodeTitle();
		P_NATIVE_END;
	}
	struct ComboGraphNodeAnimBase_eventGetMagnitudeForContainer_Parms
	{
		float OriginalMagnitude;
		float ElapsedSeconds;
		float TriggeredSeconds;
		float AnimationLength;
		float MontagePlayTime;
		float InputMagnitude;
		FGameplayTag ContainerTag;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		ComboGraphNodeAnimBase_eventGetMagnitudeForContainer_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct ComboGraphNodeAnimBase_eventK2_CanActivateNode_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ComboGraphNodeAnimBase_eventK2_CanActivateNode_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ComboGraphNodeAnimBase_eventOnEventReceived_Parms
	{
		FGameplayTag EventTag;
		FGameplayEventData EventData;
	};
	struct ComboGraphNodeAnimBase_eventOnMontagePlay_Parms
	{
		UAnimMontage* Montage;
	};
	static FName NAME_UComboGraphNodeAnimBase_GetMagnitudeForContainer = FName(TEXT("GetMagnitudeForContainer"));
	float UComboGraphNodeAnimBase::GetMagnitudeForContainer(float OriginalMagnitude, float ElapsedSeconds, float TriggeredSeconds, float AnimationLength, float MontagePlayTime, float InputMagnitude, FGameplayTag ContainerTag) const
	{
		ComboGraphNodeAnimBase_eventGetMagnitudeForContainer_Parms Parms;
		Parms.OriginalMagnitude=OriginalMagnitude;
		Parms.ElapsedSeconds=ElapsedSeconds;
		Parms.TriggeredSeconds=TriggeredSeconds;
		Parms.AnimationLength=AnimationLength;
		Parms.MontagePlayTime=MontagePlayTime;
		Parms.InputMagnitude=InputMagnitude;
		Parms.ContainerTag=ContainerTag;
		const_cast<UComboGraphNodeAnimBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UComboGraphNodeAnimBase_GetMagnitudeForContainer),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UComboGraphNodeAnimBase_K2_CanActivateNode = FName(TEXT("K2_CanActivateNode"));
	bool UComboGraphNodeAnimBase::K2_CanActivateNode() const
	{
		ComboGraphNodeAnimBase_eventK2_CanActivateNode_Parms Parms;
		const_cast<UComboGraphNodeAnimBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UComboGraphNodeAnimBase_K2_CanActivateNode),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UComboGraphNodeAnimBase_OnActivated = FName(TEXT("OnActivated"));
	void UComboGraphNodeAnimBase::OnActivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UComboGraphNodeAnimBase_OnActivated),NULL);
	}
	static FName NAME_UComboGraphNodeAnimBase_OnDeactivated = FName(TEXT("OnDeactivated"));
	void UComboGraphNodeAnimBase::OnDeactivated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UComboGraphNodeAnimBase_OnDeactivated),NULL);
	}
	static FName NAME_UComboGraphNodeAnimBase_OnEventReceived = FName(TEXT("OnEventReceived"));
	void UComboGraphNodeAnimBase::OnEventReceived(FGameplayTag EventTag, FGameplayEventData EventData)
	{
		ComboGraphNodeAnimBase_eventOnEventReceived_Parms Parms;
		Parms.EventTag=EventTag;
		Parms.EventData=EventData;
		ProcessEvent(FindFunctionChecked(NAME_UComboGraphNodeAnimBase_OnEventReceived),&Parms);
	}
	static FName NAME_UComboGraphNodeAnimBase_OnInitialized = FName(TEXT("OnInitialized"));
	void UComboGraphNodeAnimBase::OnInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_UComboGraphNodeAnimBase_OnInitialized),NULL);
	}
	static FName NAME_UComboGraphNodeAnimBase_OnMontagePlay = FName(TEXT("OnMontagePlay"));
	void UComboGraphNodeAnimBase::OnMontagePlay(UAnimMontage* Montage)
	{
		ComboGraphNodeAnimBase_eventOnMontagePlay_Parms Parms;
		Parms.Montage=Montage;
		ProcessEvent(FindFunctionChecked(NAME_UComboGraphNodeAnimBase_OnMontagePlay),&Parms);
	}
	void UComboGraphNodeAnimBase::StaticRegisterNativesUComboGraphNodeAnimBase()
	{
		UClass* Class = UComboGraphNodeAnimBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvatarActor", &UComboGraphNodeAnimBase::execGetAvatarActor },
			{ "GetAvatarAsCharacter", &UComboGraphNodeAnimBase::execGetAvatarAsCharacter },
			{ "GetAvatarAsPawn", &UComboGraphNodeAnimBase::execGetAvatarAsPawn },
			{ "GetMagnitudeForContainer", &UComboGraphNodeAnimBase::execGetMagnitudeForContainer },
			{ "GetOwnerActor", &UComboGraphNodeAnimBase::execGetOwnerActor },
			{ "K2_CanActivateNode", &UComboGraphNodeAnimBase::execK2_CanActivateNode },
			{ "K2_GetAnimationAsset", &UComboGraphNodeAnimBase::execK2_GetAnimationAsset },
			{ "K2_GetAnimationClass", &UComboGraphNodeAnimBase::execK2_GetAnimationClass },
			{ "K2_GetChildren", &UComboGraphNodeAnimBase::execK2_GetChildren },
			{ "K2_GetNodeTitle", &UComboGraphNodeAnimBase::execK2_GetNodeTitle },
			{ "K2_GetOwningAbility", &UComboGraphNodeAnimBase::execK2_GetOwningAbility },
			{ "K2_GetOwningGraph", &UComboGraphNodeAnimBase::execK2_GetOwningGraph },
			{ "K2_GetOwningTask", &UComboGraphNodeAnimBase::execK2_GetOwningTask },
			{ "K2_GetPreviousNode", &UComboGraphNodeAnimBase::execK2_GetPreviousNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics
	{
		struct ComboGraphNodeAnimBase_eventGetAvatarActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventGetAvatarActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** Returns the direct parent node that this node was transitioned from. */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Returns the direct parent node that this node was transitioned from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "GetAvatarActor", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics::ComboGraphNodeAnimBase_eventGetAvatarActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics::ComboGraphNodeAnimBase_eventGetAvatarActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics
	{
		struct ComboGraphNodeAnimBase_eventGetAvatarAsCharacter_Parms
		{
			ACharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventGetAvatarAsCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** Returns the direct parent node that this node was transitioned from. */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Returns the direct parent node that this node was transitioned from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "GetAvatarAsCharacter", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics::ComboGraphNodeAnimBase_eventGetAvatarAsCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics::ComboGraphNodeAnimBase_eventGetAvatarAsCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics
	{
		struct ComboGraphNodeAnimBase_eventGetAvatarAsPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventGetAvatarAsPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** Returns the direct parent node that this node was transitioned from. */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Returns the direct parent node that this node was transitioned from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "GetAvatarAsPawn", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics::ComboGraphNodeAnimBase_eventGetAvatarAsPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics::ComboGraphNodeAnimBase_eventGetAvatarAsPawn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalMagnitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedSeconds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggeredSeconds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MontagePlayTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputMagnitude;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerTag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_OriginalMagnitude = { "OriginalMagnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventGetMagnitudeForContainer_Parms, OriginalMagnitude), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_ElapsedSeconds = { "ElapsedSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventGetMagnitudeForContainer_Parms, ElapsedSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_TriggeredSeconds = { "TriggeredSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventGetMagnitudeForContainer_Parms, TriggeredSeconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_AnimationLength = { "AnimationLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventGetMagnitudeForContainer_Parms, AnimationLength), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_MontagePlayTime = { "MontagePlayTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventGetMagnitudeForContainer_Parms, MontagePlayTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_InputMagnitude = { "InputMagnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventGetMagnitudeForContainer_Parms, InputMagnitude), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_ContainerTag = { "ContainerTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventGetMagnitudeForContainer_Parms, ContainerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventGetMagnitudeForContainer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_OriginalMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_ElapsedSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_TriggeredSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_AnimationLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_MontagePlayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_InputMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_ContainerTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/**\n\x09 * Used by Combo Graph Task to calculate Damage Container damage to apply or Effect Container set by caller magnitudes before being applied via Effects.\n\x09 *\n\x09 * Can be overridden in Blueprint, and should return the new computed magnitude value (default native implementation simply return the Container Magnitude value)\n\x09 *\n\x09 * @param OriginalMagnitude Original magnitude or base damage value defined in Combo Node for the Effect or Damage Container (depends on DamageHandlingMethod)\n\x09 * @param ElapsedSeconds Time in seconds returned by the Enhanced Input system. Total time the action has been evaluating triggering (Ongoing & Triggered)\n\x09 * @param TriggeredSeconds Time in seconds returned by the Enhanced Input system. Time the action has been actively triggered (Triggered only)\n\x09 * @param AnimationLength Total animation play time with section time defined by StartSection on montage node subtracted from the result. If no StartSection is defined (None), total animation play time is used\n\x09 * @param MontagePlayTime Actual Play time in seconds for the montage at the time the container is applied\n\x09 * @param InputMagnitude Normalized magnitude value ranging from 0 to 1 based on Enhanced Input Elapsed Time and Animation Length (1 means Elapsed Time is at or above the total animation length)\n\x09 * @param ContainerTag Gameplay Tag key for the Effect or Damage container (depends on DamageHandlingMethod). Can be used to get back original container from DamagesContainerMap or EffectsContainerMap\n\x09 * @return New adjusted magnitude value\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Used by Combo Graph Task to calculate Damage Container damage to apply or Effect Container set by caller magnitudes before being applied via Effects.\n\nCan be overridden in Blueprint, and should return the new computed magnitude value (default native implementation simply return the Container Magnitude value)\n\n@param OriginalMagnitude Original magnitude or base damage value defined in Combo Node for the Effect or Damage Container (depends on DamageHandlingMethod)\n@param ElapsedSeconds Time in seconds returned by the Enhanced Input system. Total time the action has been evaluating triggering (Ongoing & Triggered)\n@param TriggeredSeconds Time in seconds returned by the Enhanced Input system. Time the action has been actively triggered (Triggered only)\n@param AnimationLength Total animation play time with section time defined by StartSection on montage node subtracted from the result. If no StartSection is defined (None), total animation play time is used\n@param MontagePlayTime Actual Play time in seconds for the montage at the time the container is applied\n@param InputMagnitude Normalized magnitude value ranging from 0 to 1 based on Enhanced Input Elapsed Time and Animation Length (1 means Elapsed Time is at or above the total animation length)\n@param ContainerTag Gameplay Tag key for the Effect or Damage container (depends on DamageHandlingMethod). Can be used to get back original container from DamagesContainerMap or EffectsContainerMap\n@return New adjusted magnitude value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "GetMagnitudeForContainer", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::PropPointers), sizeof(ComboGraphNodeAnimBase_eventGetMagnitudeForContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::PropPointers) < 2048);
	static_assert(sizeof(ComboGraphNodeAnimBase_eventGetMagnitudeForContainer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics
	{
		struct ComboGraphNodeAnimBase_eventGetOwnerActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventGetOwnerActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** Returns the direct parent node that this node was transitioned from. */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Returns the direct parent node that this node was transitioned from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "GetOwnerActor", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics::ComboGraphNodeAnimBase_eventGetOwnerActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics::ComboGraphNodeAnimBase_eventGetOwnerActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComboGraphNodeAnimBase_eventK2_CanActivateNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComboGraphNodeAnimBase_eventK2_CanActivateNode_Parms), &Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** Returns true if this node can be activated right now. Has no side effects. */" },
		{ "DisplayName", "CanActivateNode" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Returns true if this node can be activated right now. Has no side effects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "K2_CanActivateNode", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics::PropPointers), sizeof(ComboGraphNodeAnimBase_eventK2_CanActivateNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(ComboGraphNodeAnimBase_eventK2_CanActivateNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics
	{
		struct ComboGraphNodeAnimBase_eventK2_GetAnimationAsset_Parms
		{
			UAnimSequenceBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventK2_GetAnimationAsset_Parms, ReturnValue), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** Returns the animation asset defined in editor for the node. Can be either a sequence or montage. */" },
		{ "DisplayName", "GetAnimationAsset" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Returns the animation asset defined in editor for the node. Can be either a sequence or montage." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "K2_GetAnimationAsset", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics::ComboGraphNodeAnimBase_eventK2_GetAnimationAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics::ComboGraphNodeAnimBase_eventK2_GetAnimationAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics
	{
		struct ComboGraphNodeAnimBase_eventK2_GetAnimationClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventK2_GetAnimationClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/**\n\x09 * Returns the type as text of underlying animation asset for the node. Can be either a sequence or montage.\n\x09 *\n\x09 * Effectively just calling AnimationAsset->GetClass();\n\x09 */" },
		{ "DisplayName", "GetAnimationClass" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Returns the type as text of underlying animation asset for the node. Can be either a sequence or montage.\n\nEffectively just calling AnimationAsset->GetClass();" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "K2_GetAnimationClass", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics::ComboGraphNodeAnimBase_eventK2_GetAnimationClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics::ComboGraphNodeAnimBase_eventK2_GetAnimationClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics
	{
		struct ComboGraphNodeAnimBase_eventK2_GetChildren_Parms
		{
			TArray<UComboGraphNodeAnimBase*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboGraphNodeAnimBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventK2_GetChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** Returns the list of children nodes for this node, that is direct descendant in the graph hierarchy. */" },
		{ "DisplayName", "GetChildren" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Returns the list of children nodes for this node, that is direct descendant in the graph hierarchy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "K2_GetChildren", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::ComboGraphNodeAnimBase_eventK2_GetChildren_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::ComboGraphNodeAnimBase_eventK2_GetChildren_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics
	{
		struct ComboGraphNodeAnimBase_eventK2_GetNodeTitle_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventK2_GetNodeTitle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** Returns title for the node as displayed in the editor (either name of the animation asset or if defined the NodeTitle property) */" },
		{ "DisplayName", "GetNodeTitle" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Returns title for the node as displayed in the editor (either name of the animation asset or if defined the NodeTitle property)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "K2_GetNodeTitle", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics::ComboGraphNodeAnimBase_eventK2_GetNodeTitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics::ComboGraphNodeAnimBase_eventK2_GetNodeTitle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics
	{
		struct ComboGraphNodeAnimBase_eventK2_GetOwningAbility_Parms
		{
			UGameplayAbility* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventK2_GetOwningAbility_Parms, ReturnValue), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** Returns the owning gameplay ability this node currently being played in. Should only return valid instance if the ability is currently active / running. */" },
		{ "DisplayName", "GetOwningAbility" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Returns the owning gameplay ability this node currently being played in. Should only return valid instance if the ability is currently active / running." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "K2_GetOwningAbility", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics::ComboGraphNodeAnimBase_eventK2_GetOwningAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics::ComboGraphNodeAnimBase_eventK2_GetOwningAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics
	{
		struct ComboGraphNodeAnimBase_eventK2_GetOwningGraph_Parms
		{
			UComboGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventK2_GetOwningGraph_Parms, ReturnValue), Z_Construct_UClass_UComboGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** Returns the ComboGraph UObject this node is part of. */" },
		{ "DisplayName", "GetOwningGraph" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Returns the ComboGraph UObject this node is part of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "K2_GetOwningGraph", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics::ComboGraphNodeAnimBase_eventK2_GetOwningGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics::ComboGraphNodeAnimBase_eventK2_GetOwningGraph_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics
	{
		struct ComboGraphNodeAnimBase_eventK2_GetOwningTask_Parms
		{
			UComboGraphAbilityTask_StartGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventK2_GetOwningTask_Parms, ReturnValue), Z_Construct_UClass_UComboGraphAbilityTask_StartGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** Returns the owning ability task this node currently being played in. Should only return valid instance if the task is currently active / running. */" },
		{ "DisplayName", "GetOwningTask" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Returns the owning ability task this node currently being played in. Should only return valid instance if the task is currently active / running." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "K2_GetOwningTask", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics::ComboGraphNodeAnimBase_eventK2_GetOwningTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics::ComboGraphNodeAnimBase_eventK2_GetOwningTask_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics
	{
		struct ComboGraphNodeAnimBase_eventK2_GetPreviousNode_Parms
		{
			UComboGraphNodeAnimBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventK2_GetPreviousNode_Parms, ReturnValue), Z_Construct_UClass_UComboGraphNodeAnimBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** Returns the direct parent node that this node was transitioned from. */" },
		{ "DisplayName", "GetPreviousNode" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Returns the direct parent node that this node was transitioned from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "K2_GetPreviousNode", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics::ComboGraphNodeAnimBase_eventK2_GetPreviousNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics::ComboGraphNodeAnimBase_eventK2_GetPreviousNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_OnActivated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_OnActivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph|Events" },
		{ "Comment", "/**\n\x09 * Event triggered when the node is activated and transitioned to in the owning graph.\n\x09 *\n\x09 * This only triggers if checks (CanActivateNode / Cost commit) have been successful and not preventing execution.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Event triggered when the node is activated and transitioned to in the owning graph.\n\nThis only triggers if checks (CanActivateNode / Cost commit) have been successful and not preventing execution." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_OnActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "OnActivated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_OnActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_OnActivated_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_OnActivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_OnActivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_OnDeactivated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_OnDeactivated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph|Events" },
		{ "Comment", "/** Event triggered when the node is ending and owning graph is transitioning to the next node (or ending the graph). */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Event triggered when the node is ending and owning graph is transitioning to the next node (or ending the graph)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_OnDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "OnDeactivated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_OnDeactivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_OnDeactivated_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_OnDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_OnDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventOnEventReceived_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventOnEventReceived_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 3848146833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph|Events" },
		{ "Comment", "/**\n\x09 * Event triggered when the actor owning the combo graph this node is part of is receiving a gameplay event this node listens to\n\x09 * (either with the EventTags property or if it is defining Gameplay Effects or Cues Containers).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Event triggered when the actor owning the combo graph this node is part of is receiving a gameplay event this node listens to\n(either with the EventTags property or if it is defining Gameplay Effects or Cues Containers)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "OnEventReceived", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics::PropPointers), sizeof(ComboGraphNodeAnimBase_eventOnEventReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics::PropPointers) < 2048);
	static_assert(sizeof(ComboGraphNodeAnimBase_eventOnEventReceived_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_OnInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_OnInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph|Events" },
		{ "Comment", "/** Event triggered when the node is activated and transitioned to in the owning graph, before CanActivateNode checks / cost commit and activation. */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Event triggered when the node is activated and transitioned to in the owning graph, before CanActivateNode checks / cost commit and activation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_OnInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "OnInitialized", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_OnInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_OnInitialized_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_OnInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_OnInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeAnimBase_eventOnMontagePlay_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph|Events" },
		{ "Comment", "/** Event triggered when the animation asset for this node is played as an anim montage in the owning ability task and gameplay ability. */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Event triggered when the animation asset for this node is played as an anim montage in the owning ability task and gameplay ability." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeAnimBase, nullptr, "OnMontagePlay", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay_Statics::PropPointers), sizeof(ComboGraphNodeAnimBase_eventOnMontagePlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(ComboGraphNodeAnimBase_eventOnMontagePlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphNodeAnimBase);
	UClass* Z_Construct_UClass_UComboGraphNodeAnimBase_NoRegister()
	{
		return UComboGraphNodeAnimBase::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphNodeAnimBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontagePlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MontagePlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootMotionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopAnimationWhenAbilityEnds_MetaData[];
#endif
		static void NewProp_bStopAnimationWhenAbilityEnds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAnimationWhenAbilityEnds;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DamageHandlingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageHandlingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DamageHandlingMethod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectsContainerMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectsContainerMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectsContainerMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EffectsContainerMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamagesContainerMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamagesContainerMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagesContainerMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DamagesContainerMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CostGameplayEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CostGameplayEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CuesContainerMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CuesContainerMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CuesContainerMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CuesContainerMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotifyStatesOverrides_ValueProp;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_NotifyStatesOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyStatesOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NotifyStatesOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComboGraphNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarActor, "GetAvatarActor" }, // 1532872146
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsCharacter, "GetAvatarAsCharacter" }, // 3345488582
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_GetAvatarAsPawn, "GetAvatarAsPawn" }, // 4162545313
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_GetMagnitudeForContainer, "GetMagnitudeForContainer" }, // 4250636761
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_GetOwnerActor, "GetOwnerActor" }, // 1249917316
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_CanActivateNode, "K2_CanActivateNode" }, // 1623306811
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationAsset, "K2_GetAnimationAsset" }, // 2269467499
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetAnimationClass, "K2_GetAnimationClass" }, // 4024661499
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetChildren, "K2_GetChildren" }, // 2781849586
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetNodeTitle, "K2_GetNodeTitle" }, // 4212006115
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningAbility, "K2_GetOwningAbility" }, // 2392485758
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningGraph, "K2_GetOwningGraph" }, // 927482439
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetOwningTask, "K2_GetOwningTask" }, // 776597332
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_K2_GetPreviousNode, "K2_GetPreviousNode" }, // 3916926646
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_OnActivated, "OnActivated" }, // 943550093
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_OnDeactivated, "OnDeactivated" }, // 417853015
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_OnEventReceived, "OnEventReceived" }, // 597602895
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_OnInitialized, "OnInitialized" }, // 2543102178
		{ &Z_Construct_UFunction_UComboGraphNodeAnimBase_OnMontagePlay, "OnMontagePlay" }, // 647197685
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Base Class for all Anim related Combo Graph nodes (montage or sequence)\n *\n *  Holds runtime properties for animation and effects / cues containers.\n */" },
		{ "IncludePath", "Graph/ComboGraphNodeAnimBase.h" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Base Class for all Anim related Combo Graph nodes (montage or sequence)\n\nHolds runtime properties for animation and effects / cues containers." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_MontagePlayRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Anim montage play rate */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Anim montage play rate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_MontagePlayRate = { "MontagePlayRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeAnimBase, MontagePlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_MontagePlayRate_MetaData), Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_MontagePlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_RootMotionScale_MetaData[] = {
		{ "Category", "Animation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Sets scale to apply to root motion translation on the animating character */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Sets scale to apply to root motion translation on the animating character" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_RootMotionScale = { "RootMotionScale", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeAnimBase, RootMotionScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_RootMotionScale_MetaData), Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_RootMotionScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_bStopAnimationWhenAbilityEnds_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\n\x09 *\n\x09 * This value is passed down to the ability task playing the montage, and corresponds to bStopWhenAbilityEnds parameter value of the PlayMontageAndWait ability task.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "If true, this montage will be aborted if the ability ends normally. It is always stopped when the ability is explicitly cancelled.\n\nThis value is passed down to the ability task playing the montage, and corresponds to bStopWhenAbilityEnds parameter value of the PlayMontageAndWait ability task." },
	};
#endif
	void Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_bStopAnimationWhenAbilityEnds_SetBit(void* Obj)
	{
		((UComboGraphNodeAnimBase*)Obj)->bStopAnimationWhenAbilityEnds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_bStopAnimationWhenAbilityEnds = { "bStopAnimationWhenAbilityEnds", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComboGraphNodeAnimBase), &Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_bStopAnimationWhenAbilityEnds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_bStopAnimationWhenAbilityEnds_MetaData), Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_bStopAnimationWhenAbilityEnds_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamageHandlingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamageHandlingMethod_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "/**\n\x09 * Specify which method to use to handle Effects Containers\n\x09 *\n\x09 * When using Gameplay Abilities, you should use `AbilitySystem` method and go through Gameplay Effects to modify your Attributes.\n\x09 *\n\x09 * Non Gameplay Abilities user can fallback to Unreal's Damage System.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Specify which method to use to handle Effects Containers\n\nWhen using Gameplay Abilities, you should use `AbilitySystem` method and go through Gameplay Effects to modify your Attributes.\n\nNon Gameplay Abilities user can fallback to Unreal's Damage System." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamageHandlingMethod = { "DamageHandlingMethod", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeAnimBase, DamageHandlingMethod), Z_Construct_UEnum_ComboGraph_EComboGraphDamageHandlingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamageHandlingMethod_MetaData), Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamageHandlingMethod_MetaData) }; // 1458300584
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EffectsContainerMap_ValueProp = { "EffectsContainerMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FComboGraphGameplayEffectContainer, METADATA_PARAMS(0, nullptr) }; // 688922094
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EffectsContainerMap_Key_KeyProp = { "EffectsContainerMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EffectsContainerMap_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "/** Map of gameplay tags we're listening to gameplay effect containers */" },
		{ "EditCondition", "DamageHandlingMethod == EComboGraphDamageHandlingMethod::AbilitySystem" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Map of gameplay tags we're listening to gameplay effect containers" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EffectsContainerMap = { "EffectsContainerMap", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeAnimBase, EffectsContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EffectsContainerMap_MetaData), Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EffectsContainerMap_MetaData) }; // 2083603574 688922094
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamagesContainerMap_ValueProp = { "DamagesContainerMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FComboGraphDamageSystemContainer, METADATA_PARAMS(0, nullptr) }; // 2009276912
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamagesContainerMap_Key_KeyProp = { "DamagesContainerMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamagesContainerMap_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "/** Map of gameplay tags we're listening to damage containers */" },
		{ "EditCondition", "DamageHandlingMethod == EComboGraphDamageHandlingMethod::DamageSystem" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Map of gameplay tags we're listening to damage containers" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamagesContainerMap = { "DamagesContainerMap", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeAnimBase, DamagesContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamagesContainerMap_MetaData), Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamagesContainerMap_MetaData) }; // 2083603574 2009276912
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CostGameplayEffect_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "/** This GameplayEffect represents the cost (mana, stamina, etc) of the combo node. It will be applied when the node is committed. */" },
		{ "EditCondition", "DamageHandlingMethod == EComboGraphDamageHandlingMethod::AbilitySystem" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "This GameplayEffect represents the cost (mana, stamina, etc) of the combo node. It will be applied when the node is committed." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CostGameplayEffect = { "CostGameplayEffect", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeAnimBase, CostGameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CostGameplayEffect_MetaData), Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CostGameplayEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EventTags_MetaData[] = {
		{ "Category", "Gameplay Events" },
		{ "Comment", "/**\n\x09 * This tag container can be used to define Gameplay Tags to listen to with the underlying \"Play Montage and Wait For Event\" task.\n\x09 *\n\x09 * While the animation is playing, if a gameplay event with one of those tags is sent to the owning actor, the \"EventReceived\" delegate\n\x09 * for the \"StartComboGraph\" task will be called with the Gameplay Tag for the event and Gameplay Event Data structure.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "This tag container can be used to define Gameplay Tags to listen to with the underlying \"Play Montage and Wait For Event\" task.\n\nWhile the animation is playing, if a gameplay event with one of those tags is sent to the owning actor, the \"EventReceived\" delegate\nfor the \"StartComboGraph\" task will be called with the Gameplay Tag for the event and Gameplay Event Data structure." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeAnimBase, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EventTags_MetaData), Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EventTags_MetaData) }; // 405371792
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CuesContainerMap_ValueProp = { "CuesContainerMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FComboGraphCueContainer, METADATA_PARAMS(0, nullptr) }; // 3144455871
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CuesContainerMap_Key_KeyProp = { "CuesContainerMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CuesContainerMap_MetaData[] = {
		{ "Category", "Gameplay Cues (Hit Impacts)" },
		{ "Comment", "/** Map of gameplay tags we're listening to to gameplay cues containers */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Map of gameplay tags we're listening to to gameplay cues containers" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CuesContainerMap = { "CuesContainerMap", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeAnimBase, CuesContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CuesContainerMap_MetaData), Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CuesContainerMap_MetaData) }; // 2083603574 3144455871
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_NotifyStatesOverrides_ValueProp = { "NotifyStatesOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup, METADATA_PARAMS(0, nullptr) }; // 3161310068
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_NotifyStatesOverrides_Key_KeyProp = { "NotifyStatesOverrides_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_NotifyStatesOverrides_MetaData[] = {
		{ "Category", "Auto Setup" },
		{ "Comment", "/**\n\x09 * Notify states overrides for Auto Setup.\n\x09 *\n\x09 * Before going through play montage task, adds all items from this map to plugin settings map (if any keys are in both, the value from the node map wins).\n\x09 *\n\x09 * If animation asset (montage or sequence) being played is using one of the AnimNotifyState, the auto setup for this notify is ignored (notifies in anim assets win).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeAnimBase.h" },
		{ "ToolTip", "Notify states overrides for Auto Setup.\n\nBefore going through play montage task, adds all items from this map to plugin settings map (if any keys are in both, the value from the node map wins).\n\nIf animation asset (montage or sequence) being played is using one of the AnimNotifyState, the auto setup for this notify is ignored (notifies in anim assets win)." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_NotifyStatesOverrides = { "NotifyStatesOverrides", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeAnimBase, NotifyStatesOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_NotifyStatesOverrides_MetaData), Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_NotifyStatesOverrides_MetaData) }; // 3161310068
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_MontagePlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_RootMotionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_bStopAnimationWhenAbilityEnds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamageHandlingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamageHandlingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EffectsContainerMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EffectsContainerMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EffectsContainerMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamagesContainerMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamagesContainerMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_DamagesContainerMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CostGameplayEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_EventTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CuesContainerMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CuesContainerMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_CuesContainerMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_NotifyStatesOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_NotifyStatesOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::NewProp_NotifyStatesOverrides,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UComboGraphNodeAnimBase, IGameplayTaskOwnerInterface), false },  // 3247693928
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphNodeAnimBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::ClassParams = {
		&UComboGraphNodeAnimBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphNodeAnimBase()
	{
		if (!Z_Registration_Info_UClass_UComboGraphNodeAnimBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphNodeAnimBase.OuterSingleton, Z_Construct_UClass_UComboGraphNodeAnimBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphNodeAnimBase.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphNodeAnimBase>()
	{
		return UComboGraphNodeAnimBase::StaticClass();
	}
	UComboGraphNodeAnimBase::UComboGraphNodeAnimBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphNodeAnimBase);
	UComboGraphNodeAnimBase::~UComboGraphNodeAnimBase() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_Statics::EnumInfo[] = {
		{ EComboGraphAsyncHandlingMethod_StaticEnum, TEXT("EComboGraphAsyncHandlingMethod"), &Z_Registration_Info_UEnum_EComboGraphAsyncHandlingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3485367038U) },
		{ EComboGraphDamageHandlingMethod_StaticEnum, TEXT("EComboGraphDamageHandlingMethod"), &Z_Registration_Info_UEnum_EComboGraphDamageHandlingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1458300584U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_Statics::ScriptStructInfo[] = {
		{ FComboGraphCueContainerDefinition::StaticStruct, Z_Construct_UScriptStruct_FComboGraphCueContainerDefinition_Statics::NewStructOps, TEXT("ComboGraphCueContainerDefinition"), &Z_Registration_Info_UScriptStruct_ComboGraphCueContainerDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphCueContainerDefinition), 872798746U) },
		{ FComboGraphCueContainer::StaticStruct, Z_Construct_UScriptStruct_FComboGraphCueContainer_Statics::NewStructOps, TEXT("ComboGraphCueContainer"), &Z_Registration_Info_UScriptStruct_ComboGraphCueContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphCueContainer), 3144455871U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphNodeAnimBase, UComboGraphNodeAnimBase::StaticClass, TEXT("UComboGraphNodeAnimBase"), &Z_Registration_Info_UClass_UComboGraphNodeAnimBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphNodeAnimBase), 3051843739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_1612374372(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeAnimBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
