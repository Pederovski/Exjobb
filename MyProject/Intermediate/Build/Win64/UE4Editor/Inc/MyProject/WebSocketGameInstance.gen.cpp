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
	MYPROJECT_API UFunction* Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UClass* Z_Construct_UClass_UWebSocketGameInstance_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UWebSocketGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics
	{
		struct _Script_MyProject_eventNewTypeDelegae_Parms
		{
			int32 number;
			int32 number2;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_number;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_number2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::NewProp_number = { "number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyProject_eventNewTypeDelegae_Parms, number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::NewProp_number2 = { "number2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyProject_eventNewTypeDelegae_Parms, number2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::NewProp_number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::NewProp_number2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MyProject, nullptr, "NewTypeDelegae__DelegateSignature", nullptr, nullptr, sizeof(_Script_MyProject_eventNewTypeDelegae_Parms), Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UWebSocketGameInstance::exectestDelegate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->testDelegate();
		P_NATIVE_END;
	}
	static FName NAME_UWebSocketGameInstance_OnUsed = FName(TEXT("OnUsed"));
	int32 UWebSocketGameInstance::OnUsed()
	{
		WebSocketGameInstance_eventOnUsed_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UWebSocketGameInstance_OnUsed),&Parms);
		return Parms.ReturnValue;
	}
	void UWebSocketGameInstance::StaticRegisterNativesUWebSocketGameInstance()
	{
		UClass* Class = UWebSocketGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "testDelegate", &UWebSocketGameInstance::exectestDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSocketGameInstance_OnUsed_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWebSocketGameInstance_OnUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketGameInstance_eventOnUsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketGameInstance_OnUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketGameInstance_OnUsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketGameInstance_OnUsed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION(BlueprintImplementableEvent)\n//void TriggerPuzzle1event();\n//UFUNCTION(BlueprintImplementableEvent)\n//void GoToControlRoom();\n//UFUNCTION(BlueprintImplementableEvent)\n//void GoToPuzzle1();\n//UFUNCTION(BlueprintImplementableEvent)\n//void GoToPuzzle2();\n//UFUNCTION(BlueprintImplementableEvent)\n//void GoToPuzzle();\n" },
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
		{ "ToolTip", "UFUNCTION(BlueprintImplementableEvent)\nvoid TriggerPuzzle1event();\nUFUNCTION(BlueprintImplementableEvent)\nvoid GoToControlRoom();\nUFUNCTION(BlueprintImplementableEvent)\nvoid GoToPuzzle1();\nUFUNCTION(BlueprintImplementableEvent)\nvoid GoToPuzzle2();\nUFUNCTION(BlueprintImplementableEvent)\nvoid GoToPuzzle();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketGameInstance_OnUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketGameInstance, nullptr, "OnUsed", nullptr, nullptr, sizeof(WebSocketGameInstance_eventOnUsed_Parms), Z_Construct_UFunction_UWebSocketGameInstance_OnUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_OnUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketGameInstance_OnUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_OnUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketGameInstance_OnUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketGameInstance_OnUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketGameInstance_testDelegate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketGameInstance_testDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketGameInstance_testDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketGameInstance, nullptr, "testDelegate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketGameInstance_testDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_testDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketGameInstance_testDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketGameInstance_testDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSocketGameInstance_NoRegister()
	{
		return UWebSocketGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UWebSocketGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MyDelegate;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSocketGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketGameInstance_OnUsed, "OnUsed" }, // 1771609079
		{ &Z_Construct_UFunction_UWebSocketGameInstance_testDelegate, "testDelegate" }, // 3937574439
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebSocketGameInstance.h" },
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_MyDelegate_MetaData[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_MyDelegate = { "MyDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, MyDelegate), Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_MyDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_MyDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_OutputText_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "WebSocketGameInstance" },
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_OutputText = { "OutputText", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, OutputText), METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_OutputText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_OutputText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebSocketGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_MyDelegate,
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
		FuncInfo,
		Z_Construct_UClass_UWebSocketGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UWebSocketGameInstance, 2835029925);
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
