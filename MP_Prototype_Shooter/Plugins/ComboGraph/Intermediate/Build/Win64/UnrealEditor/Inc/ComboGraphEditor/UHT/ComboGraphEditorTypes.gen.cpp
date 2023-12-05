// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraphEditor/Public/ComboGraphEditorTypes.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphEditorTypes() {}
// Cross Module References
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphIconType();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphPinNames();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphPinNames_NoRegister();
	COMBOGRAPHEDITOR_API UEnum* Z_Construct_UEnum_ComboGraphEditor_EComboGraphAutoArrangeStrategy();
	COMBOGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphInputsMetaData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_ComboGraphEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FComboGraphInputsMetaData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FComboGraphInputsMetaData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphInputsMetaData;
class UScriptStruct* FComboGraphInputsMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphInputsMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphInputsMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphInputsMetaData, (UObject*)Z_Construct_UPackage__Script_ComboGraphEditor(), TEXT("ComboGraphInputsMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphInputsMetaData.OuterSingleton;
}
template<> COMBOGRAPHEDITOR_API UScriptStruct* StaticStruct<FComboGraphInputsMetaData>()
{
	return FComboGraphInputsMetaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IconType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IconType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** DataTable used to draw edge (transition) icons in Graph. Determine mappings between Keys and Icon textures */" },
#endif
		{ "ModuleRelativePath", "Public/ComboGraphEditorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataTable used to draw edge (transition) icons in Graph. Determine mappings between Keys and Icon textures" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphInputsMetaData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Combo Graph" },
		{ "ModuleRelativePath", "Public/ComboGraphEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphInputsMetaData, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_Key_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Combo Graph" },
		{ "ModuleRelativePath", "Public/ComboGraphEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphInputsMetaData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_Icon_MetaData), Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_Icon_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_IconType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_IconType_MetaData[] = {
		{ "Category", "Combo Graph" },
		{ "ModuleRelativePath", "Public/ComboGraphEditorTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_IconType = { "IconType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphInputsMetaData, IconType), Z_Construct_UEnum_ComboGraph_EComboGraphIconType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_IconType_MetaData), Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_IconType_MetaData) }; // 3757666852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_IconType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewProp_IconType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ComboGraphInputsMetaData",
		Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::PropPointers),
		sizeof(FComboGraphInputsMetaData),
		alignof(FComboGraphInputsMetaData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphInputsMetaData()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphInputsMetaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphInputsMetaData.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphInputsMetaData.InnerSingleton;
	}
	void UComboGraphPinNames::StaticRegisterNativesUComboGraphPinNames()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphPinNames);
	UClass* Z_Construct_UClass_UComboGraphPinNames_NoRegister()
	{
		return UComboGraphPinNames::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphPinNames_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphPinNames_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphPinNames_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphPinNames_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds Graph Pin Categories Names as constants */" },
#endif
		{ "IncludePath", "ComboGraphEditorTypes.h" },
		{ "ModuleRelativePath", "Public/ComboGraphEditorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds Graph Pin Categories Names as constants" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphPinNames_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphPinNames>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphPinNames_Statics::ClassParams = {
		&UComboGraphPinNames::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphPinNames_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphPinNames_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UComboGraphPinNames()
	{
		if (!Z_Registration_Info_UClass_UComboGraphPinNames.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphPinNames.OuterSingleton, Z_Construct_UClass_UComboGraphPinNames_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphPinNames.OuterSingleton;
	}
	template<> COMBOGRAPHEDITOR_API UClass* StaticClass<UComboGraphPinNames>()
	{
		return UComboGraphPinNames::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphPinNames);
	UComboGraphPinNames::~UComboGraphPinNames() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComboGraphAutoArrangeStrategy;
	static UEnum* EComboGraphAutoArrangeStrategy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphAutoArrangeStrategy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComboGraphAutoArrangeStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComboGraphEditor_EComboGraphAutoArrangeStrategy, (UObject*)Z_Construct_UPackage__Script_ComboGraphEditor(), TEXT("EComboGraphAutoArrangeStrategy"));
		}
		return Z_Registration_Info_UEnum_EComboGraphAutoArrangeStrategy.OuterSingleton;
	}
	template<> COMBOGRAPHEDITOR_API UEnum* StaticEnum<EComboGraphAutoArrangeStrategy>()
	{
		return EComboGraphAutoArrangeStrategy_StaticEnum();
	}
	struct Z_Construct_UEnum_ComboGraphEditor_EComboGraphAutoArrangeStrategy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComboGraphEditor_EComboGraphAutoArrangeStrategy_Statics::Enumerators[] = {
		{ "EComboGraphAutoArrangeStrategy::Vertical", (int64)EComboGraphAutoArrangeStrategy::Vertical },
		{ "EComboGraphAutoArrangeStrategy::Horizontal", (int64)EComboGraphAutoArrangeStrategy::Horizontal },
		{ "EComboGraphAutoArrangeStrategy::None", (int64)EComboGraphAutoArrangeStrategy::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComboGraphEditor_EComboGraphAutoArrangeStrategy_Statics::Enum_MetaDataParams[] = {
		{ "Horizontal.Comment", "/** Update Event */" },
		{ "Horizontal.Name", "EComboGraphAutoArrangeStrategy::Horizontal" },
		{ "Horizontal.ToolTip", "Update Event" },
		{ "ModuleRelativePath", "Public/ComboGraphEditorTypes.h" },
		{ "None.Comment", "/** None - invalid */" },
		{ "None.Hidden", "" },
		{ "None.Name", "EComboGraphAutoArrangeStrategy::None" },
		{ "None.ToolTip", "None - invalid" },
		{ "Vertical.Comment", "/** Setup Event */" },
		{ "Vertical.Name", "EComboGraphAutoArrangeStrategy::Vertical" },
		{ "Vertical.ToolTip", "Setup Event" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComboGraphEditor_EComboGraphAutoArrangeStrategy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComboGraphEditor,
		nullptr,
		"EComboGraphAutoArrangeStrategy",
		"EComboGraphAutoArrangeStrategy",
		Z_Construct_UEnum_ComboGraphEditor_EComboGraphAutoArrangeStrategy_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraphEditor_EComboGraphAutoArrangeStrategy_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraphEditor_EComboGraphAutoArrangeStrategy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComboGraphEditor_EComboGraphAutoArrangeStrategy_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComboGraphEditor_EComboGraphAutoArrangeStrategy()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphAutoArrangeStrategy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComboGraphAutoArrangeStrategy.InnerSingleton, Z_Construct_UEnum_ComboGraphEditor_EComboGraphAutoArrangeStrategy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComboGraphAutoArrangeStrategy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_Statics::EnumInfo[] = {
		{ EComboGraphAutoArrangeStrategy_StaticEnum, TEXT("EComboGraphAutoArrangeStrategy"), &Z_Registration_Info_UEnum_EComboGraphAutoArrangeStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 636842878U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_Statics::ScriptStructInfo[] = {
		{ FComboGraphInputsMetaData::StaticStruct, Z_Construct_UScriptStruct_FComboGraphInputsMetaData_Statics::NewStructOps, TEXT("ComboGraphInputsMetaData"), &Z_Registration_Info_UScriptStruct_ComboGraphInputsMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphInputsMetaData), 1176125697U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphPinNames, UComboGraphPinNames::StaticClass, TEXT("UComboGraphPinNames"), &Z_Registration_Info_UClass_UComboGraphPinNames, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphPinNames), 209371988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_3943069087(TEXT("/Script/ComboGraphEditor"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraphEditor_Public_ComboGraphEditorTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
