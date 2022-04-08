// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_WebSocketGameInstance_generated_h
#error "WebSocketGameInstance.generated.h already included, missing '#pragma once' in WebSocketGameInstance.h"
#endif
#define MYPROJECT_WebSocketGameInstance_generated_h

#define MyProject_Source_MyProject_WebSocketGameInstance_h_10_DELEGATE \
struct _Script_MyProject_eventNewTypeDelegae_Parms \
{ \
	int32 number; \
	FString code; \
}; \
static inline void FNewTypeDelegae_DelegateWrapper(const FMulticastScriptDelegate& NewTypeDelegae, int32 number, const FString& code) \
{ \
	_Script_MyProject_eventNewTypeDelegae_Parms Parms; \
	Parms.number=number; \
	Parms.code=code; \
	NewTypeDelegae.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Source_MyProject_WebSocketGameInstance_h_17_SPARSE_DATA
#define MyProject_Source_MyProject_WebSocketGameInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendPlayerInputPuzzle3); \
	DECLARE_FUNCTION(execSendPlayerInputPuzzle2); \
	DECLARE_FUNCTION(execSendPlayerInputPuzzle1); \
	DECLARE_FUNCTION(execTriggerPuzzle3event); \
	DECLARE_FUNCTION(execTriggerPuzzle2event); \
	DECLARE_FUNCTION(execTriggerPuzzle1event); \
	DECLARE_FUNCTION(execGoToControlRoom); \
	DECLARE_FUNCTION(execGoToPuzzle3); \
	DECLARE_FUNCTION(execGoToPuzzle2); \
	DECLARE_FUNCTION(execGoToPuzzle1);


#define MyProject_Source_MyProject_WebSocketGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendPlayerInputPuzzle3); \
	DECLARE_FUNCTION(execSendPlayerInputPuzzle2); \
	DECLARE_FUNCTION(execSendPlayerInputPuzzle1); \
	DECLARE_FUNCTION(execTriggerPuzzle3event); \
	DECLARE_FUNCTION(execTriggerPuzzle2event); \
	DECLARE_FUNCTION(execTriggerPuzzle1event); \
	DECLARE_FUNCTION(execGoToControlRoom); \
	DECLARE_FUNCTION(execGoToPuzzle3); \
	DECLARE_FUNCTION(execGoToPuzzle2); \
	DECLARE_FUNCTION(execGoToPuzzle1);


#define MyProject_Source_MyProject_WebSocketGameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebSocketGameInstance(); \
	friend struct Z_Construct_UClass_UWebSocketGameInstance_Statics; \
public: \
	DECLARE_CLASS(UWebSocketGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketGameInstance)


#define MyProject_Source_MyProject_WebSocketGameInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUWebSocketGameInstance(); \
	friend struct Z_Construct_UClass_UWebSocketGameInstance_Statics; \
public: \
	DECLARE_CLASS(UWebSocketGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UWebSocketGameInstance)


#define MyProject_Source_MyProject_WebSocketGameInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSocketGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketGameInstance(UWebSocketGameInstance&&); \
	NO_API UWebSocketGameInstance(const UWebSocketGameInstance&); \
public:


#define MyProject_Source_MyProject_WebSocketGameInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebSocketGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebSocketGameInstance(UWebSocketGameInstance&&); \
	NO_API UWebSocketGameInstance(const UWebSocketGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebSocketGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebSocketGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebSocketGameInstance)


#define MyProject_Source_MyProject_WebSocketGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OutputText() { return STRUCT_OFFSET(UWebSocketGameInstance, OutputText); }


#define MyProject_Source_MyProject_WebSocketGameInstance_h_14_PROLOG
#define MyProject_Source_MyProject_WebSocketGameInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_WebSocketGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_WebSocketGameInstance_h_17_SPARSE_DATA \
	MyProject_Source_MyProject_WebSocketGameInstance_h_17_RPC_WRAPPERS \
	MyProject_Source_MyProject_WebSocketGameInstance_h_17_INCLASS \
	MyProject_Source_MyProject_WebSocketGameInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_WebSocketGameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_WebSocketGameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_WebSocketGameInstance_h_17_SPARSE_DATA \
	MyProject_Source_MyProject_WebSocketGameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_WebSocketGameInstance_h_17_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_WebSocketGameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UWebSocketGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_WebSocketGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
