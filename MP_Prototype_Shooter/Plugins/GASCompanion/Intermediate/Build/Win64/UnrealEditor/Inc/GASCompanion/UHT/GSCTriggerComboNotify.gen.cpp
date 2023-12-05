// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Animations/GSCTriggerComboNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCTriggerComboNotify() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTriggerComboNotify();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCTriggerComboNotify_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UGSCTriggerComboNotify::StaticRegisterNativesUGSCTriggerComboNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCTriggerComboNotify);
	UClass* Z_Construct_UClass_UGSCTriggerComboNotify_NoRegister()
	{
		return UGSCTriggerComboNotify::StaticClass();
	}
	struct Z_Construct_UClass_UGSCTriggerComboNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCTriggerComboNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTriggerComboNotify_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCTriggerComboNotify_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Use this notify to tell the system to trigger the next combo activation if the player registered an input within the combo window notify state.\n *\n *\n * Note that this notify must be placed within the combo window to properly work.\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animations/GSCTriggerComboNotify.h" },
		{ "ModuleRelativePath", "Public/Animations/GSCTriggerComboNotify.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this notify to tell the system to trigger the next combo activation if the player registered an input within the combo window notify state.\n\n\nNote that this notify must be placed within the combo window to properly work." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCTriggerComboNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCTriggerComboNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCTriggerComboNotify_Statics::ClassParams = {
		&UGSCTriggerComboNotify::StaticClass,
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
		0x001120A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCTriggerComboNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCTriggerComboNotify_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGSCTriggerComboNotify()
	{
		if (!Z_Registration_Info_UClass_UGSCTriggerComboNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCTriggerComboNotify.OuterSingleton, Z_Construct_UClass_UGSCTriggerComboNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCTriggerComboNotify.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCTriggerComboNotify>()
	{
		return UGSCTriggerComboNotify::StaticClass();
	}
	UGSCTriggerComboNotify::UGSCTriggerComboNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCTriggerComboNotify);
	UGSCTriggerComboNotify::~UGSCTriggerComboNotify() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCTriggerComboNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCTriggerComboNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCTriggerComboNotify, UGSCTriggerComboNotify::StaticClass, TEXT("UGSCTriggerComboNotify"), &Z_Registration_Info_UClass_UGSCTriggerComboNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCTriggerComboNotify), 2675286792U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCTriggerComboNotify_h_4149630383(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCTriggerComboNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCTriggerComboNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
