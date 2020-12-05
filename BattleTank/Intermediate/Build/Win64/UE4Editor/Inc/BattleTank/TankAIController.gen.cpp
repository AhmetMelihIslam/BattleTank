// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/TankAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAIController() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ATankAIController_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ATankAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	DEFINE_FUNCTION(ATankAIController::execOnPossedTankDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPossedTankDeath();
		P_NATIVE_END;
	}
	void ATankAIController::StaticRegisterNativesATankAIController()
	{
		UClass* Class = ATankAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPossedTankDeath", &ATankAIController::execOnPossedTankDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATankAIController_OnPossedTankDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankAIController_OnPossedTankDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TankAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankAIController_OnPossedTankDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankAIController, nullptr, "OnPossedTankDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankAIController_OnPossedTankDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankAIController_OnPossedTankDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankAIController_OnPossedTankDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankAIController_OnPossedTankDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankAIController_NoRegister()
	{
		return ATankAIController::StaticClass();
	}
	struct Z_Construct_UClass_ATankAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankAIController_OnPossedTankDeath, "OnPossedTankDeath" }, // 1081774733
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TankAIController.h" },
		{ "ModuleRelativePath", "Public/TankAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankAIController_Statics::NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// How close can the AI tank get\n" },
		{ "ModuleRelativePath", "Public/TankAIController.h" },
		{ "ToolTip", "How close can the AI tank get" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankAIController_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankAIController, AcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_ATankAIController_Statics::NewProp_AcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::NewProp_AcceptanceRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankAIController_Statics::NewProp_AcceptanceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankAIController_Statics::ClassParams = {
		&ATankAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankAIController, 337505499);
	template<> BATTLETANK_API UClass* StaticClass<ATankAIController>()
	{
		return ATankAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankAIController(Z_Construct_UClass_ATankAIController, &ATankAIController::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
