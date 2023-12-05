// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Core/Settings/GSCDeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCDeveloperSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCDeveloperSettings();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCDeveloperSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UGSCDeveloperSettings::StaticRegisterNativesUGSCDeveloperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCDeveloperSettings);
	UClass* Z_Construct_UClass_UGSCDeveloperSettings_NoRegister()
	{
		return UGSCDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGSCDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreventGlobalDataInitialization_MetaData[];
#endif
		static void NewProp_bPreventGlobalDataInitialization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventGlobalDataInitialization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCDeveloperSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCDeveloperSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * General Settings for GAS Companion Plugin.\n */" },
#endif
		{ "DisplayName", "GAS Companion" },
		{ "IncludePath", "Core/Settings/GSCDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Settings/GSCDeveloperSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "General Settings for GAS Companion Plugin." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization_MetaData[] = {
		{ "Category", "Ability System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Turn this on to prevent GAS Companion module to initialize UAbilitySystemGlobals (InitGlobalData) in the plugin StartupModule method.\n\x09 *\n\x09 * InitGlobalData() might be invoked a bit too early otherwise (with GAS Companion's StartupModule). It is expected that if you set this option to true to use\n\x09 * an AssetManager subclass where `UAbilitySystemGlobals::Get().InitGlobalData()` is called in `StartInitialLoading``\n\x09 *\n\x09 * You'll need to update `Project Settings -> Engine > General Settings > Asset Manager Class` to use your AssetManager subclass.\n\x09 *\n\x09 * GAS Companion provides one `GSCAssetManager` and the editor should ask you if you want to update the `Asset Manager Class` to use it if the current Manager class\n\x09 * is using engine's default one.\n\x09 */" },
#endif
		{ "DisplayName", "Prevent Ability System Global Data Initialization in Startup Module (Recommended)" },
		{ "ModuleRelativePath", "Public/Core/Settings/GSCDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Turn this on to prevent GAS Companion module to initialize UAbilitySystemGlobals (InitGlobalData) in the plugin StartupModule method.\n\nInitGlobalData() might be invoked a bit too early otherwise (with GAS Companion's StartupModule). It is expected that if you set this option to true to use\nan AssetManager subclass where `UAbilitySystemGlobals::Get().InitGlobalData()` is called in `StartInitialLoading``\n\nYou'll need to update `Project Settings -> Engine > General Settings > Asset Manager Class` to use your AssetManager subclass.\n\nGAS Companion provides one `GSCAssetManager` and the editor should ask you if you want to update the `Asset Manager Class` to use it if the current Manager class\nis using engine's default one." },
#endif
	};
#endif
	void Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization_SetBit(void* Obj)
	{
		((UGSCDeveloperSettings*)Obj)->bPreventGlobalDataInitialization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization = { "bPreventGlobalDataInitialization", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCDeveloperSettings), &Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization_MetaData), Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCDeveloperSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCDeveloperSettings_Statics::NewProp_bPreventGlobalDataInitialization,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCDeveloperSettings_Statics::ClassParams = {
		&UGSCDeveloperSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCDeveloperSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCDeveloperSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCDeveloperSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCDeveloperSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCDeveloperSettings()
	{
		if (!Z_Registration_Info_UClass_UGSCDeveloperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCDeveloperSettings.OuterSingleton, Z_Construct_UClass_UGSCDeveloperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCDeveloperSettings.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCDeveloperSettings>()
	{
		return UGSCDeveloperSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCDeveloperSettings);
	UGSCDeveloperSettings::~UGSCDeveloperSettings() {}
	struct Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Settings_GSCDeveloperSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Settings_GSCDeveloperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCDeveloperSettings, UGSCDeveloperSettings::StaticClass, TEXT("UGSCDeveloperSettings"), &Z_Registration_Info_UClass_UGSCDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCDeveloperSettings), 3303646486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Settings_GSCDeveloperSettings_h_3132263992(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Settings_GSCDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MP_Prototype_Shooter_Plugins_GASCompanion_Source_GASCompanion_Public_Core_Settings_GSCDeveloperSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
