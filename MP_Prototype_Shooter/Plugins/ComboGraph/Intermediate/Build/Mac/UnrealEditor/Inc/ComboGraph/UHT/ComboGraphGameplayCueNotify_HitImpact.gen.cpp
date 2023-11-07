// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Abilities/Cues/ComboGraphGameplayCueNotify_HitImpact.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphGameplayCueNotify_HitImpact() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Static();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	void UComboGraphGameplayCueNotify_HitImpact::StaticRegisterNativesUComboGraphGameplayCueNotify_HitImpact()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphGameplayCueNotify_HitImpact);
	UClass* Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_NoRegister()
	{
		return UComboGraphGameplayCueNotify_HitImpact::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAsyncLoadAllAtOnce_MetaData[];
#endif
		static void NewProp_bAsyncLoadAllAtOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsyncLoadAllAtOnce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSpawnScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NiagaraSpawnScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CascadeSpawnScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CascadeSpawnScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencySettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConcurrencySettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayCueNotify_Static,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GameplayCue" },
		{ "Comment", "/**\n * Non instanced GameplayCueNotify for spawning particle and sound FX.\n *\n * Slightly modified version of UGameplayCueNotify_HitImpact to handle spawning of particle / sound FX from passed in Effect Context in Cue Paramaters.\n *\n * Checks Objects to test if it is:\n *\n * - A Niagara Emitter template, and will spawn emitter at location\n * - A Cascade Particle system, and will spawn system at location\n * - A Sound Base (Cue, Wave, ...), and will spawn sound at location\n *\n * Cue parameters should only contain the soft object paths to the actual asset that this cue handler will async load if necessary.\n */" },
		{ "HideCategories", "Replication" },
		{ "IncludePath", "Abilities/Cues/ComboGraphGameplayCueNotify_HitImpact.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Cues/ComboGraphGameplayCueNotify_HitImpact.h" },
		{ "ToolTip", "Non instanced GameplayCueNotify for spawning particle and sound FX.\n\nSlightly modified version of UGameplayCueNotify_HitImpact to handle spawning of particle / sound FX from passed in Effect Context in Cue Paramaters.\n\nChecks Objects to test if it is:\n\n- A Niagara Emitter template, and will spawn emitter at location\n- A Cascade Particle system, and will spawn system at location\n- A Sound Base (Cue, Wave, ...), and will spawn sound at location\n\nCue parameters should only contain the soft object paths to the actual asset that this cue handler will async load if necessary." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_bAsyncLoadAllAtOnce_MetaData[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/**\n\x09 * Whether to do a single async load request for all assets that are passed down through gameplay cue parameters effect context.\n\x09 *\n\x09 * Set it to true to issue a single async load resolved when all the assets are loaded in memory.\n\x09 *\n\x09 * Set it to false to load all assets in parallel issuing multiple requests and resolved individually.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Abilities/Cues/ComboGraphGameplayCueNotify_HitImpact.h" },
		{ "ToolTip", "Whether to do a single async load request for all assets that are passed down through gameplay cue parameters effect context.\n\nSet it to true to issue a single async load resolved when all the assets are loaded in memory.\n\nSet it to false to load all assets in parallel issuing multiple requests and resolved individually." },
	};
#endif
	void Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_bAsyncLoadAllAtOnce_SetBit(void* Obj)
	{
		((UComboGraphGameplayCueNotify_HitImpact*)Obj)->bAsyncLoadAllAtOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_bAsyncLoadAllAtOnce = { "bAsyncLoadAllAtOnce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComboGraphGameplayCueNotify_HitImpact), &Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_bAsyncLoadAllAtOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_bAsyncLoadAllAtOnce_MetaData), Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_bAsyncLoadAllAtOnce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_NiagaraSpawnScale_MetaData[] = {
		{ "Category", "Combo Graph | Niagara Settings" },
		{ "Comment", "/** For passed down assets that are Niagara Systems, this is the scale vector to use. */" },
		{ "ModuleRelativePath", "Public/Abilities/Cues/ComboGraphGameplayCueNotify_HitImpact.h" },
		{ "ToolTip", "For passed down assets that are Niagara Systems, this is the scale vector to use." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_NiagaraSpawnScale = { "NiagaraSpawnScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphGameplayCueNotify_HitImpact, NiagaraSpawnScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_NiagaraSpawnScale_MetaData), Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_NiagaraSpawnScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_CascadeSpawnScale_MetaData[] = {
		{ "Category", "Combo Graph | Cascade Settings" },
		{ "Comment", "/** For passed down assets that are Cascade Emitters, this is the scale vector to use. */" },
		{ "ModuleRelativePath", "Public/Abilities/Cues/ComboGraphGameplayCueNotify_HitImpact.h" },
		{ "ToolTip", "For passed down assets that are Cascade Emitters, this is the scale vector to use." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_CascadeSpawnScale = { "CascadeSpawnScale", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphGameplayCueNotify_HitImpact, CascadeSpawnScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_CascadeSpawnScale_MetaData), Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_CascadeSpawnScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "Category", "Combo Graph | Sound Settings" },
		{ "Comment", "/** A linear scalar multiplied with the volume, in order to make the sound louder or softer. */" },
		{ "ModuleRelativePath", "Public/Abilities/Cues/ComboGraphGameplayCueNotify_HitImpact.h" },
		{ "ToolTip", "A linear scalar multiplied with the volume, in order to make the sound louder or softer." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphGameplayCueNotify_HitImpact, VolumeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_VolumeMultiplier_MetaData), Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_VolumeMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "Category", "Combo Graph | Sound Settings" },
		{ "Comment", "/** PitchMultiplier - A linear scalar multiplied with the pitch. */" },
		{ "ModuleRelativePath", "Public/Abilities/Cues/ComboGraphGameplayCueNotify_HitImpact.h" },
		{ "ToolTip", "PitchMultiplier - A linear scalar multiplied with the pitch." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphGameplayCueNotify_HitImpact, PitchMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_PitchMultiplier_MetaData), Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_PitchMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Combo Graph | Sound Settings" },
		{ "Comment", "/** How far in to the sound to begin playback at */" },
		{ "ModuleRelativePath", "Public/Abilities/Cues/ComboGraphGameplayCueNotify_HitImpact.h" },
		{ "ToolTip", "How far in to the sound to begin playback at" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphGameplayCueNotify_HitImpact, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_StartTime_MetaData), Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_StartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Combo Graph | Sound Settings" },
		{ "Comment", "/** Override attenuation settings package to play sound with */" },
		{ "ModuleRelativePath", "Public/Abilities/Cues/ComboGraphGameplayCueNotify_HitImpact.h" },
		{ "ToolTip", "Override attenuation settings package to play sound with" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphGameplayCueNotify_HitImpact, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_AttenuationSettings_MetaData), Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_AttenuationSettings_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_ConcurrencySettings_MetaData[] = {
		{ "Category", "Combo Graph | Sound Settings" },
		{ "Comment", "/**\n\x09 * Override concurrency settings package to play sound with\n\x09 *\n\x09 * (The actor used as the \"owner\" for concurrency settings purposes will be the target of the gameplay cue. Allows PlaySound calls to do a concurrency limit per owner.)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Abilities/Cues/ComboGraphGameplayCueNotify_HitImpact.h" },
		{ "ToolTip", "Override concurrency settings package to play sound with\n\n(The actor used as the \"owner\" for concurrency settings purposes will be the target of the gameplay cue. Allows PlaySound calls to do a concurrency limit per owner.)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_ConcurrencySettings = { "ConcurrencySettings", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphGameplayCueNotify_HitImpact, ConcurrencySettings), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_ConcurrencySettings_MetaData), Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_ConcurrencySettings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_bAsyncLoadAllAtOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_NiagaraSpawnScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_CascadeSpawnScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::NewProp_ConcurrencySettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphGameplayCueNotify_HitImpact>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::ClassParams = {
		&UComboGraphGameplayCueNotify_HitImpact::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact()
	{
		if (!Z_Registration_Info_UClass_UComboGraphGameplayCueNotify_HitImpact.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphGameplayCueNotify_HitImpact.OuterSingleton, Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphGameplayCueNotify_HitImpact.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphGameplayCueNotify_HitImpact>()
	{
		return UComboGraphGameplayCueNotify_HitImpact::StaticClass();
	}
	UComboGraphGameplayCueNotify_HitImpact::UComboGraphGameplayCueNotify_HitImpact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphGameplayCueNotify_HitImpact);
	UComboGraphGameplayCueNotify_HitImpact::~UComboGraphGameplayCueNotify_HitImpact() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Cues_ComboGraphGameplayCueNotify_HitImpact_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Cues_ComboGraphGameplayCueNotify_HitImpact_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphGameplayCueNotify_HitImpact, UComboGraphGameplayCueNotify_HitImpact::StaticClass, TEXT("UComboGraphGameplayCueNotify_HitImpact"), &Z_Registration_Info_UClass_UComboGraphGameplayCueNotify_HitImpact, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphGameplayCueNotify_HitImpact), 4071060166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Cues_ComboGraphGameplayCueNotify_HitImpact_h_3091168860(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Cues_ComboGraphGameplayCueNotify_HitImpact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_Cues_ComboGraphGameplayCueNotify_HitImpact_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
