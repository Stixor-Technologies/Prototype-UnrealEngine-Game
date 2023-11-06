// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/ModularGameplayActors/GSCModularPlayerStateCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCModularPlayerStateCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCModularPlayerStateCharacter();
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCModularPlayerStateCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void AGSCModularPlayerStateCharacter::StaticRegisterNativesAGSCModularPlayerStateCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSCModularPlayerStateCharacter);
	UClass* Z_Construct_UClass_AGSCModularPlayerStateCharacter_NoRegister()
	{
		return AGSCModularPlayerStateCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGSCModularPlayerStateCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGSCModularPlayerStateCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularPlayerStateCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSCModularPlayerStateCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Minimal class that supports extension by game feature plugins.\n *\n * Intended to be used for ACharacters using AbilitySystemComponent living on PlayerState.\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ModularGameplayActors/GSCModularPlayerStateCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSCModularPlayerStateCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Minimal class that supports extension by game feature plugins.\n\nIntended to be used for ACharacters using AbilitySystemComponent living on PlayerState." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGSCModularPlayerStateCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AGSCModularPlayerStateCharacter, IAbilitySystemInterface), false },  // 3195502011
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(AGSCModularPlayerStateCharacter, IGameplayTagAssetInterface), false },  // 3291755243
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularPlayerStateCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGSCModularPlayerStateCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSCModularPlayerStateCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSCModularPlayerStateCharacter_Statics::ClassParams = {
		&AGSCModularPlayerStateCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularPlayerStateCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSCModularPlayerStateCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGSCModularPlayerStateCharacter()
	{
		if (!Z_Registration_Info_UClass_AGSCModularPlayerStateCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSCModularPlayerStateCharacter.OuterSingleton, Z_Construct_UClass_AGSCModularPlayerStateCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGSCModularPlayerStateCharacter.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<AGSCModularPlayerStateCharacter>()
	{
		return AGSCModularPlayerStateCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGSCModularPlayerStateCharacter);
	AGSCModularPlayerStateCharacter::~AGSCModularPlayerStateCharacter() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPlayerStateCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPlayerStateCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGSCModularPlayerStateCharacter, AGSCModularPlayerStateCharacter::StaticClass, TEXT("AGSCModularPlayerStateCharacter"), &Z_Registration_Info_UClass_AGSCModularPlayerStateCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSCModularPlayerStateCharacter), 4003804277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPlayerStateCharacter_h_1159954775(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPlayerStateCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularPlayerStateCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
