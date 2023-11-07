// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h"
#include "GASCompanion/Public/GameFeatures/GSCGameFeatureTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCGameFeatureAction_AddAbilities() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilitySet_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_NoRegister();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry;
class UScriptStruct* FGSCGameFeatureAbilitiesEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCGameFeatureAbilitiesEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCGameFeatureAbilitiesEntry>()
{
	return FGSCGameFeatureAbilitiesEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttributes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedEffects;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GrantedAbilitySets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilitySets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilitySets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data holder for a list of Abilities / Attributes / Effects to grant to actors of the specified class from a Game Feature Action */" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "Data holder for a list of Abilities / Attributes / Effects to grant to actors of the specified class from a Game Feature Action" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCGameFeatureAbilitiesEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** The base actor class to add to */" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "The base actor class to add to" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameFeatureAbilitiesEntry, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass_MetaData), Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping, METADATA_PARAMS(0, nullptr) }; // 910207942
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** List of abilities to grant to actors of the specified class */" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "List of abilities to grant to actors of the specified class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameFeatureAbilitiesEntry, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_MetaData), Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_MetaData) }; // 910207942
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping, METADATA_PARAMS(0, nullptr) }; // 4022225833
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** List of attribute sets to grant to actors of the specified class */" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "List of attribute sets to grant to actors of the specified class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameFeatureAbilitiesEntry, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_MetaData), Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_MetaData) }; // 4022225833
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedEffects_Inner = { "GrantedEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping, METADATA_PARAMS(0, nullptr) }; // 3628320800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedEffects_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** List of gameplay effects to grant to actors of the specified class */" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "List of gameplay effects to grant to actors of the specified class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedEffects = { "GrantedEffects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameFeatureAbilitiesEntry, GrantedEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedEffects_MetaData), Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedEffects_MetaData) }; // 3628320800
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_Inner = { "GrantedAbilitySets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGSCAbilitySet_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_MetaData[] = {
		{ "Category", "GAS Companion|Abilities" },
		{ "Comment", "/** List of Gameplay Ability Sets to actors of the specified class */" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "List of Gameplay Ability Sets to actors of the specified class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets = { "GrantedAbilitySets", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCGameFeatureAbilitiesEntry, GrantedAbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_MetaData), Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewProp_GrantedAbilitySets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCGameFeatureAbilitiesEntry",
		Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::PropPointers),
		sizeof(FGSCGameFeatureAbilitiesEntry),
		alignof(FGSCGameFeatureAbilitiesEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry.InnerSingleton, Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry.InnerSingleton;
	}
	void UGSCGameFeatureAction_AddAbilities::StaticRegisterNativesUGSCGameFeatureAction_AddAbilities()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCGameFeatureAction_AddAbilities);
	UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_NoRegister()
	{
		return UGSCGameFeatureAction_AddAbilities::StaticClass();
	}
	struct Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitiesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitiesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitiesList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameFeatureAction responsible for granting abilities (and attributes, effects or ability sets) to actors of a specified type.\n */" },
		{ "DisplayName", "Add Abilities (GAS Companion)" },
		{ "IncludePath", "GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ToolTip", "GameFeatureAction responsible for granting abilities (and attributes, effects or ability sets) to actors of a specified type." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_Inner = { "AbilitiesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry, METADATA_PARAMS(0, nullptr) }; // 3523885165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** List of Ability to grant to actors of the specified class */" },
		{ "ModuleRelativePath", "Public/GameFeatures/Actions/GSCGameFeatureAction_AddAbilities.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "TitleProperty", "ActorClass" },
		{ "ToolTip", "List of Ability to grant to actors of the specified class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList = { "AbilitiesList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCGameFeatureAction_AddAbilities, AbilitiesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_MetaData), Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_MetaData) }; // 3523885165
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::NewProp_AbilitiesList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCGameFeatureAction_AddAbilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::ClassParams = {
		&UGSCGameFeatureAction_AddAbilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities()
	{
		if (!Z_Registration_Info_UClass_UGSCGameFeatureAction_AddAbilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCGameFeatureAction_AddAbilities.OuterSingleton, Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCGameFeatureAction_AddAbilities.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCGameFeatureAction_AddAbilities>()
	{
		return UGSCGameFeatureAction_AddAbilities::StaticClass();
	}
	UGSCGameFeatureAction_AddAbilities::UGSCGameFeatureAction_AddAbilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCGameFeatureAction_AddAbilities);
	UGSCGameFeatureAction_AddAbilities::~UGSCGameFeatureAction_AddAbilities() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics::ScriptStructInfo[] = {
		{ FGSCGameFeatureAbilitiesEntry::StaticStruct, Z_Construct_UScriptStruct_FGSCGameFeatureAbilitiesEntry_Statics::NewStructOps, TEXT("GSCGameFeatureAbilitiesEntry"), &Z_Registration_Info_UScriptStruct_GSCGameFeatureAbilitiesEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCGameFeatureAbilitiesEntry), 3523885165U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCGameFeatureAction_AddAbilities, UGSCGameFeatureAction_AddAbilities::StaticClass, TEXT("UGSCGameFeatureAction_AddAbilities"), &Z_Registration_Info_UClass_UGSCGameFeatureAction_AddAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCGameFeatureAction_AddAbilities), 4002340760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_1409069378(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_GameFeatures_Actions_GSCGameFeatureAction_AddAbilities_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
