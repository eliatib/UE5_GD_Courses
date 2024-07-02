// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GD_Shooter/IAShooter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAShooter() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	GD_SHOOTER_API UClass* Z_Construct_UClass_AIAShooter();
	GD_SHOOTER_API UClass* Z_Construct_UClass_AIAShooter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GD_Shooter();
// End Cross Module References
	void AIAShooter::StaticRegisterNativesAIAShooter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIAShooter);
	UClass* Z_Construct_UClass_AIAShooter_NoRegister()
	{
		return AIAShooter::StaticClass();
	}
	struct Z_Construct_UClass_AIAShooter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IAShooterBT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IAShooterBT;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIAShooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GD_Shooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIAShooter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIAShooter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "IAShooter.h" },
		{ "ModuleRelativePath", "IAShooter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIAShooter_Statics::NewProp_IAShooterBT_MetaData[] = {
		{ "Category", "IA" },
		{ "ModuleRelativePath", "IAShooter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIAShooter_Statics::NewProp_IAShooterBT = { "IAShooterBT", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIAShooter, IAShooterBT), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIAShooter_Statics::NewProp_IAShooterBT_MetaData), Z_Construct_UClass_AIAShooter_Statics::NewProp_IAShooterBT_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIAShooter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIAShooter_Statics::NewProp_IAShooterBT,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIAShooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIAShooter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIAShooter_Statics::ClassParams = {
		&AIAShooter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIAShooter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIAShooter_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIAShooter_Statics::Class_MetaDataParams), Z_Construct_UClass_AIAShooter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIAShooter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AIAShooter()
	{
		if (!Z_Registration_Info_UClass_AIAShooter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIAShooter.OuterSingleton, Z_Construct_UClass_AIAShooter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIAShooter.OuterSingleton;
	}
	template<> GD_SHOOTER_API UClass* StaticClass<AIAShooter>()
	{
		return AIAShooter::StaticClass();
	}
	AIAShooter::AIAShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIAShooter);
	AIAShooter::~AIAShooter() {}
	struct Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_UE5_C___Courses_UE5_GD_Courses_GD_Shooter_Source_GD_Shooter_IAShooter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_UE5_C___Courses_UE5_GD_Courses_GD_Shooter_Source_GD_Shooter_IAShooter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIAShooter, AIAShooter::StaticClass, TEXT("AIAShooter"), &Z_Registration_Info_UClass_AIAShooter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIAShooter), 1972381424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_UE5_C___Courses_UE5_GD_Courses_GD_Shooter_Source_GD_Shooter_IAShooter_h_3578161312(TEXT("/Script/GD_Shooter"),
		Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_UE5_C___Courses_UE5_GD_Courses_GD_Shooter_Source_GD_Shooter_IAShooter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_UE5_C___Courses_UE5_GD_Courses_GD_Shooter_Source_GD_Shooter_IAShooter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
