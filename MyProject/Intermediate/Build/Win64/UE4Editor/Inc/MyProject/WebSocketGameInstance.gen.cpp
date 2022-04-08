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
			FString code;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_number;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_code;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::NewProp_number = { "number", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyProject_eventNewTypeDelegae_Parms, number), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_MyProject_eventNewTypeDelegae_Parms, code), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::NewProp_number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature_Statics::NewProp_code,
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
	DEFINE_FUNCTION(UWebSocketGameInstance::execSendPlayerInputPuzzle3)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPlayerInputPuzzle3(Z_Param_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketGameInstance::execSendPlayerInputPuzzle2)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPlayerInputPuzzle2(Z_Param_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketGameInstance::execSendPlayerInputPuzzle1)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPlayerInputPuzzle1(Z_Param_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketGameInstance::execTriggerPuzzle3event)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerPuzzle3event();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketGameInstance::execTriggerPuzzle2event)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerPuzzle2event();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketGameInstance::execTriggerPuzzle1event)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerPuzzle1event();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketGameInstance::execGoToControlRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToControlRoom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketGameInstance::execGoToPuzzle3)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToPuzzle3();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketGameInstance::execGoToPuzzle2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToPuzzle2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketGameInstance::execGoToPuzzle1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GoToPuzzle1();
		P_NATIVE_END;
	}
	void UWebSocketGameInstance::StaticRegisterNativesUWebSocketGameInstance()
	{
		UClass* Class = UWebSocketGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GoToControlRoom", &UWebSocketGameInstance::execGoToControlRoom },
			{ "GoToPuzzle1", &UWebSocketGameInstance::execGoToPuzzle1 },
			{ "GoToPuzzle2", &UWebSocketGameInstance::execGoToPuzzle2 },
			{ "GoToPuzzle3", &UWebSocketGameInstance::execGoToPuzzle3 },
			{ "SendPlayerInputPuzzle1", &UWebSocketGameInstance::execSendPlayerInputPuzzle1 },
			{ "SendPlayerInputPuzzle2", &UWebSocketGameInstance::execSendPlayerInputPuzzle2 },
			{ "SendPlayerInputPuzzle3", &UWebSocketGameInstance::execSendPlayerInputPuzzle3 },
			{ "TriggerPuzzle1event", &UWebSocketGameInstance::execTriggerPuzzle1event },
			{ "TriggerPuzzle2event", &UWebSocketGameInstance::execTriggerPuzzle2event },
			{ "TriggerPuzzle3event", &UWebSocketGameInstance::execTriggerPuzzle3event },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSocketGameInstance_GoToControlRoom_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketGameInstance_GoToControlRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketGameInstance_GoToControlRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketGameInstance, nullptr, "GoToControlRoom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketGameInstance_GoToControlRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_GoToControlRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketGameInstance_GoToControlRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketGameInstance_GoToControlRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle1_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle1_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Functions that call the above delegates\n" },
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
		{ "ToolTip", "Functions that call the above delegates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketGameInstance, nullptr, "GoToPuzzle1", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketGameInstance, nullptr, "GoToPuzzle2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketGameInstance, nullptr, "GoToPuzzle3", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle1_Statics
	{
		struct WebSocketGameInstance_eventSendPlayerInputPuzzle1_Parms
		{
			FString text;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle1_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketGameInstance_eventSendPlayerInputPuzzle1_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle1_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketGameInstance, nullptr, "SendPlayerInputPuzzle1", nullptr, nullptr, sizeof(WebSocketGameInstance_eventSendPlayerInputPuzzle1_Parms), Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle2_Statics
	{
		struct WebSocketGameInstance_eventSendPlayerInputPuzzle2_Parms
		{
			FString text;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle2_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketGameInstance_eventSendPlayerInputPuzzle2_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle2_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketGameInstance, nullptr, "SendPlayerInputPuzzle2", nullptr, nullptr, sizeof(WebSocketGameInstance_eventSendPlayerInputPuzzle2_Parms), Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle3_Statics
	{
		struct WebSocketGameInstance_eventSendPlayerInputPuzzle3_Parms
		{
			FString text;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle3_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketGameInstance_eventSendPlayerInputPuzzle3_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle3_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketGameInstance, nullptr, "SendPlayerInputPuzzle3", nullptr, nullptr, sizeof(WebSocketGameInstance_eventSendPlayerInputPuzzle3_Parms), Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle1event_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle1event_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle1event_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketGameInstance, nullptr, "TriggerPuzzle1event", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle1event_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle1event_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle1event()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle1event_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle2event_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle2event_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle2event_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketGameInstance, nullptr, "TriggerPuzzle2event", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle2event_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle2event_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle2event()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle2event_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle3event_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle3event_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle3event_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketGameInstance, nullptr, "TriggerPuzzle3event", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle3event_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle3event_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle3event()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle3event_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegatePuzzle1_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DelegatePuzzle1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegatePuzzle2_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DelegatePuzzle2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegatePuzzle3_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DelegatePuzzle3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ControlRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegateTriggerPuzzle1_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DelegateTriggerPuzzle1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegateTriggerPuzzle2_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DelegateTriggerPuzzle2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegateTriggerPuzzle3_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DelegateTriggerPuzzle3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegateSendPlayerInputPuzzle1_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DelegateSendPlayerInputPuzzle1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegateSendPlayerInputPuzzle2_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DelegateSendPlayerInputPuzzle2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelegateSendPlayerInputPuzzle3_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DelegateSendPlayerInputPuzzle3;
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
		{ &Z_Construct_UFunction_UWebSocketGameInstance_GoToControlRoom, "GoToControlRoom" }, // 2219095360
		{ &Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle1, "GoToPuzzle1" }, // 1412956364
		{ &Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle2, "GoToPuzzle2" }, // 3336834293
		{ &Z_Construct_UFunction_UWebSocketGameInstance_GoToPuzzle3, "GoToPuzzle3" }, // 4060296386
		{ &Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle1, "SendPlayerInputPuzzle1" }, // 968372963
		{ &Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle2, "SendPlayerInputPuzzle2" }, // 2641074885
		{ &Z_Construct_UFunction_UWebSocketGameInstance_SendPlayerInputPuzzle3, "SendPlayerInputPuzzle3" }, // 424679983
		{ &Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle1event, "TriggerPuzzle1event" }, // 655473124
		{ &Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle2event, "TriggerPuzzle2event" }, // 2089315469
		{ &Z_Construct_UFunction_UWebSocketGameInstance_TriggerPuzzle3event, "TriggerPuzzle3event" }, // 1695291189
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebSocketGameInstance.h" },
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle1_MetaData[] = {
		{ "Comment", "//Delegates for triggering events in blueprint\n" },
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
		{ "ToolTip", "Delegates for triggering events in blueprint" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle1 = { "DelegatePuzzle1", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, DelegatePuzzle1), Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle2_MetaData[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle2 = { "DelegatePuzzle2", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, DelegatePuzzle2), Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle3_MetaData[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle3 = { "DelegatePuzzle3", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, DelegatePuzzle3), Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_ControlRoom_MetaData[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_ControlRoom = { "ControlRoom", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, ControlRoom), Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_ControlRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_ControlRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle1_MetaData[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle1 = { "DelegateTriggerPuzzle1", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, DelegateTriggerPuzzle1), Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle2_MetaData[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle2 = { "DelegateTriggerPuzzle2", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, DelegateTriggerPuzzle2), Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle3_MetaData[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle3 = { "DelegateTriggerPuzzle3", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, DelegateTriggerPuzzle3), Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle1_MetaData[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle1 = { "DelegateSendPlayerInputPuzzle1", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, DelegateSendPlayerInputPuzzle1), Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle2_MetaData[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle2 = { "DelegateSendPlayerInputPuzzle2", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, DelegateSendPlayerInputPuzzle2), Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle3_MetaData[] = {
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle3 = { "DelegateSendPlayerInputPuzzle3", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, DelegateSendPlayerInputPuzzle3), Z_Construct_UDelegateFunction_MyProject_NewTypeDelegae__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_OutputText_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "WebSocketGameInstance" },
		{ "ModuleRelativePath", "WebSocketGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_OutputText = { "OutputText", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWebSocketGameInstance, OutputText), METADATA_PARAMS(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_OutputText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_OutputText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebSocketGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegatePuzzle3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_ControlRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateTriggerPuzzle3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebSocketGameInstance_Statics::NewProp_DelegateSendPlayerInputPuzzle3,
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
	IMPLEMENT_CLASS(UWebSocketGameInstance, 1481568035);
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
