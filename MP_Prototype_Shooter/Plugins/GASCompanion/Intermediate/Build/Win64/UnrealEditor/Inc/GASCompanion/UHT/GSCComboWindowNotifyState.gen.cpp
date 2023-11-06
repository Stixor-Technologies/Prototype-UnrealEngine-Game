// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Animations/GSCComboWindowNotifyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCComboWindowNotifyState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCComboWindowNotifyState();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCComboWindowNotifyState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UGSCComboWindowNotifyState::StaticRegisterNativesUGSCComboWindowNotifyState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCComboWindowNotifyState);
	UClass* Z_Construct_UClass_UGSCComboWindowNotifyState_NoRegister()
	{
		return UGSCComboWindowNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UGSCComboWindowNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEndCombo_MetaData[];
#endif
		static void NewProp_bEndCombo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndCombo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Use this notify state to open a combo window during witch the player can queue up the next combo by activating the ability again.\n *\n * Don't forget to set the `bEndCombo` property to true on this notifier if the montage is the last one of your combo chain.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animations/GSCComboWindowNotifyState.h" },
		{ "ModuleRelativePath", "Public/Animations/GSCComboWindowNotifyState.h" },
		{ "ToolTip", "Use this notify state to open a combo window during witch the player can queue up the next combo by activating the ability again.\n\nDon't forget to set the `bEndCombo` property to true on this notifier if the montage is the last one of your combo chain." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::NewProp_bEndCombo_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** Whether this montage is ending a combo (last montage in the combo chain) */" },
		{ "ModuleRelativePath", "Public/Animations/GSCComboWindowNotifyState.h" },
		{ "ToolTip", "Whether this montage is ending a combo (last montage in the combo chain)" },
	};
#endif
	void Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::NewProp_bEndCombo_SetBit(void* Obj)
	{
		((UGSCComboWindowNotifyState*)Obj)->bEndCombo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::NewProp_bEndCombo = { "bEndCombo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCComboWindowNotifyState), &Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::NewProp_bEndCombo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::NewProp_bEndCombo_MetaData), Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::NewProp_bEndCombo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::NewProp_bEndCombo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCComboWindowNotifyState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::ClassParams = {
		&UGSCComboWindowNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCComboWindowNotifyState()
	{
		if (!Z_Registration_Info_UClass_UGSCComboWindowNotifyState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCComboWindowNotifyState.OuterSingleton, Z_Construct_UClass_UGSCComboWindowNotifyState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCComboWindowNotifyState.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCComboWindowNotifyState>()
	{
		return UGSCComboWindowNotifyState::StaticClass();
	}
	UGSCComboWindowNotifyState::UGSCComboWindowNotifyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCComboWindowNotifyState);
	UGSCComboWindowNotifyState::~UGSCComboWindowNotifyState() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCComboWindowNotifyState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCComboWindowNotifyState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCComboWindowNotifyState, UGSCComboWindowNotifyState::StaticClass, TEXT("UGSCComboWindowNotifyState"), &Z_Registration_Info_UClass_UGSCComboWindowNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCComboWindowNotifyState), 1219105366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCComboWindowNotifyState_h_1777412329(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCComboWindowNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCComboWindowNotifyState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
