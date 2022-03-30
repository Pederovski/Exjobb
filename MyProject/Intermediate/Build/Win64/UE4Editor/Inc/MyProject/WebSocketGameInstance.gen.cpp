// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/WebSocketGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocketGameInstance() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UWebSocketGameInstance_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UWebSocketGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UWebSocketGameInstance::StaticRegisterNativesUWebSocketGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UWebSocketGameInstance_NoRegister()
	{
		return UWebSocketGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UWebSocketGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSocketGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebSocketGameInstance.h" },
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_OutputText_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "WebSocketGameInstance" },
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_OutputText = { "OutputText", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, OutputText), METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_OutputText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_OutputText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebSocketGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_OutputText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSocketGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketGameInstance_Statics::ClassParams = {
		&UWebSocketGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebSocketGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSocketGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSocketGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketGameInstance, 3695234870);
	template<> MYPROJECT_API UClass* StaticClass<UWebSocketGameInstance>()
	{
		return UWebSocketGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketGameInstance(Z_Construct_UClass_UWebSocketGameInstance, &UWebSocketGameInstance::StaticClass, TEXT("/Script/MyProject"), TEXT("UWebSocketGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
