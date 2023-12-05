// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Settings/ComboGraphProjectSettings.h"
#include "ComboGraph/Public/ComboGraphRuntimeTypes.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphProjectSettings() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphProjectSettings();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphProjectSettings_NoRegister();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphDrawPinTypes();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphIconType();
	COMBOGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComboGraphDrawPinTypes;
	static UEnum* EComboGraphDrawPinTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphDrawPinTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComboGraphDrawPinTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComboGraph_EComboGraphDrawPinTypes, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("EComboGraphDrawPinTypes"));
		}
		return Z_Registration_Info_UEnum_EComboGraphDrawPinTypes.OuterSingleton;
	}
	template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphDrawPinTypes>()
	{
		return EComboGraphDrawPinTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_ComboGraph_EComboGraphDrawPinTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComboGraph_EComboGraphDrawPinTypes_Statics::Enumerators[] = {
		{ "EComboGraphDrawPinTypes::Both", (int64)EComboGraphDrawPinTypes::Both },
		{ "EComboGraphDrawPinTypes::Horizontal", (int64)EComboGraphDrawPinTypes::Horizontal },
		{ "EComboGraphDrawPinTypes::Vertical", (int64)EComboGraphDrawPinTypes::Vertical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComboGraph_EComboGraphDrawPinTypes_Statics::Enum_MetaDataParams[] = {
		{ "Both.Comment", "/** Setup Event */" },
		{ "Both.DisplayName", "Draw both Vertical and Horizontal pins" },
		{ "Both.Name", "EComboGraphDrawPinTypes::Both" },
		{ "Both.ToolTip", "Setup Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Not used right now but might be. Default behavior is render both */" },
#endif
		{ "Horizontal.Comment", "/** Update Event */" },
		{ "Horizontal.DisplayName", "Draw only Left and Right pins" },
		{ "Horizontal.Name", "EComboGraphDrawPinTypes::Horizontal" },
		{ "Horizontal.ToolTip", "Update Event" },
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Not used right now but might be. Default behavior is render both" },
#endif
		{ "Vertical.Comment", "/** None - invalid */" },
		{ "Vertical.DisplayName", "Draw only Top and Bottom pins" },
		{ "Vertical.Name", "EComboGraphDrawPinTypes::Vertical" },
		{ "Vertical.ToolTip", "None - invalid" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComboGraph_EComboGraphDrawPinTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		"EComboGraphDrawPinTypes",
		"EComboGraphDrawPinTypes",
		Z_Construct_UEnum_ComboGraph_EComboGraphDrawPinTypes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphDrawPinTypes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphDrawPinTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComboGraph_EComboGraphDrawPinTypes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphDrawPinTypes()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphDrawPinTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComboGraphDrawPinTypes.InnerSingleton, Z_Construct_UEnum_ComboGraph_EComboGraphDrawPinTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComboGraphDrawPinTypes.InnerSingleton;
	}
	void UComboGraphProjectSettings::StaticRegisterNativesUComboGraphProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphProjectSettings);
	UClass* Z_Construct_UClass_UComboGraphProjectSettings_NoRegister()
	{
		return UComboGraphProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MontageNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceNodeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceNodeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugActiveColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugActiveColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugFadeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugFadeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentMargin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentMargin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentInternalPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentInternalPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PinSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinPadding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PinPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextMapping_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ContextMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconsDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_IconsDataTable;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IconPreference_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconPreference_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IconPreference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IconSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMontageSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DynamicMontageSlotName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotifyStates_ValueProp;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_NotifyStates_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyStates_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NotifyStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSequencesNetworkedWarning_MetaData[];
#endif
		static void NewProp_bSequencesNetworkedWarning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSequencesNetworkedWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreStartupValidationWarnings_MetaData[];
#endif
		static void NewProp_bIgnoreStartupValidationWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreStartupValidationWarnings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/ComboGraphProjectSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_MontageNodeColor_MetaData[] = {
		{ "Category", "Colors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default background color for Montage nodes */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default background color for Montage nodes" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_MontageNodeColor = { "MontageNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, MontageNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_MontageNodeColor_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_MontageNodeColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_SequenceNodeColor_MetaData[] = {
		{ "Category", "Colors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default background color for Sequence nodes */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default background color for Sequence nodes" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_SequenceNodeColor = { "SequenceNodeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, SequenceNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_SequenceNodeColor_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_SequenceNodeColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DebugActiveColor_MetaData[] = {
		{ "Category", "Colors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default background color for combo nodes in active states (during debug) */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default background color for combo nodes in active states (during debug)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DebugActiveColor = { "DebugActiveColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, DebugActiveColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DebugActiveColor_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DebugActiveColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DebugFadeTime_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The duration used to interpolate the background color of nodes from Active to Default color when active states change (no longer active during debug).\n\x09 *\n\x09 * If set to 0.0, will disable color interpolation.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The duration used to interpolate the background color of nodes from Active to Default color when active states change (no longer active during debug).\n\nIf set to 0.0, will disable color interpolation." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DebugFadeTime = { "DebugFadeTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, DebugFadeTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DebugFadeTime_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DebugFadeTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContentMargin_MetaData[] = {
		{ "Category", "Size & Paddings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The padding around the main node box. */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The padding around the main node box." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContentMargin = { "ContentMargin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, ContentMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContentMargin_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContentMargin_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContentInternalPadding_MetaData[] = {
		{ "Category", "Size & Paddings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The padding within the main node box. */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The padding within the main node box." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContentInternalPadding = { "ContentInternalPadding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, ContentInternalPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContentInternalPadding_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContentInternalPadding_MetaData) }; // 2235102396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_PinSize_MetaData[] = {
		{ "Category", "Size & Paddings" },
		{ "ClampMin", "20.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The minimum desired sizes for pin connections. */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum desired sizes for pin connections." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_PinSize = { "PinSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, PinSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_PinSize_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_PinSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_PinPadding_MetaData[] = {
		{ "Category", "Size & Paddings" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The minimum amount of padding to draw around pin connections. */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum amount of padding to draw around pin connections." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_PinPadding = { "PinPadding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, PinPadding), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_PinPadding_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_PinPadding_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContextMapping_MetaData[] = {
		{ "Category", "Icons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enhanced Input Context Mapping to use to draw edge (transition) icons in Graphs */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input Context Mapping to use to draw edge (transition) icons in Graphs" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContextMapping = { "ContextMapping", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, ContextMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContextMapping_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContextMapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconsDataTable_MetaData[] = {
		{ "Category", "Icons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Path to the DataTable used to draw edge (transition) icons in Graph. Determine mappings between Keys and Icon textures.\n\x09 *\n\x09 * This is set by default to an internal DataTables (that you can find in `/ComboGraph/Xelu_Icons/`) that setup texture icons for every keyboard and gamepad key.\n\x09 *\n\x09 * Icons are coming from Xelu's Free Controllers & Keyboard Prompts: https://thoseawesomeguys.com/prompts/\n\x09 * Thanks to \"Nicolae (Xelu) Berbece\" and \"Those Awesome Guys\" to make it available in the public domain licence under Creative Commons 0 (CC0)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/ComboGraphEditor.ComboGraphInputsMetaData" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path to the DataTable used to draw edge (transition) icons in Graph. Determine mappings between Keys and Icon textures.\n\nThis is set by default to an internal DataTables (that you can find in `/ComboGraph/Xelu_Icons/`) that setup texture icons for every keyboard and gamepad key.\n\nIcons are coming from Xelu's Free Controllers & Keyboard Prompts: https://thoseawesomeguys.com/prompts/\nThanks to \"Nicolae (Xelu) Berbece\" and \"Those Awesome Guys\" to make it available in the public domain licence under Creative Commons 0 (CC0)" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconsDataTable = { "IconsDataTable", nullptr, (EPropertyFlags)0x0014000000014001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, IconsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconsDataTable_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconsDataTable_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconPreference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconPreference_MetaData[] = {
		{ "Category", "Icons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Icon preference to draw edge (transition) icons in Graph. Can be either Keyboard or Gamepad based */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icon preference to draw edge (transition) icons in Graph. Can be either Keyboard or Gamepad based" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconPreference = { "IconPreference", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, IconPreference), Z_Construct_UEnum_ComboGraph_EComboGraphIconType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconPreference_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconPreference_MetaData) }; // 3757666852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconSize_MetaData[] = {
		{ "Category", "Icons" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Size of Icons when drawing edges (transitions) in Combo Graphs */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of Icons when drawing edges (transitions) in Combo Graphs" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, IconSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconSize_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DynamicMontageSlotName_MetaData[] = {
		{ "Category", "Auto Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Slot Name to use with dynamic montages, created from sequences */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Slot Name to use with dynamic montages, created from sequences" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DynamicMontageSlotName = { "DynamicMontageSlotName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, DynamicMontageSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DynamicMontageSlotName_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DynamicMontageSlotName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_NotifyStates_ValueProp = { "NotifyStates", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FComboGraphNotifyStateAutoSetup, METADATA_PARAMS(0, nullptr) }; // 3709733393
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_NotifyStates_Key_KeyProp = { "NotifyStates_Key", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_NotifyStates_MetaData[] = {
		{ "Category", "Auto Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Map of Auto Setup Animation Notify States. The key is the Anim Notify State class, the value is the time start / end definition in percent */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of Auto Setup Animation Notify States. The key is the Anim Notify State class, the value is the time start / end definition in percent" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_NotifyStates = { "NotifyStates", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphProjectSettings, NotifyStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_NotifyStates_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_NotifyStates_MetaData) }; // 3709733393
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bSequencesNetworkedWarning_MetaData[] = {
		{ "Category", "Warnings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Flag to enable / disable message warnings (logs and on screen) about Sequences being used in a networked environment */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag to enable / disable message warnings (logs and on screen) about Sequences being used in a networked environment" },
#endif
	};
#endif
	void Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bSequencesNetworkedWarning_SetBit(void* Obj)
	{
		((UComboGraphProjectSettings*)Obj)->bSequencesNetworkedWarning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bSequencesNetworkedWarning = { "bSequencesNetworkedWarning", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComboGraphProjectSettings), &Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bSequencesNetworkedWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bSequencesNetworkedWarning_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bSequencesNetworkedWarning_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bIgnoreStartupValidationWarnings_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Flag to disable validation warnings on startup (about missing config for AbilitySystemGlobals). Config writable but not exposed in editor. */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/ComboGraphProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag to disable validation warnings on startup (about missing config for AbilitySystemGlobals). Config writable but not exposed in editor." },
#endif
	};
#endif
	void Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bIgnoreStartupValidationWarnings_SetBit(void* Obj)
	{
		((UComboGraphProjectSettings*)Obj)->bIgnoreStartupValidationWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bIgnoreStartupValidationWarnings = { "bIgnoreStartupValidationWarnings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComboGraphProjectSettings), &Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bIgnoreStartupValidationWarnings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bIgnoreStartupValidationWarnings_MetaData), Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bIgnoreStartupValidationWarnings_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_MontageNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_SequenceNodeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DebugActiveColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DebugFadeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContentMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContentInternalPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_PinSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_PinPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_ContextMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconsDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconPreference_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconPreference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_IconSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_DynamicMontageSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_NotifyStates_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_NotifyStates_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_NotifyStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bSequencesNetworkedWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphProjectSettings_Statics::NewProp_bIgnoreStartupValidationWarnings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphProjectSettings_Statics::ClassParams = {
		&UComboGraphProjectSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboGraphProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphProjectSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphProjectSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UComboGraphProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphProjectSettings.OuterSingleton, Z_Construct_UClass_UComboGraphProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphProjectSettings.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphProjectSettings>()
	{
		return UComboGraphProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphProjectSettings);
	UComboGraphProjectSettings::~UComboGraphProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_Statics::EnumInfo[] = {
		{ EComboGraphDrawPinTypes_StaticEnum, TEXT("EComboGraphDrawPinTypes"), &Z_Registration_Info_UEnum_EComboGraphDrawPinTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 987034241U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphProjectSettings, UComboGraphProjectSettings::StaticClass, TEXT("UComboGraphProjectSettings"), &Z_Registration_Info_UClass_UComboGraphProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphProjectSettings), 853833929U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_3118842742(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Settings_ComboGraphProjectSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
