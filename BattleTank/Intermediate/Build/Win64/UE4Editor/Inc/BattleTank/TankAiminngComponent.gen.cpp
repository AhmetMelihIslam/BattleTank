// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleTank/Public/TankAiminngComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAiminngComponent() {}
// Cross Module References
	BATTLETANK_API UEnum* Z_Construct_UEnum_BattleTank_EFiringState();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAiminngComponent_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankAiminngComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankTurret_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_UTankBarrel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BATTLETANK_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	static UEnum* EFiringState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BattleTank_EFiringState, Z_Construct_UPackage__Script_BattleTank(), TEXT("EFiringState"));
		}
		return Singleton;
	}
	template<> BATTLETANK_API UEnum* StaticEnum<EFiringState>()
	{
		return EFiringState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFiringState(EFiringState_StaticEnum, TEXT("/Script/BattleTank"), TEXT("EFiringState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BattleTank_EFiringState_Hash() { return 798694658U; }
	UEnum* Z_Construct_UEnum_BattleTank_EFiringState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BattleTank();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFiringState"), 0, Get_Z_Construct_UEnum_BattleTank_EFiringState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFiringState::Reloading", (int64)EFiringState::Reloading },
				{ "EFiringState::Aiming", (int64)EFiringState::Aiming },
				{ "EFiringState::Locked", (int64)EFiringState::Locked },
				{ "EFiringState::OutOfAmmo", (int64)EFiringState::OutOfAmmo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aiming.Name", "EFiringState::Aiming" },
				{ "Comment", "// Enum for aiming state\n" },
				{ "Locked.Name", "EFiringState::Locked" },
				{ "ModuleRelativePath", "Public/TankAiminngComponent.h" },
				{ "OutOfAmmo.Name", "EFiringState::OutOfAmmo" },
				{ "Reloading.Name", "EFiringState::Reloading" },
				{ "ToolTip", "Enum for aiming state" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BattleTank,
				nullptr,
				"EFiringState",
				"EFiringState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UTankAiminngComponent::execGetRoundLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRoundLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTankAiminngComponent::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTankAiminngComponent::execInitialise)
	{
		P_GET_OBJECT(UTankBarrel,Z_Param_BarrelToSet);
		P_GET_OBJECT(UTankTurret,Z_Param_TurretToSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialise(Z_Param_BarrelToSet,Z_Param_TurretToSet);
		P_NATIVE_END;
	}
	void UTankAiminngComponent::StaticRegisterNativesUTankAiminngComponent()
	{
		UClass* Class = UTankAiminngComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &UTankAiminngComponent::execFire },
			{ "GetRoundLeft", &UTankAiminngComponent::execGetRoundLeft },
			{ "Initialise", &UTankAiminngComponent::execInitialise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTankAiminngComponent_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankAiminngComponent_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/TankAiminngComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankAiminngComponent_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAiminngComponent, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankAiminngComponent_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankAiminngComponent_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankAiminngComponent_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankAiminngComponent_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankAiminngComponent_GetRoundLeft_Statics
	{
		struct TankAiminngComponent_eventGetRoundLeft_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTankAiminngComponent_GetRoundLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankAiminngComponent_eventGetRoundLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankAiminngComponent_GetRoundLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankAiminngComponent_GetRoundLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankAiminngComponent_GetRoundLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/TankAiminngComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankAiminngComponent_GetRoundLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAiminngComponent, nullptr, "GetRoundLeft", nullptr, nullptr, sizeof(TankAiminngComponent_eventGetRoundLeft_Parms), Z_Construct_UFunction_UTankAiminngComponent_GetRoundLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankAiminngComponent_GetRoundLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankAiminngComponent_GetRoundLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankAiminngComponent_GetRoundLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankAiminngComponent_GetRoundLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankAiminngComponent_GetRoundLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics
	{
		struct TankAiminngComponent_eventInitialise_Parms
		{
			UTankBarrel* BarrelToSet;
			UTankTurret* TurretToSet;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurretToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TurretToSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarrelToSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::NewProp_TurretToSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::NewProp_TurretToSet = { "TurretToSet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankAiminngComponent_eventInitialise_Parms, TurretToSet), Z_Construct_UClass_UTankTurret_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::NewProp_TurretToSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::NewProp_TurretToSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::NewProp_BarrelToSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::NewProp_BarrelToSet = { "BarrelToSet", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankAiminngComponent_eventInitialise_Parms, BarrelToSet), Z_Construct_UClass_UTankBarrel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::NewProp_BarrelToSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::NewProp_BarrelToSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::NewProp_TurretToSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::NewProp_BarrelToSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankAiminngComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTankAiminngComponent, nullptr, "Initialise", nullptr, nullptr, sizeof(TankAiminngComponent_eventInitialise_Parms), Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTankAiminngComponent_Initialise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTankAiminngComponent_Initialise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankAiminngComponent_NoRegister()
	{
		return UTankAiminngComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTankAiminngComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RoundsLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadTimeInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadTimeInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FiringState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FiringState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTankAiminngComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleTank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTankAiminngComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTankAiminngComponent_Fire, "Fire" }, // 1346948670
		{ &Z_Construct_UFunction_UTankAiminngComponent_GetRoundLeft, "GetRoundLeft" }, // 2145792042
		{ &Z_Construct_UFunction_UTankAiminngComponent_Initialise, "Initialise" }, // 2863409506
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAiminngComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "// Hold barrel's properties and Elevate method\n" },
		{ "IncludePath", "TankAiminngComponent.h" },
		{ "ModuleRelativePath", "Public/TankAiminngComponent.h" },
		{ "ToolTip", "Hold barrel's properties and Elevate method" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_RoundsLeft_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/TankAiminngComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_RoundsLeft = { "RoundsLeft", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankAiminngComponent, RoundsLeft), METADATA_PARAMS(Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_RoundsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_RoundsLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_ReloadTimeInSeconds_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/TankAiminngComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_ReloadTimeInSeconds = { "ReloadTimeInSeconds", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankAiminngComponent, ReloadTimeInSeconds), METADATA_PARAMS(Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_ReloadTimeInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_ReloadTimeInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_LaunchSpeed_MetaData[] = {
		{ "Category", "Firing" },
		{ "Comment", "//UClass* ProjectileBlueprint;\n" },
		{ "ModuleRelativePath", "Public/TankAiminngComponent.h" },
		{ "ToolTip", "UClass* ProjectileBlueprint;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_LaunchSpeed = { "LaunchSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankAiminngComponent, LaunchSpeed), METADATA_PARAMS(Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_LaunchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_LaunchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_ProjectileBlueprint_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/TankAiminngComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_ProjectileBlueprint = { "ProjectileBlueprint", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankAiminngComponent, ProjectileBlueprint), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_ProjectileBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_ProjectileBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_FiringState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TankAiminngComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_FiringState = { "FiringState", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTankAiminngComponent, FiringState), Z_Construct_UEnum_BattleTank_EFiringState, METADATA_PARAMS(Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_FiringState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_FiringState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_FiringState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTankAiminngComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_RoundsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_ReloadTimeInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_LaunchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_ProjectileBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_FiringState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTankAiminngComponent_Statics::NewProp_FiringState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTankAiminngComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTankAiminngComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTankAiminngComponent_Statics::ClassParams = {
		&UTankAiminngComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTankAiminngComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTankAiminngComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTankAiminngComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTankAiminngComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTankAiminngComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTankAiminngComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankAiminngComponent, 1279070855);
	template<> BATTLETANK_API UClass* StaticClass<UTankAiminngComponent>()
	{
		return UTankAiminngComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankAiminngComponent(Z_Construct_UClass_UTankAiminngComponent, &UTankAiminngComponent::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankAiminngComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankAiminngComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
