// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Abilities/ComboGraphAbilitySystemGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphAbilitySystemGlobals() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphAbilitySystemGlobals();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphAbilitySystemGlobals_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	void UComboGraphAbilitySystemGlobals::StaticRegisterNativesUComboGraphAbilitySystemGlobals()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphAbilitySystemGlobals);
	UClass* Z_Construct_UClass_UComboGraphAbilitySystemGlobals_NoRegister()
	{
		return UComboGraphAbilitySystemGlobals::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphAbilitySystemGlobals_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphAbilitySystemGlobals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilitySystemGlobals_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphAbilitySystemGlobals_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAbilitySystemGlobals holds global data for the ability system. Can be configured per project via config file.\n *\n * This subclass is designed to handle custom Gameplay Effect Context to return FComboGraphGameplayEffectContext which is required for\n * Combo Nodes Gameplay Cue Containers to be able to pass down custom and arbitrary cue parameters to gameplay cue handlers.\n */" },
#endif
		{ "IncludePath", "Abilities/ComboGraphAbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "Public/Abilities/ComboGraphAbilitySystemGlobals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAbilitySystemGlobals holds global data for the ability system. Can be configured per project via config file.\n\nThis subclass is designed to handle custom Gameplay Effect Context to return FComboGraphGameplayEffectContext which is required for\nCombo Nodes Gameplay Cue Containers to be able to pass down custom and arbitrary cue parameters to gameplay cue handlers." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphAbilitySystemGlobals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphAbilitySystemGlobals>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphAbilitySystemGlobals_Statics::ClassParams = {
		&UComboGraphAbilitySystemGlobals::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphAbilitySystemGlobals_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphAbilitySystemGlobals_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UComboGraphAbilitySystemGlobals()
	{
		if (!Z_Registration_Info_UClass_UComboGraphAbilitySystemGlobals.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphAbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_UComboGraphAbilitySystemGlobals_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphAbilitySystemGlobals.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphAbilitySystemGlobals>()
	{
		return UComboGraphAbilitySystemGlobals::StaticClass();
	}
	UComboGraphAbilitySystemGlobals::UComboGraphAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphAbilitySystemGlobals);
	UComboGraphAbilitySystemGlobals::~UComboGraphAbilitySystemGlobals() {}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_ComboGraphAbilitySystemGlobals_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_ComboGraphAbilitySystemGlobals_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphAbilitySystemGlobals, UComboGraphAbilitySystemGlobals::StaticClass, TEXT("UComboGraphAbilitySystemGlobals"), &Z_Registration_Info_UClass_UComboGraphAbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphAbilitySystemGlobals), 2829776606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_ComboGraphAbilitySystemGlobals_h_1928818335(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_ComboGraphAbilitySystemGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_ComboGraph_Source_ComboGraph_Public_Abilities_ComboGraphAbilitySystemGlobals_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
