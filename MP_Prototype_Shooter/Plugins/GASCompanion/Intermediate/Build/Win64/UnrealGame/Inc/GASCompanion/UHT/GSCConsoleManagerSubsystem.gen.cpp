// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GASCompanion/Public/Subsystems/GSCConsoleManagerSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGSCConsoleManagerSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCConsoleManagerSubsystem();
	GASCOMPANION_API UClass* Z_Construct_UClass_UGSCConsoleManagerSubsystem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GASCompanion();
// End Cross Module References
	DEFINE_FUNCTION(UGSCConsoleManagerSubsystem::execToggleAbilityQueueDebugWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleAbilityQueueDebugWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGSCConsoleManagerSubsystem::execToggleComboDebugWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleComboDebugWidget();
		P_NATIVE_END;
	}
	void UGSCConsoleManagerSubsystem::StaticRegisterNativesUGSCConsoleManagerSubsystem()
	{
		UClass* Class = UGSCConsoleManagerSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleAbilityQueueDebugWidget", &UGSCConsoleManagerSubsystem::execToggleAbilityQueueDebugWidget },
			{ "ToggleComboDebugWidget", &UGSCConsoleManagerSubsystem::execToggleComboDebugWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleAbilityQueueDebugWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleAbilityQueueDebugWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion | Debug" },
		{ "Comment", "/** Create and display, or hide if visible, debug widget for GAS Companion ability queue system. */" },
		{ "ModuleRelativePath", "Public/Subsystems/GSCConsoleManagerSubsystem.h" },
		{ "ToolTip", "Create and display, or hide if visible, debug widget for GAS Companion ability queue system." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleAbilityQueueDebugWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCConsoleManagerSubsystem, nullptr, "ToggleAbilityQueueDebugWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleAbilityQueueDebugWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleAbilityQueueDebugWidget_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleAbilityQueueDebugWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleAbilityQueueDebugWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleComboDebugWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleComboDebugWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "GAS Companion | Debug" },
		{ "Comment", "/** Create and display, or hide if visible, debug widget for GAS Companion combo component and ability. */" },
		{ "ModuleRelativePath", "Public/Subsystems/GSCConsoleManagerSubsystem.h" },
		{ "ToolTip", "Create and display, or hide if visible, debug widget for GAS Companion combo component and ability." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleComboDebugWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGSCConsoleManagerSubsystem, nullptr, "ToggleComboDebugWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleComboDebugWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleComboDebugWidget_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleComboDebugWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleComboDebugWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGSCConsoleManagerSubsystem);
	UClass* Z_Construct_UClass_UGSCConsoleManagerSubsystem_NoRegister()
	{
		return UGSCConsoleManagerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityQueueDebugWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbilityQueueDebugWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboDebugWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComboDebugWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityQueueWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityQueueWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComboWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GASCompanion,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleAbilityQueueDebugWidget, "ToggleAbilityQueueDebugWidget" }, // 3342077134
		{ &Z_Construct_UFunction_UGSCConsoleManagerSubsystem_ToggleComboDebugWidget, "ToggleComboDebugWidget" }, // 2820509601
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Local Player Subsystem to handle cheat commands, available in game. Namely to open\n * various debug UMG widgets.\n */" },
		{ "DisplayName", "GSC Console Manager" },
		{ "IncludePath", "Subsystems/GSCConsoleManagerSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/GSCConsoleManagerSubsystem.h" },
		{ "ToolTip", "Local Player Subsystem to handle cheat commands, available in game. Namely to open\nvarious debug UMG widgets." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_AbilityQueueDebugWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/GSCConsoleManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_AbilityQueueDebugWidget = { "AbilityQueueDebugWidget", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCConsoleManagerSubsystem, AbilityQueueDebugWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_AbilityQueueDebugWidget_MetaData), Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_AbilityQueueDebugWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_ComboDebugWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/GSCConsoleManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_ComboDebugWidget = { "ComboDebugWidget", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCConsoleManagerSubsystem, ComboDebugWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_ComboDebugWidget_MetaData), Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_ComboDebugWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_AbilityQueueWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/GSCConsoleManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_AbilityQueueWidgetClass = { "AbilityQueueWidgetClass", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCConsoleManagerSubsystem, AbilityQueueWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_AbilityQueueWidgetClass_MetaData), Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_AbilityQueueWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_ComboWidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/GSCConsoleManagerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_ComboWidgetClass = { "ComboWidgetClass", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGSCConsoleManagerSubsystem, ComboWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_ComboWidgetClass_MetaData), Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_ComboWidgetClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_AbilityQueueDebugWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_ComboDebugWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_AbilityQueueWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::NewProp_ComboWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGSCConsoleManagerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::ClassParams = {
		&UGSCConsoleManagerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGSCConsoleManagerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGSCConsoleManagerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGSCConsoleManagerSubsystem.OuterSingleton, Z_Construct_UClass_UGSCConsoleManagerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGSCConsoleManagerSubsystem.OuterSingleton;
	}
	template<> GASCOMPANION_API UClass* StaticClass<UGSCConsoleManagerSubsystem>()
	{
		return UGSCConsoleManagerSubsystem::StaticClass();
	}
	UGSCConsoleManagerSubsystem::UGSCConsoleManagerSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGSCConsoleManagerSubsystem);
	UGSCConsoleManagerSubsystem::~UGSCConsoleManagerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGSCConsoleManagerSubsystem, UGSCConsoleManagerSubsystem::StaticClass, TEXT("UGSCConsoleManagerSubsystem"), &Z_Registration_Info_UClass_UGSCConsoleManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGSCConsoleManagerSubsystem), 412448759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_2792535308(TEXT("/Script/GASCompanion"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GASCompanion_Source_GASCompanion_Public_Subsystems_GSCConsoleManagerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
