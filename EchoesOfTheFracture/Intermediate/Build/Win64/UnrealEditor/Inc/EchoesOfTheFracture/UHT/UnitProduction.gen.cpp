// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EchoesOfTheFracture/Public/UnitProduction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitProduction() {}

// Begin Cross Module References
ECHOESOFTHEFRACTURE_API UClass* Z_Construct_UClass_AUnitProduction();
ECHOESOFTHEFRACTURE_API UClass* Z_Construct_UClass_AUnitProduction_NoRegister();
ECHOESOFTHEFRACTURE_API UEnum* Z_Construct_UEnum_EchoesOfTheFracture_EResourceType();
ECHOESOFTHEFRACTURE_API UEnum* Z_Construct_UEnum_EchoesOfTheFracture_EUnitType();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_EchoesOfTheFracture();
// End Cross Module References

// Begin Enum EUnitType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUnitType;
static UEnum* EUnitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUnitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUnitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EchoesOfTheFracture_EUnitType, (UObject*)Z_Construct_UPackage__Script_EchoesOfTheFracture(), TEXT("EUnitType"));
	}
	return Z_Registration_Info_UEnum_EUnitType.OuterSingleton;
}
template<> ECHOESOFTHEFRACTURE_API UEnum* StaticEnum<EUnitType>()
{
	return EUnitType_StaticEnum();
}
struct Z_Construct_UEnum_EchoesOfTheFracture_EUnitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Colon.DisplayName", "Concordian Colon" },
		{ "Colon.Name", "EUnitType::Colon" },
		{ "ModuleRelativePath", "Public/UnitProduction.h" },
		{ "Sentinel.DisplayName", "Fractal Sentinel" },
		{ "Sentinel.Name", "EUnitType::Sentinel" },
		{ "Shooter.DisplayName", "Rift Shooter" },
		{ "Shooter.Name", "EUnitType::Shooter" },
		{ "Warrior.DisplayName", "Concordian Warrior" },
		{ "Warrior.Name", "EUnitType::Warrior" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUnitType::Warrior", (int64)EUnitType::Warrior },
		{ "EUnitType::Sentinel", (int64)EUnitType::Sentinel },
		{ "EUnitType::Shooter", (int64)EUnitType::Shooter },
		{ "EUnitType::Colon", (int64)EUnitType::Colon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EchoesOfTheFracture_EUnitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EchoesOfTheFracture,
	nullptr,
	"EUnitType",
	"EUnitType",
	Z_Construct_UEnum_EchoesOfTheFracture_EUnitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EchoesOfTheFracture_EUnitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EchoesOfTheFracture_EUnitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EchoesOfTheFracture_EUnitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EchoesOfTheFracture_EUnitType()
{
	if (!Z_Registration_Info_UEnum_EUnitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUnitType.InnerSingleton, Z_Construct_UEnum_EchoesOfTheFracture_EUnitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUnitType.InnerSingleton;
}
// End Enum EUnitType

// Begin Class AUnitProduction Function AddUnitProduction
struct Z_Construct_UFunction_AUnitProduction_AddUnitProduction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Unit Manager" },
		{ "ModuleRelativePath", "Public/UnitProduction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitProduction_AddUnitProduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitProduction, nullptr, "AddUnitProduction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitProduction_AddUnitProduction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnitProduction_AddUnitProduction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AUnitProduction_AddUnitProduction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnitProduction_AddUnitProduction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnitProduction::execAddUnitProduction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddUnitProduction();
	P_NATIVE_END;
}
// End Class AUnitProduction Function AddUnitProduction

// Begin Class AUnitProduction Function CreateUnit
struct Z_Construct_UFunction_AUnitProduction_CreateUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Unit Manager" },
		{ "ModuleRelativePath", "Public/UnitProduction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitProduction_CreateUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitProduction, nullptr, "CreateUnit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitProduction_CreateUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnitProduction_CreateUnit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AUnitProduction_CreateUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnitProduction_CreateUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnitProduction::execCreateUnit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateUnit();
	P_NATIVE_END;
}
// End Class AUnitProduction Function CreateUnit

// Begin Class AUnitProduction Function RemoveUnitProduction
struct Z_Construct_UFunction_AUnitProduction_RemoveUnitProduction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Unit Manager" },
		{ "ModuleRelativePath", "Public/UnitProduction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitProduction_RemoveUnitProduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnitProduction, nullptr, "RemoveUnitProduction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitProduction_RemoveUnitProduction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnitProduction_RemoveUnitProduction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AUnitProduction_RemoveUnitProduction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnitProduction_RemoveUnitProduction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnitProduction::execRemoveUnitProduction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveUnitProduction();
	P_NATIVE_END;
}
// End Class AUnitProduction Function RemoveUnitProduction

// Begin Class AUnitProduction
void AUnitProduction::StaticRegisterNativesAUnitProduction()
{
	UClass* Class = AUnitProduction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddUnitProduction", &AUnitProduction::execAddUnitProduction },
		{ "CreateUnit", &AUnitProduction::execCreateUnit },
		{ "RemoveUnitProduction", &AUnitProduction::execRemoveUnitProduction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnitProduction);
UClass* Z_Construct_UClass_AUnitProduction_NoRegister()
{
	return AUnitProduction::StaticClass();
}
struct Z_Construct_UClass_AUnitProduction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnitProduction.h" },
		{ "ModuleRelativePath", "Public/UnitProduction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__unitType_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Public/UnitProduction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__currentUnitProductionCount_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Public/UnitProduction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__maxUnitProduction_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Public/UnitProduction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__productionTime_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Public/UnitProduction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__resourceForCraft_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/UnitProduction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__costResources_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "Public/UnitProduction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__unitType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__unitType;
	static const UECodeGen_Private::FIntPropertyParams NewProp__currentUnitProductionCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp__maxUnitProduction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__productionTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp__resourceForCraft_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__resourceForCraft;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__costResources;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnitProduction_AddUnitProduction, "AddUnitProduction" }, // 3137430043
		{ &Z_Construct_UFunction_AUnitProduction_CreateUnit, "CreateUnit" }, // 3308525878
		{ &Z_Construct_UFunction_AUnitProduction_RemoveUnitProduction, "RemoveUnitProduction" }, // 4246369371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitProduction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUnitProduction_Statics::NewProp__unitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AUnitProduction_Statics::NewProp__unitType = { "_unitType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitProduction, _unitType), Z_Construct_UEnum_EchoesOfTheFracture_EUnitType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__unitType_MetaData), NewProp__unitType_MetaData) }; // 2449493230
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnitProduction_Statics::NewProp__currentUnitProductionCount = { "_currentUnitProductionCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitProduction, _currentUnitProductionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__currentUnitProductionCount_MetaData), NewProp__currentUnitProductionCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnitProduction_Statics::NewProp__maxUnitProduction = { "_maxUnitProduction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitProduction, _maxUnitProduction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__maxUnitProduction_MetaData), NewProp__maxUnitProduction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnitProduction_Statics::NewProp__productionTime = { "_productionTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitProduction, _productionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__productionTime_MetaData), NewProp__productionTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUnitProduction_Statics::NewProp__resourceForCraft_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AUnitProduction_Statics::NewProp__resourceForCraft = { "_resourceForCraft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitProduction, _resourceForCraft), Z_Construct_UEnum_EchoesOfTheFracture_EResourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__resourceForCraft_MetaData), NewProp__resourceForCraft_MetaData) }; // 988554843
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnitProduction_Statics::NewProp__costResources = { "_costResources", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitProduction, _costResources), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__costResources_MetaData), NewProp__costResources_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnitProduction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitProduction_Statics::NewProp__unitType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitProduction_Statics::NewProp__unitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitProduction_Statics::NewProp__currentUnitProductionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitProduction_Statics::NewProp__maxUnitProduction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitProduction_Statics::NewProp__productionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitProduction_Statics::NewProp__resourceForCraft_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitProduction_Statics::NewProp__resourceForCraft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitProduction_Statics::NewProp__costResources,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitProduction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUnitProduction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EchoesOfTheFracture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitProduction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnitProduction_Statics::ClassParams = {
	&AUnitProduction::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AUnitProduction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AUnitProduction_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitProduction_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnitProduction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnitProduction()
{
	if (!Z_Registration_Info_UClass_AUnitProduction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnitProduction.OuterSingleton, Z_Construct_UClass_AUnitProduction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnitProduction.OuterSingleton;
}
template<> ECHOESOFTHEFRACTURE_API UClass* StaticClass<AUnitProduction>()
{
	return AUnitProduction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnitProduction);
AUnitProduction::~AUnitProduction() {}
// End Class AUnitProduction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUnitType_StaticEnum, TEXT("EUnitType"), &Z_Registration_Info_UEnum_EUnitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2449493230U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnitProduction, AUnitProduction::StaticClass, TEXT("AUnitProduction"), &Z_Registration_Info_UClass_AUnitProduction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnitProduction), 2364260096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_3198867423(TEXT("/Script/EchoesOfTheFracture"),
	Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_UnitProduction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
