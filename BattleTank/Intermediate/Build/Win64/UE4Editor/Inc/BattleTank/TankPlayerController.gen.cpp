// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/TankPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPlayerController() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ATankPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAiminngComponent_NoRegister();
// End Cross Module References
	static FName NAME_ATankPlayerController_FoundAimingComponent = FName(TEXT("FoundAimingComponent"));
	void ATankPlayerController::FoundAimingComponent(UTankAiminngComponent* AimCompRef)
	{
		TankPlayerController_eventFoundAimingComponent_Parms Parms;
		Parms.AimCompRef=AimCompRef;
		ProcessEvent(FindFunctionChecked(NAME_ATankPlayerController_FoundAimingComponent),&Parms);
	}
	void ATankPlayerController::StaticRegisterNativesATankPlayerController()
	{
	}
	struct Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimCompRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimCompRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef = { "AimCompRef", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPlayerController_eventFoundAimingComponent_Parms, AimCompRef), Z_Construct_UClass_UTankAiminngComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::NewProp_AimCompRef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPlayerController, nullptr, "FoundAimingComponent", nullptr, nullptr, sizeof(TankPlayerController_eventFoundAimingComponent_Parms), Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankPlayerController_NoRegister()
	{
		return ATankPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATankPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineTraceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineTraceRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairYLocaiton_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairYLocaiton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrosshairXLocaiton_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrosshairXLocaiton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent, "FoundAimingComponent" }, // 2621778992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Responsible for helping the player aim.\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TankPlayerController.h" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
		{ "ToolTip", "Responsible for helping the player aim." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange = { "LineTraceRange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPlayerController, LineTraceRange), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocaiton_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocaiton = { "CrosshairYLocaiton", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPlayerController, CrosshairYLocaiton), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocaiton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocaiton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocaiton_MetaData[] = {
		{ "Category", "TankPlayerController" },
		{ "ModuleRelativePath", "Public/TankPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocaiton = { "CrosshairXLocaiton", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPlayerController, CrosshairXLocaiton), METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocaiton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocaiton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_LineTraceRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairYLocaiton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPlayerController_Statics::NewProp_CrosshairXLocaiton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATankPlayerController_Statics::ClassParams = {
		&ATankPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATankPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankPlayerController, 697893854);
	template<> BATTLETANK_API UClass* StaticClass<ATankPlayerController>()
	{
		return ATankPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPlayerController(Z_Construct_UClass_ATankPlayerController, &ATankPlayerController::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
