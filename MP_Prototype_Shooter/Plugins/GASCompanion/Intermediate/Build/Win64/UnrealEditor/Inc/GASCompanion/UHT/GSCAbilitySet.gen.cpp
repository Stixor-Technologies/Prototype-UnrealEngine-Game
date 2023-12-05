// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Abilities/GSCAbilitySet.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"
#include "GASCompanion/Public/GameFeatures/GSCGameFeatureTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAbilitySet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilitySet();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilitySet_NoRegister();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCAbilitySetHandle();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping();
	GASCOMPANION_API UScriptStruct* Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GSCAbilitySetHandle;
class UScriptStruct* FGSCAbilitySetHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GSCAbilitySetHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GSCAbilitySetHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSCAbilitySetHandle, (UObject*)Z_Construct_UPackage__Script_GASCompanion(), TEXT("GSCAbilitySetHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GSCAbilitySetHandle.OuterSingleton;
}
template<> GASCOMPANION_API UScriptStruct* StaticStruct<FGSCAbilitySetHandle>()
{
	return FGSCAbilitySetHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectHandles;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySetPathName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbilitySetPathName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data used to store handles to what has been granted by the ability set.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data used to store handles to what has been granted by the ability set." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSCAbilitySetHandle>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Abilities_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles to the granted abilities */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles to the granted abilities" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAbilitySetHandle, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Abilities_MetaData), Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Abilities_MetaData) }; // 839298412
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_EffectHandles_Inner = { "EffectHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 179499981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_EffectHandles_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles to the granted gameplay effects. */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles to the granted gameplay effects." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_EffectHandles = { "EffectHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAbilitySetHandle, EffectHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_EffectHandles_MetaData), Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_EffectHandles_MetaData) }; // 179499981
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Attributes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointers to the granted attribute sets */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointers to the granted attribute sets" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAbilitySetHandle, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Attributes_MetaData), Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Attributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_OwnedTags_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Copy of the tag container that was used for OwnedTags */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Copy of the tag container that was used for OwnedTags" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_OwnedTags = { "OwnedTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAbilitySetHandle, OwnedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_OwnedTags_MetaData), Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_OwnedTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_AbilitySetPathName_MetaData[] = {
		{ "Category", "Ability Sets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DisplayName of the Ability Set represented by this handle (stored here for debug reason) */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DisplayName of the Ability Set represented by this handle (stored here for debug reason)" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_AbilitySetPathName = { "AbilitySetPathName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGSCAbilitySetHandle, AbilitySetPathName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_AbilitySetPathName_MetaData), Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_AbilitySetPathName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Abilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Abilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_EffectHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_EffectHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_Attributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_OwnedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewProp_AbilitySetPathName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
		nullptr,
		&NewStructOps,
		"GSCAbilitySetHandle",
		Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::PropPointers),
		sizeof(FGSCAbilitySetHandle),
		alignof(FGSCAbilitySetHandle),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGSCAbilitySetHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_GSCAbilitySetHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GSCAbilitySetHandle.InnerSingleton, Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GSCAbilitySetHandle.InnerSingleton;
	}
	void UGSCAbilitySet::StaticRegisterNativesUGSCAbilitySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAbilitySet);
	UClass* Z_Construct_UClass_UGSCAbilitySet_NoRegister()
	{
		return UGSCAbilitySet::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAbilitySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnedTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAbilitySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * DataAsset that can be used to define and give to an AbilitySystemComponent a set of:\n *\n * - Abilities, with optional enhanced input binding\n * - Attribute Sets\n * - Gameplay Effects\n * - Owned Tags\n */" },
#endif
		{ "IncludePath", "Abilities/GSCAbilitySet.h" },
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataAsset that can be used to define and give to an AbilitySystemComponent a set of:\n\n- Abilities, with optional enhanced input binding\n- Attribute Sets\n- Gameplay Effects\n- Owned Tags" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSCGameFeatureAbilityMapping, METADATA_PARAMS(0, nullptr) }; // 3276323548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of Gameplay Abilities to grant when the Ability System Component is initialized */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySet.h" },
		{ "TitleProperty", "AbilityType" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Gameplay Abilities to grant when the Ability System Component is initialized" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySet, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAbilities_MetaData), Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAbilities_MetaData) }; // 3276323548
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAttributes_Inner = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSCGameFeatureAttributeSetMapping, METADATA_PARAMS(0, nullptr) }; // 78919540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAttributes_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of Attribute Sets to grant when the Ability System Component is initialized, with optional initialization data */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySet.h" },
		{ "TitleProperty", "AttributeSet" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Attribute Sets to grant when the Ability System Component is initialized, with optional initialization data" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAttributes = { "GrantedAttributes", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySet, GrantedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAttributes_MetaData), Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAttributes_MetaData) }; // 78919540
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedEffects_Inner = { "GrantedEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGSCGameFeatureGameplayEffectMapping, METADATA_PARAMS(0, nullptr) }; // 4121826287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedEffects_MetaData[] = {
		{ "Category", "Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of GameplayEffects to apply when the Ability System Component is initialized (typically on begin play) */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySet.h" },
		{ "TitleProperty", "EffectType" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of GameplayEffects to apply when the Ability System Component is initialized (typically on begin play)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedEffects = { "GrantedEffects", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySet, GrantedEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedEffects_MetaData), Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedEffects_MetaData) }; // 4121826287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_OwnedTags_MetaData[] = {
		{ "Category", "Owned Gameplay Tags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** An optional set of Gameplay Tags to grant to the ASC when the Ability Set is applied */" },
#endif
		{ "ModuleRelativePath", "Public/Abilities/GSCAbilitySet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An optional set of Gameplay Tags to grant to the ASC when the Ability Set is applied" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_OwnedTags = { "OwnedTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilitySet, OwnedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_OwnedTags_MetaData), Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_OwnedTags_MetaData) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCAbilitySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_GrantedEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilitySet_Statics::NewProp_OwnedTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAbilitySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAbilitySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAbilitySet_Statics::ClassParams = {
		&UGSCAbilitySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCAbilitySet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySet_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCAbilitySet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilitySet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCAbilitySet()
	{
		if (!Z_Registration_Info_UClass_UGSCAbilitySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAbilitySet.OuterSingleton, Z_Construct_UClass_UGSCAbilitySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCAbilitySet.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCAbilitySet>()
	{
		return UGSCAbilitySet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAbilitySet);
	UGSCAbilitySet::~UGSCAbilitySet() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySet_h_Statics::ScriptStructInfo[] = {
		{ FGSCAbilitySetHandle::StaticStruct, Z_Construct_UScriptStruct_FGSCAbilitySetHandle_Statics::NewStructOps, TEXT("GSCAbilitySetHandle"), &Z_Registration_Info_UScriptStruct_GSCAbilitySetHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGSCAbilitySetHandle), 1439990879U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAbilitySet, UGSCAbilitySet::StaticClass, TEXT("UGSCAbilitySet"), &Z_Registration_Info_UClass_UGSCAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAbilitySet), 159354666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySet_h_3511394125(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Abilities_GSCAbilitySet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
