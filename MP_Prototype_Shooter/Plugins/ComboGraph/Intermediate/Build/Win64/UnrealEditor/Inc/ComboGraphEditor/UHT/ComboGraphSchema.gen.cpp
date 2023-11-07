// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComboGraphEditor/Public/Graph/ComboGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboGraphSchema() {}
// Cross Module References
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNode_NoRegister();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeConduit_NoRegister();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphEdNodeEdge_NoRegister();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphSchema();
	COMBOGRAPHEDITOR_API UClass* Z_Construct_UClass_UComboGraphSchema_NoRegister();
	COMBOGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphSchemaAction_AddComment();
	COMBOGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeHorizontal();
	COMBOGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeVertical();
	COMBOGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge();
	COMBOGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode();
	COMBOGRAPHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_ComboGraphEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FComboGraphSchemaAction_AddComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FComboGraphSchemaAction_AddComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AddComment;
class UScriptStruct* FComboGraphSchemaAction_AddComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AddComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AddComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphSchemaAction_AddComment, (UObject*)Z_Construct_UPackage__Script_ComboGraphEditor(), TEXT("ComboGraphSchemaAction_AddComment"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AddComment.OuterSingleton;
}
template<> COMBOGRAPHEDITOR_API UScriptStruct* StaticStruct<FComboGraphSchemaAction_AddComment>()
{
	return FComboGraphSchemaAction_AddComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphSchemaAction_AddComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphSchemaAction_AddComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a comment to the graph */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphSchema.h" },
		{ "ToolTip", "Action to add a comment to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphSchemaAction_AddComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphSchemaAction_AddComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphSchemaAction_AddComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"ComboGraphSchemaAction_AddComment",
		nullptr,
		0,
		sizeof(FComboGraphSchemaAction_AddComment),
		alignof(FComboGraphSchemaAction_AddComment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_AddComment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphSchemaAction_AddComment_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphSchemaAction_AddComment()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AddComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AddComment.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphSchemaAction_AddComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AddComment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FComboGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FComboGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNode;
class UScriptStruct* FComboGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_ComboGraphEditor(), TEXT("ComboGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNode.OuterSingleton;
}
template<> COMBOGRAPHEDITOR_API UScriptStruct* StaticStruct<FComboGraphSchemaAction_NewNode>()
{
	return FComboGraphSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/ComboGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphSchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UComboGraphEdNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData), Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::NewProp_NodeTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"ComboGraphSchemaAction_NewNode",
		Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::PropPointers),
		sizeof(FComboGraphSchemaAction_NewNode),
		alignof(FComboGraphSchemaAction_NewNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FComboGraphSchemaAction_NewEdge>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FComboGraphSchemaAction_NewEdge cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewEdge;
class UScriptStruct* FComboGraphSchemaAction_NewEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge, (UObject*)Z_Construct_UPackage__Script_ComboGraphEditor(), TEXT("ComboGraphSchemaAction_NewEdge"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewEdge.OuterSingleton;
}
template<> COMBOGRAPHEDITOR_API UScriptStruct* StaticStruct<FComboGraphSchemaAction_NewEdge>()
{
	return FComboGraphSchemaAction_NewEdge::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add transition edge to the graph */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphSchema.h" },
		{ "ToolTip", "Action to add transition edge to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphSchemaAction_NewEdge>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/ComboGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphSchemaAction_NewEdge, NodeTemplate), Z_Construct_UClass_UComboGraphEdNodeEdge_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::NewProp_NodeTemplate_MetaData), Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::NewProp_NodeTemplate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::NewProp_NodeTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"ComboGraphSchemaAction_NewEdge",
		Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::PropPointers),
		sizeof(FComboGraphSchemaAction_NewEdge),
		alignof(FComboGraphSchemaAction_NewEdge),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewEdge.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewEdge.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewEdge.InnerSingleton;
	}

static_assert(std::is_polymorphic<FComboGraphSchemaAction_NewNodeConduit>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FComboGraphSchemaAction_NewNodeConduit cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNodeConduit;
class UScriptStruct* FComboGraphSchemaAction_NewNodeConduit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNodeConduit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNodeConduit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit, (UObject*)Z_Construct_UPackage__Script_ComboGraphEditor(), TEXT("ComboGraphSchemaAction_NewNodeConduit"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNodeConduit.OuterSingleton;
}
template<> COMBOGRAPHEDITOR_API UScriptStruct* StaticStruct<FComboGraphSchemaAction_NewNodeConduit>()
{
	return FComboGraphSchemaAction_NewNodeConduit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node conduit to the graph */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphSchema.h" },
		{ "ToolTip", "Action to add a node conduit to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphSchemaAction_NewNodeConduit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/ComboGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboGraphSchemaAction_NewNodeConduit, NodeTemplate), Z_Construct_UClass_UComboGraphEdNodeConduit_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::NewProp_NodeTemplate_MetaData), Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::NewProp_NodeTemplate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::NewProp_NodeTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"ComboGraphSchemaAction_NewNodeConduit",
		Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::PropPointers),
		sizeof(FComboGraphSchemaAction_NewNodeConduit),
		alignof(FComboGraphSchemaAction_NewNodeConduit),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNodeConduit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNodeConduit.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNodeConduit.InnerSingleton;
	}

static_assert(std::is_polymorphic<FComboGraphSchemaAction_AutoArrangeVertical>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FComboGraphSchemaAction_AutoArrangeVertical cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeVertical;
class UScriptStruct* FComboGraphSchemaAction_AutoArrangeVertical::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeVertical.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeVertical.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeVertical, (UObject*)Z_Construct_UPackage__Script_ComboGraphEditor(), TEXT("ComboGraphSchemaAction_AutoArrangeVertical"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeVertical.OuterSingleton;
}
template<> COMBOGRAPHEDITOR_API UScriptStruct* StaticStruct<FComboGraphSchemaAction_AutoArrangeVertical>()
{
	return FComboGraphSchemaAction_AutoArrangeVertical::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeVertical_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeVertical_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to auto arrange the graph (based off BehaviorTree one) */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphSchema.h" },
		{ "ToolTip", "Action to auto arrange the graph (based off BehaviorTree one)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeVertical_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphSchemaAction_AutoArrangeVertical>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeVertical_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"ComboGraphSchemaAction_AutoArrangeVertical",
		nullptr,
		0,
		sizeof(FComboGraphSchemaAction_AutoArrangeVertical),
		alignof(FComboGraphSchemaAction_AutoArrangeVertical),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeVertical_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeVertical_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeVertical()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeVertical.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeVertical.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeVertical_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeVertical.InnerSingleton;
	}

static_assert(std::is_polymorphic<FComboGraphSchemaAction_AutoArrangeHorizontal>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FComboGraphSchemaAction_AutoArrangeHorizontal cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeHorizontal;
class UScriptStruct* FComboGraphSchemaAction_AutoArrangeHorizontal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeHorizontal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeHorizontal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeHorizontal, (UObject*)Z_Construct_UPackage__Script_ComboGraphEditor(), TEXT("ComboGraphSchemaAction_AutoArrangeHorizontal"));
	}
	return Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeHorizontal.OuterSingleton;
}
template<> COMBOGRAPHEDITOR_API UScriptStruct* StaticStruct<FComboGraphSchemaAction_AutoArrangeHorizontal>()
{
	return FComboGraphSchemaAction_AutoArrangeHorizontal::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeHorizontal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeHorizontal_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to auto arrange the graph (based off BehaviorTree one). This ones tries to layout the graph from left to right */" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphSchema.h" },
		{ "ToolTip", "Action to auto arrange the graph (based off BehaviorTree one). This ones tries to layout the graph from left to right" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeHorizontal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboGraphSchemaAction_AutoArrangeHorizontal>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeHorizontal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"ComboGraphSchemaAction_AutoArrangeHorizontal",
		nullptr,
		0,
		sizeof(FComboGraphSchemaAction_AutoArrangeHorizontal),
		alignof(FComboGraphSchemaAction_AutoArrangeHorizontal),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeHorizontal_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeHorizontal_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeHorizontal()
	{
		if (!Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeHorizontal.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeHorizontal.InnerSingleton, Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeHorizontal_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeHorizontal.InnerSingleton;
	}
	void UComboGraphSchema::StaticRegisterNativesUComboGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboGraphSchema);
	UClass* Z_Construct_UClass_UComboGraphSchema_NoRegister()
	{
		return UComboGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UComboGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_ComboGraphEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphSchema_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/ComboGraphSchema.h" },
		{ "ModuleRelativePath", "Public/Graph/ComboGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboGraphSchema_Statics::ClassParams = {
		&UComboGraphSchema::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboGraphSchema_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UComboGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UComboGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboGraphSchema.OuterSingleton, Z_Construct_UClass_UComboGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComboGraphSchema.OuterSingleton;
	}
	template<> COMBOGRAPHEDITOR_API UClass* StaticClass<UComboGraphSchema>()
	{
		return UComboGraphSchema::StaticClass();
	}
	UComboGraphSchema::UComboGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboGraphSchema);
	UComboGraphSchema::~UComboGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_ComboGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_ComboGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FComboGraphSchemaAction_AddComment::StaticStruct, Z_Construct_UScriptStruct_FComboGraphSchemaAction_AddComment_Statics::NewStructOps, TEXT("ComboGraphSchemaAction_AddComment"), &Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AddComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphSchemaAction_AddComment), 1493373408U) },
		{ FComboGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("ComboGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphSchemaAction_NewNode), 1731569914U) },
		{ FComboGraphSchemaAction_NewEdge::StaticStruct, Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewEdge_Statics::NewStructOps, TEXT("ComboGraphSchemaAction_NewEdge"), &Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphSchemaAction_NewEdge), 2682774408U) },
		{ FComboGraphSchemaAction_NewNodeConduit::StaticStruct, Z_Construct_UScriptStruct_FComboGraphSchemaAction_NewNodeConduit_Statics::NewStructOps, TEXT("ComboGraphSchemaAction_NewNodeConduit"), &Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_NewNodeConduit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphSchemaAction_NewNodeConduit), 2406415625U) },
		{ FComboGraphSchemaAction_AutoArrangeVertical::StaticStruct, Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeVertical_Statics::NewStructOps, TEXT("ComboGraphSchemaAction_AutoArrangeVertical"), &Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeVertical, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphSchemaAction_AutoArrangeVertical), 147281909U) },
		{ FComboGraphSchemaAction_AutoArrangeHorizontal::StaticStruct, Z_Construct_UScriptStruct_FComboGraphSchemaAction_AutoArrangeHorizontal_Statics::NewStructOps, TEXT("ComboGraphSchemaAction_AutoArrangeHorizontal"), &Z_Registration_Info_UScriptStruct_ComboGraphSchemaAction_AutoArrangeHorizontal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboGraphSchemaAction_AutoArrangeHorizontal), 295585510U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_ComboGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComboGraphSchema, UComboGraphSchema::StaticClass, TEXT("UComboGraphSchema"), &Z_Registration_Info_UClass_UComboGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboGraphSchema), 696248084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_ComboGraphSchema_h_3891840168(TEXT("/Script/ComboGraphEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_ComboGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_ComboGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_ComboGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ComboGraph_Source_ComboGraphEditor_Public_Graph_ComboGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
