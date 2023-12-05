// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/ModularGameplayActors/GSCModularPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCModularPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCModularPawn();
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCModularPawn_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilitySystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void AGSCModularPawn::StaticRegisterNativesAGSCModularPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSCModularPawn);
	UClass* Z_Construct_UClass_AGSCModularPawn_NoRegister()
	{
		return AGSCModularPawn::StaticClass();
	}
	struct Z_Construct_UClass_AGSCModularPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReplicationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReplicationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilitySystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGSCModularPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSCModularPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimal class that supports extension by game feature plugins, direct child of APawn */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ModularGameplayActors/GSCModularPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSCModularPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimal class that supports extension by game feature plugins, direct child of APawn" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGSCModularPawn_Statics::NewProp_ReplicationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSCModularPawn_Statics::NewProp_ReplicationMode_MetaData[] = {
		{ "Category", "GAS Companion|Ability System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Ability System Replication Mode: How gameplay effects will be replicated to clients\n\x09*\n\x09* - Full: Replicate full gameplay info to all. Every GameplayEffect is replicated to every client.\n\x09* (Recommended for Single Player games)\n\x09* - Mixed: Only replicate minimal gameplay effect info to simulated proxies but full info to owners and autonomous proxies.\n\x09* GameplayEffects are only replicated to the owning client. Only GameplayTags and GameplayCues are replicated to everyone.\n\x09* (Recommended for Multiplayer on Player controlled Actors)\n\x09* - Minimal: Only replicate minimal gameplay effect info. Note: this does not work for Owned AbilitySystemComponents (Use Mixed instead).\n\x09* GameplayEffects are never replicated to anyone. Only GameplayTags and GameplayCues are replicated to everyone.\n\x09* (Recommended for Multiplayer on AI controlled Actors)\n\x09*\n\x09* @See https://github.com/tranek/GASDocumentation#concepts-asc-rm for more information\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSCModularPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability System Replication Mode: How gameplay effects will be replicated to clients\n\n- Full: Replicate full gameplay info to all. Every GameplayEffect is replicated to every client.\n(Recommended for Single Player games)\n- Mixed: Only replicate minimal gameplay effect info to simulated proxies but full info to owners and autonomous proxies.\nGameplayEffects are only replicated to the owning client. Only GameplayTags and GameplayCues are replicated to everyone.\n(Recommended for Multiplayer on Player controlled Actors)\n- Minimal: Only replicate minimal gameplay effect info. Note: this does not work for Owned AbilitySystemComponents (Use Mixed instead).\nGameplayEffects are never replicated to anyone. Only GameplayTags and GameplayCues are replicated to everyone.\n(Recommended for Multiplayer on AI controlled Actors)\n\n@See https://github.com/tranek/GASDocumentation#concepts-asc-rm for more information" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGSCModularPawn_Statics::NewProp_ReplicationMode = { "ReplicationMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGSCModularPawn, ReplicationMode), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectReplicationMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularPawn_Statics::NewProp_ReplicationMode_MetaData), Z_Construct_UClass_AGSCModularPawn_Statics::NewProp_ReplicationMode_MetaData) }; // 3129641110
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSCModularPawn_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSCModularPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGSCModularPawn_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGSCModularPawn, AbilitySystemComponent), Z_Construct_UClass_UGSCAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularPawn_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AGSCModularPawn_Statics::NewProp_AbilitySystemComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGSCModularPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSCModularPawn_Statics::NewProp_ReplicationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSCModularPawn_Statics::NewProp_ReplicationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGSCModularPawn_Statics::NewProp_AbilitySystemComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGSCModularPawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGSCModularPawn, IAbilitySystemInterface), false },  // 3195502011
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(AGSCModularPawn, IGameplayTagAssetInterface), false },  // 3291755243
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularPawn_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGSCModularPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSCModularPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSCModularPawn_Statics::ClassParams = {
		&AGSCModularPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGSCModularPawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularPawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSCModularPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGSCModularPawn()
	{
		if (!Z_Registration_Info_UClass_AGSCModularPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSCModularPawn.OuterSingleton, Z_Construct_UClass_AGSCModularPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGSCModularPawn.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<AGSCModularPawn>()
	{
		return AGSCModularPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGSCModularPawn);
	AGSCModularPawn::~AGSCModularPawn() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGSCModularPawn, AGSCModularPawn::StaticClass, TEXT("AGSCModularPawn"), &Z_Registration_Info_UClass_AGSCModularPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSCModularPawn), 3600000052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPawn_h_2730643703(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
