// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraph/Public/Graph/ComboGraphNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphNodeBase() {}
// Cross Module References
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphEdge_NoRegister();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeBase();
	COMBOGRAPH_API UClass* Z_Construct_UClass_UComboGraphNodeBase_NoRegister();
	COMBOGRAPH_API UEnum* Z_Construct_UEnum_ComboGraph_EACENodeLimit();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ComboGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EACENodeLimit;
	static UEnum* EACENodeLimit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EACENodeLimit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EACENodeLimit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ComboGraph_EACENodeLimit, (UObject*)Z_Construct_UPackage__Script_ComboGraph(), TEXT("EACENodeLimit"));
		}
		return Z_Registration_Info_UEnum_EACENodeLimit.OuterSingleton;
	}
	template<> COMBOGRAPH_API UEnum* StaticEnum<EACENodeLimit>()
	{
		return EACENodeLimit_StaticEnum();
	}
	struct Z_Construct_UEnum_ComboGraph_EACENodeLimit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ComboGraph_EACENodeLimit_Statics::Enumerators[] = {
		{ "EACENodeLimit::Unlimited", (int64)EACENodeLimit::Unlimited },
		{ "EACENodeLimit::Limited", (int64)EACENodeLimit::Limited },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ComboGraph_EACENodeLimit_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Limited.Name", "EACENodeLimit::Limited" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeBase.h" },
		{ "Unlimited.Name", "EACENodeLimit::Unlimited" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ComboGraph_EACENodeLimit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ComboGraph,
		nullptr,
		"EACENodeLimit",
		"EACENodeLimit",
		Z_Construct_UEnum_ComboGraph_EACENodeLimit_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EACENodeLimit_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ComboGraph_EACENodeLimit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ComboGraph_EACENodeLimit_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ComboGraph_EACENodeLimit()
	{
		if (!Z_Registration_Info_UEnum_EACENodeLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EACENodeLimit.InnerSingleton, Z_Construct_UEnum_ComboGraph_EACENodeLimit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EACENodeLimit.InnerSingleton;
	}
	DEFINE_FUNCTION(UComboGraphNodeBase::execIsLeafNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLeafNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboGraphNodeBase::execGetEdge)
	{
		P_GET_OBJECT(UComboGraphNodeBase,Z_Param_ChildNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UComboGraphEdge**)Z_Param__Result=P_THIS->GetEdge(Z_Param_ChildNode);
		P_NATIVE_END;
	}
	void UComboGraphNodeBase::StaticRegisterNativesUComboGraphNodeBase()
	{
		UClass* Class = UComboGraphNodeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEdge", &UComboGraphNodeBase::execGetEdge },
			{ "IsLeafNode", &UComboGraphNodeBase::execIsLeafNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics
	{
		struct ComboGraphNodeBase_eventGetEdge_Parms
		{
			UComboGraphNodeBase* ChildNode;
			UComboGraphEdge* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildNode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::NewProp_ChildNode = { "ChildNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeBase_eventGetEdge_Parms, ChildNode), Z_Construct_UClass_UComboGraphNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ComboGraphNodeBase_eventGetEdge_Parms, ReturnValue), Z_Construct_UClass_UComboGraphEdge_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::NewProp_ChildNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeBase, nullptr, "GetEdge", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::ComboGraphNodeBase_eventGetEdge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::ComboGraphNodeBase_eventGetEdge_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeBase_GetEdge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeBase_GetEdge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics
	{
		struct ComboGraphNodeBase_eventIsLeafNode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComboGraphNodeBase_eventIsLeafNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ComboGraphNodeBase_eventIsLeafNode_Parms), &Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combo Graph" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboGraphNodeBase, nullptr, "IsLeafNode", nullptr, nullptr, Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::ComboGraphNodeBase_eventIsLeafNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::ComboGraphNodeBase_eventIsLeafNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphNodeBase);
	UClass* Z_Construct_UClass_UComboGraphNodeBase_NoRegister()
	{
		return UComboGraphNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildrenNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildrenNodes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentNodes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Edges_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Edges_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Edges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTitle_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NodeTitle;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextMenuName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ContextMenuName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeClassNameInContextMenu_MetaData[];
#endif
		static void NewProp_bIncludeClassNameInContextMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeClassNameInContextMenu;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraph,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboGraphNodeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboGraphNodeBase_GetEdge, "GetEdge" }, // 3739459383
		{ &Z_Construct_UFunction_UComboGraphNodeBase_IsLeafNode, "IsLeafNode" }, // 3270326556
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Base Class for all Combo Graph nodes (Edges, Anim based and conduit)\n *\n *  Holds information and API related to debug states.\n */" },
		{ "IncludePath", "Graph/ComboGraphNodeBase.h" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeBase.h" },
		{ "ToolTip", "Base Class for all Combo Graph nodes (Edges, Anim based and conduit)\n\nHolds information and API related to debug states." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ChildrenNodes_Inner = { "ChildrenNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboGraphNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ChildrenNodes_MetaData[] = {
		{ "Category", "Combo Graph" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ChildrenNodes = { "ChildrenNodes", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeBase, ChildrenNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ChildrenNodes_MetaData), Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ChildrenNodes_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ParentNodes_Inner = { "ParentNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboGraphNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ParentNodes_MetaData[] = {
		{ "Category", "Combo Graph" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ParentNodes = { "ParentNodes", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeBase, ParentNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ParentNodes_MetaData), Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ParentNodes_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_Edges_ValueProp = { "Edges", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UComboGraphEdge_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_Edges_Key_KeyProp = { "Edges_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UComboGraphNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_Edges_MetaData[] = {
		{ "Category", "Combo Graph" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeBase, Edges), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_Edges_MetaData), Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_Edges_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_NodeTitle_MetaData[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** When not empty, will draw title with specified value instead of using Animation Asset name (Montage or Sequence) */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeBase.h" },
		{ "ToolTip", "When not empty, will draw title with specified value instead of using Animation Asset name (Montage or Sequence)" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_NodeTitle = { "NodeTitle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeBase, NodeTitle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_NodeTitle_MetaData), Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_NodeTitle_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ContextMenuName_MetaData[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/**\n\x09 * ContextMenuName is used in Combo Graph to generate context menu items (upon right click in the graph to add new nodes)\n\x09 *\n\x09 * Split up ContextMenuName by \"|\" to create a top category if there is more than one level.\n\x09 *\n\x09 * You can leave this empty to exclude this class from being considered when Combo Graph generates a context menu.\n\x09 */" },
		{ "HideInComboGraphDetailsPanel", "" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeBase.h" },
		{ "ToolTip", "ContextMenuName is used in Combo Graph to generate context menu items (upon right click in the graph to add new nodes)\n\nSplit up ContextMenuName by \"|\" to create a top category if there is more than one level.\n\nYou can leave this empty to exclude this class from being considered when Combo Graph generates a context menu." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ContextMenuName = { "ContextMenuName", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboGraphNodeBase, ContextMenuName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ContextMenuName_MetaData), Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ContextMenuName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_bIncludeClassNameInContextMenu_MetaData[] = {
		{ "Category", "Combo Graph" },
		{ "Comment", "/** Set it to false to prevent context menu in graph to include the BP Class name */" },
		{ "HideInComboGraphDetailsPanel", "" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphNodeBase.h" },
		{ "ToolTip", "Set it to false to prevent context menu in graph to include the BP Class name" },
	};
#endif
	void Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_bIncludeClassNameInContextMenu_SetBit(void* Obj)
	{
		((UComboGraphNodeBase*)Obj)->bIncludeClassNameInContextMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_bIncludeClassNameInContextMenu = { "bIncludeClassNameInContextMenu", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComboGraphNodeBase), &Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_bIncludeClassNameInContextMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_bIncludeClassNameInContextMenu_MetaData), Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_bIncludeClassNameInContextMenu_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboGraphNodeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ChildrenNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ChildrenNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ParentNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ParentNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_Edges_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_Edges_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_Edges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_NodeTitle,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_ContextMenuName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboGraphNodeBase_Statics::NewProp_bIncludeClassNameInContextMenu,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphNodeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphNodeBase_Statics::ClassParams = {
		&UComboGraphNodeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComboGraphNodeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphNodeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphNodeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UComboGraphNodeBase()
	{
		if (!Z_Registration_Info_UClass_UComboGraphNodeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphNodeBase.OuterSingleton, Z_Construct_UClass_UComboGraphNodeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphNodeBase.OuterSingleton;
	}
	template<> COMBOGRAPH_API UClass* StaticClass<UComboGraphNodeBase>()
	{
		return UComboGraphNodeBase::StaticClass();
	}
	UComboGraphNodeBase::UComboGraphNodeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphNodeBase);
	UComboGraphNodeBase::~UComboGraphNodeBase() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_Statics::EnumInfo[] = {
		{ EACENodeLimit_StaticEnum, TEXT("EACENodeLimit"), &Z_Registration_Info_UEnum_EACENodeLimit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 258370850U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphNodeBase, UComboGraphNodeBase::StaticClass, TEXT("UComboGraphNodeBase"), &Z_Registration_Info_UClass_UComboGraphNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphNodeBase), 2226182042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_3054791691(TEXT("/Script/ComboGraph"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraph_Public_Graph_ComboGraphNodeBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
