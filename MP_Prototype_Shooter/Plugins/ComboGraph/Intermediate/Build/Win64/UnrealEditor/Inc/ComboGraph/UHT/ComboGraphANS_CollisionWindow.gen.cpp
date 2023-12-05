// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/AnimNotifies/ComboGraphANS_CollisionWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphANS_CollisionWindow() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphANS_CollisionWindow();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphANS_CollisionWindow_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	void UComboGraphANS_CollisionWindow::StaticRegisterNativesUComboGraphANS_CollisionWindow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphANS_CollisionWindow);
	UClass* Z_Construct_UClass_UComboGraphANS_CollisionWindow_NoRegister()
	{
		return UComboGraphANS_CollisionWindow::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphANS_CollisionWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphANS_CollisionWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphANS_CollisionWindow_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphANS_CollisionWindow_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Anim notifies that start and end traces on Owner's ComboGraph CollisionComponent. */" },
#endif
		{ "DisplayName", "Combo Graph: Collision Window" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifies/ComboGraphANS_CollisionWindow.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/AnimNotifies/ComboGraphANS_CollisionWindow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim notifies that start and end traces on Owner's ComboGraph CollisionComponent." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphANS_CollisionWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphANS_CollisionWindow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphANS_CollisionWindow_Statics::ClassParams = {
		&UComboGraphANS_CollisionWindow::StaticClass,
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
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphANS_CollisionWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphANS_CollisionWindow_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UComboGraphANS_CollisionWindow()
	{
		if (!Z_Registration_Info_UClass_UComboGraphANS_CollisionWindow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphANS_CollisionWindow.OuterSingleton, Z_Construct_UClass_UComboGraphANS_CollisionWindow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphANS_CollisionWindow.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphANS_CollisionWindow>()
	{
		return UComboGraphANS_CollisionWindow::StaticClass();
	}
	UComboGraphANS_CollisionWindow::UComboGraphANS_CollisionWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphANS_CollisionWindow);
	UComboGraphANS_CollisionWindow::~UComboGraphANS_CollisionWindow() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_AnimNotifies_ComboGraphANS_CollisionWindow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_AnimNotifies_ComboGraphANS_CollisionWindow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphANS_CollisionWindow, UComboGraphANS_CollisionWindow::StaticClass, TEXT("UComboGraphANS_CollisionWindow"), &Z_Registration_Info_UClass_UComboGraphANS_CollisionWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphANS_CollisionWindow), 2290291113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_AnimNotifies_ComboGraphANS_CollisionWindow_h_1627282761(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_AnimNotifies_ComboGraphANS_CollisionWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_AnimNotifies_ComboGraphANS_CollisionWindow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
