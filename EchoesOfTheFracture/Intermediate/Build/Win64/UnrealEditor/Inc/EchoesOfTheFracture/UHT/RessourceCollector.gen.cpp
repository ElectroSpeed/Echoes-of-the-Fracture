// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EchoesOfTheFracture/Public/RessourceCollector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRessourceCollector() {}

// Begin Cross Module References
ECHOESOFTHEFRACTURE_API UClass* Z_Construct_UClass_ARessourceCollector();
ECHOESOFTHEFRACTURE_API UClass* Z_Construct_UClass_ARessourceCollector_NoRegister();
ECHOESOFTHEFRACTURE_API UEnum* Z_Construct_UEnum_EchoesOfTheFracture_EResourceType();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_EchoesOfTheFracture();
// End Cross Module References

// Begin Enum EResourceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResourceType;
static UEnum* EResourceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EResourceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EResourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EchoesOfTheFracture_EResourceType, (UObject*)Z_Construct_UPackage__Script_EchoesOfTheFracture(), TEXT("EResourceType"));
	}
	return Z_Registration_Info_UEnum_EResourceType.OuterSingleton;
}
template<> ECHOESOFTHEFRACTURE_API UEnum* StaticEnum<EResourceType>()
{
	return EResourceType_StaticEnum();
}
struct Z_Construct_UEnum_EchoesOfTheFracture_EResourceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bread.DisplayName", "Bread" },
		{ "Bread.Name", "EResourceType::Bread" },
		{ "Energium.DisplayName", "Energium" },
		{ "Energium.Name", "EResourceType::Energium" },
		{ "ModuleRelativePath", "Public/RessourceCollector.h" },
		{ "Wood.DisplayName", "Wood" },
		{ "Wood.Name", "EResourceType::Wood" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EResourceType::Energium", (int64)EResourceType::Energium },
		{ "EResourceType::Wood", (int64)EResourceType::Wood },
		{ "EResourceType::Bread", (int64)EResourceType::Bread },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EchoesOfTheFracture_EResourceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EchoesOfTheFracture,
	nullptr,
	"EResourceType",
	"EResourceType",
	Z_Construct_UEnum_EchoesOfTheFracture_EResourceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EchoesOfTheFracture_EResourceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EchoesOfTheFracture_EResourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EchoesOfTheFracture_EResourceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EchoesOfTheFracture_EResourceType()
{
	if (!Z_Registration_Info_UEnum_EResourceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResourceType.InnerSingleton, Z_Construct_UEnum_EchoesOfTheFracture_EResourceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EResourceType.InnerSingleton;
}
// End Enum EResourceType

// Begin Class ARessourceCollector Function AddUnit
struct Z_Construct_UFunction_ARessourceCollector_AddUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RessourceCollector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARessourceCollector_AddUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARessourceCollector, nullptr, "AddUnit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARessourceCollector_AddUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARessourceCollector_AddUnit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARessourceCollector_AddUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARessourceCollector_AddUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARessourceCollector::execAddUnit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddUnit();
	P_NATIVE_END;
}
// End Class ARessourceCollector Function AddUnit

// Begin Class ARessourceCollector Function CalculateTimeForResource
struct Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics
{
	struct RessourceCollector_eventCalculateTimeForResource_Parms
	{
		float ResourceAmount;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/RessourceCollector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResourceAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::NewProp_ResourceAmount = { "ResourceAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RessourceCollector_eventCalculateTimeForResource_Parms, ResourceAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RessourceCollector_eventCalculateTimeForResource_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::NewProp_ResourceAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARessourceCollector, nullptr, "CalculateTimeForResource", nullptr, nullptr, Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::RessourceCollector_eventCalculateTimeForResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::RessourceCollector_eventCalculateTimeForResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARessourceCollector::execCalculateTimeForResource)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ResourceAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateTimeForResource(Z_Param_ResourceAmount);
	P_NATIVE_END;
}
// End Class ARessourceCollector Function CalculateTimeForResource

// Begin Class ARessourceCollector Function RemoveUnit
struct Z_Construct_UFunction_ARessourceCollector_RemoveUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RessourceCollector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARessourceCollector_RemoveUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARessourceCollector, nullptr, "RemoveUnit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARessourceCollector_RemoveUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARessourceCollector_RemoveUnit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ARessourceCollector_RemoveUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARessourceCollector_RemoveUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARessourceCollector::execRemoveUnit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveUnit();
	P_NATIVE_END;
}
// End Class ARessourceCollector Function RemoveUnit

// Begin Class ARessourceCollector
void ARessourceCollector::StaticRegisterNativesARessourceCollector()
{
	UClass* Class = ARessourceCollector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddUnit", &ARessourceCollector::execAddUnit },
		{ "CalculateTimeForResource", &ARessourceCollector::execCalculateTimeForResource },
		{ "RemoveUnit", &ARessourceCollector::execRemoveUnit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARessourceCollector);
UClass* Z_Construct_UClass_ARessourceCollector_NoRegister()
{
	return ARessourceCollector::StaticClass();
}
struct Z_Construct_UClass_ARessourceCollector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RessourceCollector.h" },
		{ "ModuleRelativePath", "Public/RessourceCollector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__resourceType_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/RessourceCollector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__maxUnits_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/RessourceCollector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__baseProductionTime_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/RessourceCollector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__currentProductionTime_MetaData[] = {
		{ "Category", "Resource" },
		{ "ModuleRelativePath", "Public/RessourceCollector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp__resourceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp__resourceType;
	static const UECodeGen_Private::FIntPropertyParams NewProp__maxUnits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__baseProductionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__currentProductionTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARessourceCollector_AddUnit, "AddUnit" }, // 4178680066
		{ &Z_Construct_UFunction_ARessourceCollector_CalculateTimeForResource, "CalculateTimeForResource" }, // 1853682298
		{ &Z_Construct_UFunction_ARessourceCollector_RemoveUnit, "RemoveUnit" }, // 1040127026
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARessourceCollector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARessourceCollector_Statics::NewProp__resourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARessourceCollector_Statics::NewProp__resourceType = { "_resourceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARessourceCollector, _resourceType), Z_Construct_UEnum_EchoesOfTheFracture_EResourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__resourceType_MetaData), NewProp__resourceType_MetaData) }; // 988554843
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARessourceCollector_Statics::NewProp__maxUnits = { "_maxUnits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARessourceCollector, _maxUnits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__maxUnits_MetaData), NewProp__maxUnits_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARessourceCollector_Statics::NewProp__baseProductionTime = { "_baseProductionTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARessourceCollector, _baseProductionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__baseProductionTime_MetaData), NewProp__baseProductionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARessourceCollector_Statics::NewProp__currentProductionTime = { "_currentProductionTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARessourceCollector, _currentProductionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__currentProductionTime_MetaData), NewProp__currentProductionTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARessourceCollector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARessourceCollector_Statics::NewProp__resourceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARessourceCollector_Statics::NewProp__resourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARessourceCollector_Statics::NewProp__maxUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARessourceCollector_Statics::NewProp__baseProductionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARessourceCollector_Statics::NewProp__currentProductionTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARessourceCollector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARessourceCollector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EchoesOfTheFracture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARessourceCollector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARessourceCollector_Statics::ClassParams = {
	&ARessourceCollector::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARessourceCollector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARessourceCollector_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARessourceCollector_Statics::Class_MetaDataParams), Z_Construct_UClass_ARessourceCollector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARessourceCollector()
{
	if (!Z_Registration_Info_UClass_ARessourceCollector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARessourceCollector.OuterSingleton, Z_Construct_UClass_ARessourceCollector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARessourceCollector.OuterSingleton;
}
template<> ECHOESOFTHEFRACTURE_API UClass* StaticClass<ARessourceCollector>()
{
	return ARessourceCollector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARessourceCollector);
ARessourceCollector::~ARessourceCollector() {}
// End Class ARessourceCollector

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EResourceType_StaticEnum, TEXT("EResourceType"), &Z_Registration_Info_UEnum_EResourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 988554843U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARessourceCollector, ARessourceCollector::StaticClass, TEXT("ARessourceCollector"), &Z_Registration_Info_UClass_ARessourceCollector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARessourceCollector), 599960463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_3061337199(TEXT("/Script/EchoesOfTheFracture"),
	Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_angyo_Documents_GitHub_Echoes_of_the_Fracture_EchoesOfTheFracture_Source_EchoesOfTheFracture_Public_RessourceCollector_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
