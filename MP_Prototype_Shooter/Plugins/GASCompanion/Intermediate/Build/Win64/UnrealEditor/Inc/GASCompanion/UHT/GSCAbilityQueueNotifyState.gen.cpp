// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Animations/GSCAbilityQueueNotifyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCAbilityQueueNotifyState() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilityQueueNotifyState();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCAbilityQueueNotifyState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UGSCAbilityQueueNotifyState::StaticRegisterNativesUGSCAbilityQueueNotifyState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCAbilityQueueNotifyState);
	UClass* Z_Construct_UClass_UGSCAbilityQueueNotifyState_NoRegister()
	{
		return UGSCAbilityQueueNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAllAbilities_MetaData[];
#endif
		static void NewProp_bAllowAllAbilities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAllAbilities;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Use this notify state to open and close the ability queue window for your montage.\n *\n * If this montage is triggered from within a Gameplay Ability, any ability that is failing to\n * activate during this window will be queued for activation when the current active one ends.\n */" },
#endif
		{ "DisplayName", "AbilityQueueWindow" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animations/GSCAbilityQueueNotifyState.h" },
		{ "ModuleRelativePath", "Public/Animations/GSCAbilityQueueNotifyState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this notify state to open and close the ability queue window for your montage.\n\nIf this montage is triggered from within a Gameplay Ability, any ability that is failing to\nactivate during this window will be queued for activation when the current active one ends." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, enable queueing of all abilities, otherwise only allow Abilities that are defined in AllowedAbilities array.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Animations/GSCAbilityQueueNotifyState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, enable queueing of all abilities, otherwise only allow Abilities that are defined in AllowedAbilities array." },
#endif
	};
#endif
	void Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities_SetBit(void* Obj)
	{
		((UGSCAbilityQueueNotifyState*)Obj)->bAllowAllAbilities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities = { "bAllowAllAbilities", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGSCAbilityQueueNotifyState), &Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities_MetaData), Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities_Inner = { "AllowedAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The set of Abilities that can be queued for this window (has no effect if bAllowAllAbilities is set to true)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Animations/GSCAbilityQueueNotifyState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The set of Abilities that can be queued for this window (has no effect if bAllowAllAbilities is set to true)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities = { "AllowedAbilities", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCAbilityQueueNotifyState, AllowedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities_MetaData), Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_bAllowAllAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::NewProp_AllowedAbilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCAbilityQueueNotifyState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::ClassParams = {
		&UGSCAbilityQueueNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCAbilityQueueNotifyState()
	{
		if (!Z_Registration_Info_UClass_UGSCAbilityQueueNotifyState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCAbilityQueueNotifyState.OuterSingleton, Z_Construct_UClass_UGSCAbilityQueueNotifyState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCAbilityQueueNotifyState.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCAbilityQueueNotifyState>()
	{
		return UGSCAbilityQueueNotifyState::StaticClass();
	}
	UGSCAbilityQueueNotifyState::UGSCAbilityQueueNotifyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCAbilityQueueNotifyState);
	UGSCAbilityQueueNotifyState::~UGSCAbilityQueueNotifyState() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCAbilityQueueNotifyState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCAbilityQueueNotifyState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCAbilityQueueNotifyState, UGSCAbilityQueueNotifyState::StaticClass, TEXT("UGSCAbilityQueueNotifyState"), &Z_Registration_Info_UClass_UGSCAbilityQueueNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCAbilityQueueNotifyState), 3278198284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCAbilityQueueNotifyState_h_2732930166(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCAbilityQueueNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_GASCompanion_Source_GASCompanion_Public_Animations_GSCAbilityQueueNotifyState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
