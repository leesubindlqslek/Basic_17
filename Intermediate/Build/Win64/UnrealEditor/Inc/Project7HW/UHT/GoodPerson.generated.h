// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GoodPerson.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef PROJECT7HW_GoodPerson_generated_h
#error "GoodPerson.generated.h already included, missing '#pragma once' in GoodPerson.h"
#endif
#define PROJECT7HW_GoodPerson_generated_h

#define FID_HW7_Basic_17_Source_Project7HW_Public_GoodPerson_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopLook); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execStopMove); \
	DECLARE_FUNCTION(execMove);


#define FID_HW7_Basic_17_Source_Project7HW_Public_GoodPerson_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoodPerson(); \
	friend struct Z_Construct_UClass_AGoodPerson_Statics; \
public: \
	DECLARE_CLASS(AGoodPerson, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project7HW"), NO_API) \
	DECLARE_SERIALIZER(AGoodPerson)


#define FID_HW7_Basic_17_Source_Project7HW_Public_GoodPerson_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGoodPerson(AGoodPerson&&); \
	AGoodPerson(const AGoodPerson&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoodPerson); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoodPerson); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoodPerson) \
	NO_API virtual ~AGoodPerson();


#define FID_HW7_Basic_17_Source_Project7HW_Public_GoodPerson_h_13_PROLOG
#define FID_HW7_Basic_17_Source_Project7HW_Public_GoodPerson_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HW7_Basic_17_Source_Project7HW_Public_GoodPerson_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HW7_Basic_17_Source_Project7HW_Public_GoodPerson_h_16_INCLASS_NO_PURE_DECLS \
	FID_HW7_Basic_17_Source_Project7HW_Public_GoodPerson_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT7HW_API UClass* StaticClass<class AGoodPerson>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HW7_Basic_17_Source_Project7HW_Public_GoodPerson_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
