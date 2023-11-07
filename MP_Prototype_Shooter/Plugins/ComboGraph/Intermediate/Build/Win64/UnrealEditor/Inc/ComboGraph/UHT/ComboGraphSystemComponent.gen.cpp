// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Components/ComboGraphSystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphSystemComponent() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphGameplayTasksComponent();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphSystemComponent();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphSystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	void UComboGraphSystemComponent::StaticRegisterNativesUComboGraphSystemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphSystemComponent);
	UClass* Z_Construct_UClass_UComboGraphSystemComponent_NoRegister()
	{
		return UComboGraphSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComboGraphGameplayTasksComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphSystemComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ComboGraph" },
		{ "Comment", "/**\n * Gameplay Task Actor Component designed to be added in Blueprints to Actors that wants to run Start Graph Gameplay Task outside of the regular GAS route and Gameplay Abilities.\n *\n * It is meant to be used for Actors not implementing IAbilitySystemInterface. On BeginPlay, this component will check owners for a valid Ability System Component\n * (either via the interface, or through component search) and if none is found, will spawn and register an ASC at runtime.\n *\n * Once done, this component will grant a generic internal ability UComboGraphNativeAbility (which is also not Blueprintable) that the gameplay task can use to run a specific combo graph.\n * UComboGraphNativeAbility provides a basic implementation of a typical gameplay ability to run a combo graph via the ability task, pulling the combo graph asset from Gameplay Event Data.\n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Components/ComboGraphSystemComponent.h" },
		{ "ModuleRelativePath", "Public/Components/ComboGraphSystemComponent.h" },
		{ "ToolTip", "Gameplay Task Actor Component designed to be added in Blueprints to Actors that wants to run Start Graph Gameplay Task outside of the regular GAS route and Gameplay Abilities.\n\nIt is meant to be used for Actors not implementing IAbilitySystemInterface. On BeginPlay, this component will check owners for a valid Ability System Component\n(either via the interface, or through component search) and if none is found, will spawn and register an ASC at runtime.\n\nOnce done, this component will grant a generic internal ability UComboGraphNativeAbility (which is also not Blueprintable) that the gameplay task can use to run a specific combo graph.\nUComboGraphNativeAbility provides a basic implementation of a typical gameplay ability to run a combo graph via the ability task, pulling the combo graph asset from Gameplay Event Data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphSystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphSystemComponent_Statics::ClassParams = {
		&UComboGraphSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphSystemComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UComboGraphSystemComponent()
	{
		if (!Z_Registration_Info_UClass_UComboGraphSystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphSystemComponent.OuterSingleton, Z_Construct_UClass_UComboGraphSystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphSystemComponent.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphSystemComponent>()
	{
		return UComboGraphSystemComponent::StaticClass();
	}
	UComboGraphSystemComponent::UComboGraphSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphSystemComponent);
	UComboGraphSystemComponent::~UComboGraphSystemComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphSystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphSystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphSystemComponent, UComboGraphSystemComponent::StaticClass, TEXT("UComboGraphSystemComponent"), &Z_Registration_Info_UClass_UComboGraphSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphSystemComponent), 1588702146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphSystemComponent_h_1638111715(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphSystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Components_ComboGraphSystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
