// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Graph/ComboGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraph() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraph();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraph_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeBase_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeEntry_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeMontage_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeSequence_NoRegister();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphIconType();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphSelectedAppMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComboGraphSelectedAppMode;
	static UEnum* EComboGraphSelectedAppMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphSelectedAppMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComboGraphSelectedAppMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComboGraph_EComboGraphSelectedAppMode, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("EComboGraphSelectedAppMode"));
		}
		return Z_Registration_Info_UEnum_EComboGraphSelectedAppMode.OuterSingleton;
	}
	template<> COMBOGRAPH_API UEnum* StaticEnum<EComboGraphSelectedAppMode>()
	{
		return EComboGraphSelectedAppMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ComboGraph_EComboGraphSelectedAppMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComboGraph_EComboGraphSelectedAppMode_Statics::Enumerators[] = {
		{ "EComboGraphSelectedAppMode::Persona", (int64)EComboGraphSelectedAppMode::Persona },
		{ "EComboGraphSelectedAppMode::Graph", (int64)EComboGraphSelectedAppMode::Graph },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComboGraph_EComboGraphSelectedAppMode_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Last Selected Editor App Mode */" },
#endif
		{ "Graph.Comment", "/** Graph Mode */" },
		{ "Graph.DisplayName", "Combo Graph Mode" },
		{ "Graph.Name", "EComboGraphSelectedAppMode::Graph" },
		{ "Graph.ToolTip", "Graph Mode" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
		{ "Persona.Comment", "/** Persona Mode */" },
		{ "Persona.DisplayName", "Persona Preview Mode" },
		{ "Persona.Name", "EComboGraphSelectedAppMode::Persona" },
		{ "Persona.ToolTip", "Persona Mode" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last Selected Editor App Mode" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComboGraph_EComboGraphSelectedAppMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		"EComboGraphSelectedAppMode",
		"EComboGraphSelectedAppMode",
		Z_Construct_UEnum_ComboGraph_EComboGraphSelectedAppMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphSelectedAppMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EComboGraphSelectedAppMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComboGraph_EComboGraphSelectedAppMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComboGraph_EComboGraphSelectedAppMode()
	{
		if (!Z_Registration_Info_UEnum_EComboGraphSelectedAppMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComboGraphSelectedAppMode.InnerSingleton, Z_Construct_UEnum_ComboGraph_EComboGraphSelectedAppMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComboGraphSelectedAppMode.InnerSingleton;
	}
	void UComboGraph::StaticRegisterNativesUComboGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraph);
	UClass* Z_Construct_UClass_UComboGraph_NoRegister()
	{
		return UComboGraph::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EntryNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FirstNode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNodeMontageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultNodeMontageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNodeSequenceType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultNodeSequenceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultInputAction;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorGraph;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectedAppMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAppMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectedAppMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeCyclical_MetaData[];
#endif
		static void NewProp_bCanBeCyclical_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeCyclical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextMapping_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ContextMapping;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IconPreference_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconPreference_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IconPreference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Combo Graph | Nodes Combo Graph | Transitions Combo Graph | Icons" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Combo Graph Assets provide a way to visually design combo strings and link montages together.\n *\n * Combo Graphs are then run with custom Ability Tasks from within a Gameplay Ability.\n */" },
#endif
		{ "IncludePath", "Graph/ComboGraph.h" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combo Graph Assets provide a way to visually design combo strings and link montages together.\n\nCombo Graphs are then run with custom Ability Tasks from within a Gameplay Ability." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::NewProp_EntryNode_MetaData[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Represents the top level combo node direct child of entry node. */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the top level combo node direct child of entry node." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_EntryNode = { "EntryNode", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraph, EntryNode), Z_Construct_UClass_UComboGraphNodeEntry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::NewProp_EntryNode_MetaData), Z_Construct_UClass_UComboGraph_Statics::NewProp_EntryNode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::NewProp_FirstNode_MetaData[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Represents the top level combo node direct child of entry node. */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents the top level combo node direct child of entry node." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_FirstNode = { "FirstNode", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraph, FirstNode), Z_Construct_UClass_UComboGraphNodeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::NewProp_FirstNode_MetaData), Z_Construct_UClass_UComboGraph_Statics::NewProp_FirstNode_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboGraphNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::NewProp_RootNodes_MetaData[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Holds any combo nodes with no direct parent\n\x09 *\n\x09 * Note: should usually hold only one node, the first one. If more than one,\n\x09 * means that some combo nodes are present in graph but not linked to a valid\n\x09 * path from entry node as all nodes below entry should have direct\n\x09 * parent / child relationship.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds any combo nodes with no direct parent\n\nNote: should usually hold only one node, the first one. If more than one,\nmeans that some combo nodes are present in graph but not linked to a valid\npath from entry node as all nodes below entry should have direct\nparent / child relationship." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraph, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::NewProp_RootNodes_MetaData), Z_Construct_UClass_UComboGraph_Statics::NewProp_RootNodes_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboGraphNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::NewProp_AllNodes_MetaData[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds all combo nodes defined for this graph */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds all combo nodes defined for this graph" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraph, AllNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::NewProp_AllNodes_MetaData), Z_Construct_UClass_UComboGraph_Statics::NewProp_AllNodes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultNodeMontageType_MetaData[] = {
		{ "Category", "Combo Graph | Nodes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Node Class type used for montages assets when dropped in a graph, or dropped on an existing node pin.\n\x09 *\n\x09 * This property lets you customize which class Combo Graph will use to create a new montage node in these situations.\n\x09 * Mainly useful if you have a custom Combo Node Montage BP or native subclass.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Node Class type used for montages assets when dropped in a graph, or dropped on an existing node pin.\n\nThis property lets you customize which class Combo Graph will use to create a new montage node in these situations.\nMainly useful if you have a custom Combo Node Montage BP or native subclass." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultNodeMontageType = { "DefaultNodeMontageType", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraph, DefaultNodeMontageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UComboGraphNodeMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultNodeMontageType_MetaData), Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultNodeMontageType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultNodeSequenceType_MetaData[] = {
		{ "Category", "Combo Graph | Nodes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Node Class type used for sequence assets when dropped in a graph, or dropped on an existing node pin.\n\x09 *\n\x09 * This property lets you customize which class Combo Graph will use to create a new sequence node in these situations.\n\x09 * Mainly useful if you have a custom Combo Node Montage BP or native subclass.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Node Class type used for sequence assets when dropped in a graph, or dropped on an existing node pin.\n\nThis property lets you customize which class Combo Graph will use to create a new sequence node in these situations.\nMainly useful if you have a custom Combo Node Montage BP or native subclass." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultNodeSequenceType = { "DefaultNodeSequenceType", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraph, DefaultNodeSequenceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UComboGraphNodeSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultNodeSequenceType_MetaData), Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultNodeSequenceType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultInputAction_MetaData[] = {
		{ "Category", "Combo Graph | Transitions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Default Input Action to use when creating new connections.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Input Action to use when creating new connections." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultInputAction = { "DefaultInputAction", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraph, DefaultInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultInputAction_MetaData), Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultInputAction_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::NewProp_EditorGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_EditorGraph = { "EditorGraph", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraph, EditorGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::NewProp_EditorGraph_MetaData), Z_Construct_UClass_UComboGraph_Statics::NewProp_EditorGraph_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_SelectedAppMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::NewProp_SelectedAppMode_MetaData[] = {
		{ "Category", "Combo Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Last selected app mode, stored here to persist across re-opening and restart of the editor */" },
#endif
		{ "HideInComboGraphDetailsPanel", "" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Last selected app mode, stored here to persist across re-opening and restart of the editor" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_SelectedAppMode = { "SelectedAppMode", nullptr, (EPropertyFlags)0x0010000800030001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraph, SelectedAppMode), Z_Construct_UEnum_ComboGraph_EComboGraphSelectedAppMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::NewProp_SelectedAppMode_MetaData), Z_Construct_UClass_UComboGraph_Statics::NewProp_SelectedAppMode_MetaData) }; // 2035602493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::NewProp_bCanBeCyclical_MetaData[] = {
		{ "Category", "Combo Graph | Transitions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Determine if we can have cycles or not in a graph */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determine if we can have cycles or not in a graph" },
#endif
	};
#endif
	void Z_Construct_UClass_UComboGraph_Statics::NewProp_bCanBeCyclical_SetBit(void* Obj)
	{
		((UComboGraph*)Obj)->bCanBeCyclical = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_bCanBeCyclical = { "bCanBeCyclical", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComboGraph), &Z_Construct_UClass_UComboGraph_Statics::NewProp_bCanBeCyclical_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::NewProp_bCanBeCyclical_MetaData), Z_Construct_UClass_UComboGraph_Statics::NewProp_bCanBeCyclical_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::NewProp_ContextMapping_MetaData[] = {
		{ "Category", "Combo Graph | Icons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enhanced Input Context Mapping to use to draw edge (transition) icons in Graphs (if not set, will fallback to the one defined in Project Settings) */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input Context Mapping to use to draw edge (transition) icons in Graphs (if not set, will fallback to the one defined in Project Settings)" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_ContextMapping = { "ContextMapping", nullptr, (EPropertyFlags)0x0014000800010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraph, ContextMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::NewProp_ContextMapping_MetaData), Z_Construct_UClass_UComboGraph_Statics::NewProp_ContextMapping_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_IconPreference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::NewProp_IconPreference_MetaData[] = {
		{ "Category", "Combo Graph | Icons" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Icon preference to draw edge (transition) icons in Graph. Can be either Keyboard or Gamepad based */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icon preference to draw edge (transition) icons in Graph. Can be either Keyboard or Gamepad based" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_IconPreference = { "IconPreference", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraph, IconPreference), Z_Construct_UEnum_ComboGraph_EComboGraphIconType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::NewProp_IconPreference_MetaData), Z_Construct_UClass_UComboGraph_Statics::NewProp_IconPreference_MetaData) }; // 3757666852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraph_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The default skeletal mesh to use when previewing this asset */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/ComboGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default skeletal mesh to use when previewing this asset" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UComboGraph_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0044010800200000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraph, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::NewProp_PreviewSkeletalMesh_MetaData), Z_Construct_UClass_UComboGraph_Statics::NewProp_PreviewSkeletalMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_EntryNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_FirstNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_RootNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_RootNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_AllNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_AllNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultNodeMontageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultNodeSequenceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_DefaultInputAction,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_EditorGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_SelectedAppMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_SelectedAppMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_bCanBeCyclical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_ContextMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_IconPreference_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_IconPreference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraph_Statics::NewProp_PreviewSkeletalMesh,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UComboGraph_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UComboGraph, IInterface_PreviewMeshProvider), false },  // 539613644
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraph_Statics::ClassParams = {
		&UComboGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComboGraph_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraph_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraph_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraph()
	{
		if (!Z_Registration_Info_UClass_UComboGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraph.OuterSingleton, Z_Construct_UClass_UComboGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraph.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraph>()
	{
		return UComboGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraph);
	UComboGraph::~UComboGraph() {}
	struct Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_Statics::EnumInfo[] = {
		{ EComboGraphSelectedAppMode_StaticEnum, TEXT("EComboGraphSelectedAppMode"), &Z_Registration_Info_UEnum_EComboGraphSelectedAppMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2035602493U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraph, UComboGraph::StaticClass, TEXT("UComboGraph"), &Z_Registration_Info_UClass_UComboGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraph), 258365913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_1071950746(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_wajee_OneDrive_Documents_Unreal_Projects_TPS_Prototype_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraph_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
