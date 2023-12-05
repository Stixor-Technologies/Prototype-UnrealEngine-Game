// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/GSCAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAssetManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAssetManager();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAssetManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UGSCAssetManager::StaticRegisterNativesUGSCAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAssetManager);
	UClass* Z_Construct_UClass_UGSCAssetManager_NoRegister()
	{
		return UGSCAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAssetManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAssetManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Child of UAssetManager with the primary purpose of initializing UAbilitySystemGlobals GlobalData\n */" },
#endif
		{ "IncludePath", "GSCAssetManager.h" },
		{ "ModuleRelativePath", "Public/GSCAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Child of UAssetManager with the primary purpose of initializing UAbilitySystemGlobals GlobalData" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAssetManager_Statics::ClassParams = {
		&UGSCAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCAssetManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGSCAssetManager()
	{
		if (!Z_Registration_Info_UClass_UGSCAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAssetManager.OuterSingleton, Z_Construct_UClass_UGSCAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCAssetManager.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCAssetManager>()
	{
		return UGSCAssetManager::StaticClass();
	}
	UGSCAssetManager::UGSCAssetManager() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAssetManager);
	UGSCAssetManager::~UGSCAssetManager() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_GSCAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_GSCAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAssetManager, UGSCAssetManager::StaticClass, TEXT("UGSCAssetManager"), &Z_Registration_Info_UClass_UGSCAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAssetManager), 510994254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_GSCAssetManager_h_3092990950(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_GSCAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_GSCAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
