// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/ModularGameplayActors/GSCModularGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCModularGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCModularGameMode();
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCModularGameMode_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCModularGameModeBase();
	GASCOMPANION_API UClass* Z_Construct_UClass_AGSCModularGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void AGSCModularGameModeBase::StaticRegisterNativesAGSCModularGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSCModularGameModeBase);
	UClass* Z_Construct_UClass_AGSCModularGameModeBase_NoRegister()
	{
		return AGSCModularGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGSCModularGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGSCModularGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSCModularGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pair this with a ModularGameStateBase */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameplayActors/GSCModularGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSCModularGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pair this with a ModularGameStateBase" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGSCModularGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSCModularGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSCModularGameModeBase_Statics::ClassParams = {
		&AGSCModularGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSCModularGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGSCModularGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGSCModularGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSCModularGameModeBase.OuterSingleton, Z_Construct_UClass_AGSCModularGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGSCModularGameModeBase.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<AGSCModularGameModeBase>()
	{
		return AGSCModularGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGSCModularGameModeBase);
	AGSCModularGameModeBase::~AGSCModularGameModeBase() {}
	void AGSCModularGameMode::StaticRegisterNativesAGSCModularGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGSCModularGameMode);
	UClass* Z_Construct_UClass_AGSCModularGameMode_NoRegister()
	{
		return AGSCModularGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGSCModularGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGSCModularGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGSCModularGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pair this with a ModularGameState */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameplayActors/GSCModularGameMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameplayActors/GSCModularGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pair this with a ModularGameState" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGSCModularGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGSCModularGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGSCModularGameMode_Statics::ClassParams = {
		&AGSCModularGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGSCModularGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGSCModularGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGSCModularGameMode()
	{
		if (!Z_Registration_Info_UClass_AGSCModularGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGSCModularGameMode.OuterSingleton, Z_Construct_UClass_AGSCModularGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGSCModularGameMode.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<AGSCModularGameMode>()
	{
		return AGSCModularGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGSCModularGameMode);
	AGSCModularGameMode::~AGSCModularGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGSCModularGameModeBase, AGSCModularGameModeBase::StaticClass, TEXT("AGSCModularGameModeBase"), &Z_Registration_Info_UClass_AGSCModularGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSCModularGameModeBase), 2294284393U) },
		{ Z_Construct_UClass_AGSCModularGameMode, AGSCModularGameMode::StaticClass, TEXT("AGSCModularGameMode"), &Z_Registration_Info_UClass_AGSCModularGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGSCModularGameMode), 2723704338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularGameMode_h_2601375706(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_ModularGameplayActors_GSCModularGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
