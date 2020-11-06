// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/TankMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankMovementComponent() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTrack_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTankMovementComponent::execIntendTurnRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Throw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IntendTurnRight(Z_Param_Throw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTankMovementComponent::execIntendMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Throw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IntendMoveForward(Z_Param_Throw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTankMovementComponent::execInitialise)
	{
		P_GET_OBJECT(UTankTrack,Z_Param_LeftTrackToSet);
		P_GET_OBJECT(UTankTrack,Z_Param_RightTrackToSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialise(Z_Param_LeftTrackToSet,Z_Param_RightTrackToSet);
		P_NATIVE_END;
	}
	void UTankMovementComponent::StaticRegisterNativesUTankMovementComponent()
	{
		UClass* Class = UTankMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialise", &UTankMovementComponent::execInitialise },
			{ "IntendMoveForward", &UTankMovementComponent::execIntendMoveForward },
			{ "IntendTurnRight", &UTankMovementComponent::execIntendTurnRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics
	{
		struct TankMovementComponent_eventInitialise_Parms
		{
			UTankTrack* LeftTrackToSet;
			UTankTrack* RightTrackToSet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightTrackToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightTrackToSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftTrackToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftTrackToSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_RightTrackToSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_RightTrackToSet = { "RightTrackToSet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankMovementComponent_eventInitialise_Parms, RightTrackToSet), Z_Construct_UClass_UTankTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_RightTrackToSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_RightTrackToSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_LeftTrackToSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_LeftTrackToSet = { "LeftTrackToSet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankMovementComponent_eventInitialise_Parms, LeftTrackToSet), Z_Construct_UClass_UTankTrack_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_LeftTrackToSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_LeftTrackToSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_RightTrackToSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::NewProp_LeftTrackToSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, nullptr, "Initialise", nullptr, nullptr, sizeof(TankMovementComponent_eventInitialise_Parms), Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankMovementComponent_Initialise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankMovementComponent_Initialise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics
	{
		struct TankMovementComponent_eventIntendMoveForward_Parms
		{
			float Throw;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::NewProp_Throw = { "Throw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankMovementComponent_eventIntendMoveForward_Parms, Throw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::NewProp_Throw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, nullptr, "IntendMoveForward", nullptr, nullptr, sizeof(TankMovementComponent_eventIntendMoveForward_Parms), Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics
	{
		struct TankMovementComponent_eventIntendTurnRight_Parms
		{
			float Throw;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::NewProp_Throw = { "Throw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankMovementComponent_eventIntendTurnRight_Parms, Throw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::NewProp_Throw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TankMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankMovementComponent, nullptr, "IntendTurnRight", nullptr, nullptr, sizeof(TankMovementComponent_eventIntendTurnRight_Parms), Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister()
	{
		return UTankMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTankMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTankMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTankMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTankMovementComponent_Initialise, "Initialise" }, // 4255214489
		{ &Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward, "IntendMoveForward" }, // 1566084522
		{ &Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight, "IntendTurnRight" }, // 3536782111
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Responsible for driving the tank tracks\n */" },
		{ "IncludePath", "TankMovementComponent.h" },
		{ "ModuleRelativePath", "Public/TankMovementComponent.h" },
		{ "ToolTip", "Responsible for driving the tank tracks" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTankMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTankMovementComponent_Statics::ClassParams = {
		&UTankMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTankMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTankMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTankMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTankMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankMovementComponent, 2027992893);
	template<> BATTLETANK_API UClass* StaticClass<UTankMovementComponent>()
	{
		return UTankMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankMovementComponent(Z_Construct_UClass_UTankMovementComponent, &UTankMovementComponent::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
