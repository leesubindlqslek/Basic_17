// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project7HW/Public/GoodPerson.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoodPerson() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
PROJECT7HW_API UClass* Z_Construct_UClass_AGoodPerson();
PROJECT7HW_API UClass* Z_Construct_UClass_AGoodPerson_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project7HW();
// End Cross Module References

// Begin Class AGoodPerson Function Look
struct Z_Construct_UFunction_AGoodPerson_Look_Statics
{
	struct GoodPerson_eventLook_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGoodPerson_Look_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoodPerson_eventLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoodPerson_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoodPerson_Look_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoodPerson_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoodPerson_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoodPerson, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_AGoodPerson_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoodPerson_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoodPerson_Look_Statics::GoodPerson_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoodPerson_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoodPerson_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGoodPerson_Look_Statics::GoodPerson_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGoodPerson_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoodPerson_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGoodPerson::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AGoodPerson Function Look

// Begin Class AGoodPerson Function Move
struct Z_Construct_UFunction_AGoodPerson_Move_Statics
{
	struct GoodPerson_eventMove_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGoodPerson_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoodPerson_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoodPerson_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoodPerson_Move_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoodPerson_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoodPerson_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoodPerson, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_AGoodPerson_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoodPerson_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoodPerson_Move_Statics::GoodPerson_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoodPerson_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoodPerson_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGoodPerson_Move_Statics::GoodPerson_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGoodPerson_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoodPerson_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGoodPerson::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AGoodPerson Function Move

// Begin Class AGoodPerson Function StopLook
struct Z_Construct_UFunction_AGoodPerson_StopLook_Statics
{
	struct GoodPerson_eventStopLook_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGoodPerson_StopLook_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoodPerson_eventStopLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoodPerson_StopLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoodPerson_StopLook_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoodPerson_StopLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoodPerson_StopLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoodPerson, nullptr, "StopLook", nullptr, nullptr, Z_Construct_UFunction_AGoodPerson_StopLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoodPerson_StopLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoodPerson_StopLook_Statics::GoodPerson_eventStopLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoodPerson_StopLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoodPerson_StopLook_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGoodPerson_StopLook_Statics::GoodPerson_eventStopLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGoodPerson_StopLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoodPerson_StopLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGoodPerson::execStopLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopLook(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AGoodPerson Function StopLook

// Begin Class AGoodPerson Function StopMove
struct Z_Construct_UFunction_AGoodPerson_StopMove_Statics
{
	struct GoodPerson_eventStopMove_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGoodPerson_StopMove_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GoodPerson_eventStopMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoodPerson_StopMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoodPerson_StopMove_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoodPerson_StopMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoodPerson_StopMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoodPerson, nullptr, "StopMove", nullptr, nullptr, Z_Construct_UFunction_AGoodPerson_StopMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoodPerson_StopMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGoodPerson_StopMove_Statics::GoodPerson_eventStopMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGoodPerson_StopMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGoodPerson_StopMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGoodPerson_StopMove_Statics::GoodPerson_eventStopMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGoodPerson_StopMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGoodPerson_StopMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGoodPerson::execStopMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopMove(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class AGoodPerson Function StopMove

// Begin Class AGoodPerson
void AGoodPerson::StaticRegisterNativesAGoodPerson()
{
	UClass* Class = AGoodPerson::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &AGoodPerson::execLook },
		{ "Move", &AGoodPerson::execMove },
		{ "StopLook", &AGoodPerson::execStopLook },
		{ "StopMove", &AGoodPerson::execStopMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoodPerson);
UClass* Z_Construct_UClass_AGoodPerson_NoRegister()
{
	return AGoodPerson::StaticClass();
}
struct Z_Construct_UClass_AGoodPerson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GoodPerson.h" },
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnRate_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookUpRate_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPitch_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitch_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityInterpSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/GoodPerson.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookUpRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityInterpSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGoodPerson_Look, "Look" }, // 2815300953
		{ &Z_Construct_UFunction_AGoodPerson_Move, "Move" }, // 734097143
		{ &Z_Construct_UFunction_AGoodPerson_StopLook, "StopLook" }, // 1772852157
		{ &Z_Construct_UFunction_AGoodPerson_StopMove, "StopMove" }, // 1390280242
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoodPerson>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoodPerson_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoodPerson, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoodPerson_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoodPerson, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoodPerson_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoodPerson, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGoodPerson_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoodPerson, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoodPerson_Statics::NewProp_MaxWalkSpeed = { "MaxWalkSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoodPerson, MaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkSpeed_MetaData), NewProp_MaxWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoodPerson_Statics::NewProp_TurnRate = { "TurnRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoodPerson, TurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnRate_MetaData), NewProp_TurnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoodPerson_Statics::NewProp_LookUpRate = { "LookUpRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoodPerson, LookUpRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookUpRate_MetaData), NewProp_LookUpRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoodPerson_Statics::NewProp_MinPitch = { "MinPitch", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoodPerson, MinPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPitch_MetaData), NewProp_MinPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoodPerson_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoodPerson, MaxPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPitch_MetaData), NewProp_MaxPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoodPerson_Statics::NewProp_VelocityInterpSpeed = { "VelocityInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoodPerson, VelocityInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityInterpSpeed_MetaData), NewProp_VelocityInterpSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoodPerson_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGoodPerson, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoodPerson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoodPerson_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoodPerson_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoodPerson_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoodPerson_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoodPerson_Statics::NewProp_MaxWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoodPerson_Statics::NewProp_TurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoodPerson_Statics::NewProp_LookUpRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoodPerson_Statics::NewProp_MinPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoodPerson_Statics::NewProp_MaxPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoodPerson_Statics::NewProp_VelocityInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoodPerson_Statics::NewProp_Velocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoodPerson_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGoodPerson_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Project7HW,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoodPerson_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoodPerson_Statics::ClassParams = {
	&AGoodPerson::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGoodPerson_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGoodPerson_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoodPerson_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoodPerson_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGoodPerson()
{
	if (!Z_Registration_Info_UClass_AGoodPerson.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoodPerson.OuterSingleton, Z_Construct_UClass_AGoodPerson_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGoodPerson.OuterSingleton;
}
template<> PROJECT7HW_API UClass* StaticClass<AGoodPerson>()
{
	return AGoodPerson::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGoodPerson);
AGoodPerson::~AGoodPerson() {}
// End Class AGoodPerson

// Begin Registration
struct Z_CompiledInDeferFile_FID_HW7_Basic_17_Source_Project7HW_Public_GoodPerson_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGoodPerson, AGoodPerson::StaticClass, TEXT("AGoodPerson"), &Z_Registration_Info_UClass_AGoodPerson, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoodPerson), 29758307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HW7_Basic_17_Source_Project7HW_Public_GoodPerson_h_838458360(TEXT("/Script/Project7HW"),
	Z_CompiledInDeferFile_FID_HW7_Basic_17_Source_Project7HW_Public_GoodPerson_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HW7_Basic_17_Source_Project7HW_Public_GoodPerson_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
