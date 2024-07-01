// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GD_Shooter/BTTask_ClearBBValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ClearBBValue() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	GD_SHOOTER_API UClass* Z_Construct_UClass_UBTTask_ClearBBValue();
	GD_SHOOTER_API UClass* Z_Construct_UClass_UBTTask_ClearBBValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GD_Shooter();
// End Cross Module References
	void UBTTask_ClearBBValue::StaticRegisterNativesUBTTask_ClearBBValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ClearBBValue);
	UClass* Z_Construct_UClass_UBTTask_ClearBBValue_NoRegister()
	{
		return UBTTask_ClearBBValue::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_ClearBBValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_ClearBBValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GD_Shooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ClearBBValue_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ClearBBValue_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_ClearBBValue.h" },
		{ "ModuleRelativePath", "BTTask_ClearBBValue.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_ClearBBValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ClearBBValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ClearBBValue_Statics::ClassParams = {
		&UBTTask_ClearBBValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ClearBBValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ClearBBValue_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBTTask_ClearBBValue()
	{
		if (!Z_Registration_Info_UClass_UBTTask_ClearBBValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ClearBBValue.OuterSingleton, Z_Construct_UClass_UBTTask_ClearBBValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_ClearBBValue.OuterSingleton;
	}
	template<> GD_SHOOTER_API UClass* StaticClass<UBTTask_ClearBBValue>()
	{
		return UBTTask_ClearBBValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ClearBBValue);
	UBTTask_ClearBBValue::~UBTTask_ClearBBValue() {}
	struct Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_BTTask_ClearBBValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_BTTask_ClearBBValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ClearBBValue, UBTTask_ClearBBValue::StaticClass, TEXT("UBTTask_ClearBBValue"), &Z_Registration_Info_UClass_UBTTask_ClearBBValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ClearBBValue), 2179380347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_BTTask_ClearBBValue_h_1916869868(TEXT("/Script/GD_Shooter"),
		Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_BTTask_ClearBBValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_BTTask_ClearBBValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
