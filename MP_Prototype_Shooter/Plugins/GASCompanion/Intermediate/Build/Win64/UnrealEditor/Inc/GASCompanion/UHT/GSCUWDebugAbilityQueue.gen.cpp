// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/UI/GSCUWDebugAbilityQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCUWDebugAbilityQueue() {}
// Cross Module References
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCUserWidget();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCUWDebugAbilityQueue();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCUWDebugAbilityQueue_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	void UGSCUWDebugAbilityQueue::StaticRegisterNativesUGSCUWDebugAbilityQueue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCUWDebugAbilityQueue);
	UClass* Z_Construct_UClass_UGSCUWDebugAbilityQueue_NoRegister()
	{
		return UGSCUWDebugAbilityQueue::StaticClass();
	}
	struct Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearFromMontageDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClearFromMontageDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityQueueEnabledText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilityQueueEnabledText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityQueueOpenedText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilityQueueOpenedText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentQueuedAbilityText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentQueuedAbilityText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowAllAbilitiesText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllowAllAbilitiesText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedAbilityTemplateText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllowedAbilityTemplateText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityQueueFromMontageTemplateText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilityQueueFromMontageTemplateText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedAbilitiesBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllowedAbilitiesBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityQueueFromMontagesBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilityQueueFromMontagesBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityQueueFromMontagesPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilityQueueFromMontagesPanel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGSCUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "UI/GSCUWDebugAbilityQueue.h" },
		{ "ModuleRelativePath", "Public/UI/GSCUWDebugAbilityQueue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_ClearFromMontageDelay_MetaData[] = {
		{ "Category", "GAS Companion|UserWidget" },
		{ "Comment", "/**\n\x09 * The amount of time (in seconds) that \"From Montage\" rows stay on screen\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/GSCUWDebugAbilityQueue.h" },
		{ "ToolTip", "The amount of time (in seconds) that \"From Montage\" rows stay on screen" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_ClearFromMontageDelay = { "ClearFromMontageDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWDebugAbilityQueue, ClearFromMontageDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_ClearFromMontageDelay_MetaData), Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_ClearFromMontageDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueEnabledText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GAS Companion|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWDebugAbilityQueue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueEnabledText = { "AbilityQueueEnabledText", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWDebugAbilityQueue, AbilityQueueEnabledText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueEnabledText_MetaData), Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueEnabledText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueOpenedText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GAS Companion|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWDebugAbilityQueue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueOpenedText = { "AbilityQueueOpenedText", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWDebugAbilityQueue, AbilityQueueOpenedText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueOpenedText_MetaData), Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueOpenedText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_CurrentQueuedAbilityText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GAS Companion|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWDebugAbilityQueue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_CurrentQueuedAbilityText = { "CurrentQueuedAbilityText", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWDebugAbilityQueue, CurrentQueuedAbilityText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_CurrentQueuedAbilityText_MetaData), Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_CurrentQueuedAbilityText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowAllAbilitiesText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GAS Companion|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWDebugAbilityQueue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowAllAbilitiesText = { "AllowAllAbilitiesText", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWDebugAbilityQueue, AllowAllAbilitiesText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowAllAbilitiesText_MetaData), Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowAllAbilitiesText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowedAbilityTemplateText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/**\n\x09 * Convenience TextBlock that serves as a \"template\" for allowed abilities row,\n\x09 * so that we can customize its styling in Blueprints (font size, color, etc.)\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWDebugAbilityQueue.h" },
		{ "ToolTip", "Convenience TextBlock that serves as a \"template\" for allowed abilities row,\nso that we can customize its styling in Blueprints (font size, color, etc.)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowedAbilityTemplateText = { "AllowedAbilityTemplateText", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWDebugAbilityQueue, AllowedAbilityTemplateText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowedAbilityTemplateText_MetaData), Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowedAbilityTemplateText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontageTemplateText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GAS Companion|UI" },
		{ "Comment", "/**\n\x09 * Convenience TextBlock that serves as a \"template\" for ability queue from montages row,\n\x09 * so that we can customize its styling in Blueprints (font size, color, etc.)\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWDebugAbilityQueue.h" },
		{ "ToolTip", "Convenience TextBlock that serves as a \"template\" for ability queue from montages row,\nso that we can customize its styling in Blueprints (font size, color, etc.)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontageTemplateText = { "AbilityQueueFromMontageTemplateText", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWDebugAbilityQueue, AbilityQueueFromMontageTemplateText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontageTemplateText_MetaData), Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontageTemplateText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowedAbilitiesBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GAS Companion|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWDebugAbilityQueue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowedAbilitiesBox = { "AllowedAbilitiesBox", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWDebugAbilityQueue, AllowedAbilitiesBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowedAbilitiesBox_MetaData), Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowedAbilitiesBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontagesBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GAS Companion|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWDebugAbilityQueue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontagesBox = { "AbilityQueueFromMontagesBox", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWDebugAbilityQueue, AbilityQueueFromMontagesBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontagesBox_MetaData), Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontagesBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontagesPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GAS Companion|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GSCUWDebugAbilityQueue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontagesPanel = { "AbilityQueueFromMontagesPanel", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCUWDebugAbilityQueue, AbilityQueueFromMontagesPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontagesPanel_MetaData), Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontagesPanel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_ClearFromMontageDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueEnabledText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueOpenedText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_CurrentQueuedAbilityText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowAllAbilitiesText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowedAbilityTemplateText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontageTemplateText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AllowedAbilitiesBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontagesBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::NewProp_AbilityQueueFromMontagesPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCUWDebugAbilityQueue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::ClassParams = {
		&UGSCUWDebugAbilityQueue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCUWDebugAbilityQueue()
	{
		if (!Z_Registration_Info_UClass_UGSCUWDebugAbilityQueue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCUWDebugAbilityQueue.OuterSingleton, Z_Construct_UClass_UGSCUWDebugAbilityQueue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCUWDebugAbilityQueue.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCUWDebugAbilityQueue>()
	{
		return UGSCUWDebugAbilityQueue::StaticClass();
	}
	UGSCUWDebugAbilityQueue::UGSCUWDebugAbilityQueue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCUWDebugAbilityQueue);
	UGSCUWDebugAbilityQueue::~UGSCUWDebugAbilityQueue() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUWDebugAbilityQueue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUWDebugAbilityQueue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCUWDebugAbilityQueue, UGSCUWDebugAbilityQueue::StaticClass, TEXT("UGSCUWDebugAbilityQueue"), &Z_Registration_Info_UClass_UGSCUWDebugAbilityQueue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCUWDebugAbilityQueue), 3379647710U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUWDebugAbilityQueue_h_3494899706(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUWDebugAbilityQueue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_UI_GSCUWDebugAbilityQueue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
