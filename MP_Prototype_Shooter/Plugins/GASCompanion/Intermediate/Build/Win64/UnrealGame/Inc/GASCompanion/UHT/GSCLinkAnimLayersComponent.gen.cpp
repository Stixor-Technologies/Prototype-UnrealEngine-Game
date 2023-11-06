// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Components/GSCLinkAnimLayersComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCLinkAnimLayersComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCLinkAnimLayersComponent();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCLinkAnimLayersComponent_NoRegister();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UGSCLinkAnimLayersComponent::StaticRegisterNativesUGSCLinkAnimLayersComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCLinkAnimLayersComponent);
	UClass* Z_Construct_UClass_UGSCLinkAnimLayersComponent_NoRegister()
	{
		return UGSCLinkAnimLayersComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LayerTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GASCompanion" },
		{ "Comment", "/** Modular pawn component for \"pushing\" linked anim layers to a Character */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/GSCLinkAnimLayersComponent.h" },
		{ "ModuleRelativePath", "Public/Components/GSCLinkAnimLayersComponent.h" },
		{ "ToolTip", "Modular pawn component for \"pushing\" linked anim layers to a Character" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::NewProp_LayerTypes_Inner = { "LayerTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::NewProp_LayerTypes_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "/** List of Anim Instances Classes to link to owner skeletal mesh component */" },
		{ "ModuleRelativePath", "Public/Components/GSCLinkAnimLayersComponent.h" },
		{ "ToolTip", "List of Anim Instances Classes to link to owner skeletal mesh component" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::NewProp_LayerTypes = { "LayerTypes", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCLinkAnimLayersComponent, LayerTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::NewProp_LayerTypes_MetaData), Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::NewProp_LayerTypes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::NewProp_LayerTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::NewProp_LayerTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCLinkAnimLayersComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::ClassParams = {
		&UGSCLinkAnimLayersComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCLinkAnimLayersComponent()
	{
		if (!Z_Registration_Info_UClass_UGSCLinkAnimLayersComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCLinkAnimLayersComponent.OuterSingleton, Z_Construct_UClass_UGSCLinkAnimLayersComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCLinkAnimLayersComponent.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCLinkAnimLayersComponent>()
	{
		return UGSCLinkAnimLayersComponent::StaticClass();
	}
	UGSCLinkAnimLayersComponent::UGSCLinkAnimLayersComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCLinkAnimLayersComponent);
	UGSCLinkAnimLayersComponent::~UGSCLinkAnimLayersComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCLinkAnimLayersComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCLinkAnimLayersComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCLinkAnimLayersComponent, UGSCLinkAnimLayersComponent::StaticClass, TEXT("UGSCLinkAnimLayersComponent"), &Z_Registration_Info_UClass_UGSCLinkAnimLayersComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCLinkAnimLayersComponent), 520611152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCLinkAnimLayersComponent_h_339300323(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCLinkAnimLayersComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Components_GSCLinkAnimLayersComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
