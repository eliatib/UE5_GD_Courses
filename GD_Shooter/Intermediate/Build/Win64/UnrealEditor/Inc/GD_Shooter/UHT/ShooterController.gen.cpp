// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GD_Shooter/ShooterController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	GD_SHOOTER_API UClass* Z_Construct_UClass_AShooterController();
	GD_SHOOTER_API UClass* Z_Construct_UClass_AShooterController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GD_Shooter();
// End Cross Module References
	void AShooterController::StaticRegisterNativesAShooterController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterController);
	UClass* Z_Construct_UClass_AShooterController_NoRegister()
	{
		return AShooterController::StaticClass();
	}
	struct Z_Construct_UClass_AShooterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestartDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RestartDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoseUI_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LoseUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WinUI_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WinUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GD_Shooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ShooterController.h" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterController_Statics::NewProp_RestartDelay_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_RestartDelay = { "RestartDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, RestartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterController_Statics::NewProp_RestartDelay_MetaData), Z_Construct_UClass_AShooterController_Statics::NewProp_RestartDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterController_Statics::NewProp_LoseUI_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_LoseUI = { "LoseUI", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, LoseUI), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterController_Statics::NewProp_LoseUI_MetaData), Z_Construct_UClass_AShooterController_Statics::NewProp_LoseUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterController_Statics::NewProp_WinUI_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_WinUI = { "WinUI", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, WinUI), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterController_Statics::NewProp_WinUI_MetaData), Z_Construct_UClass_AShooterController_Statics::NewProp_WinUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterController_Statics::NewProp_HUDClass_MetaData[] = {
		{ "Category", "ShooterController" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_HUDClass = { "HUDClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, HUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterController_Statics::NewProp_HUDClass_MetaData), Z_Construct_UClass_AShooterController_Statics::NewProp_HUDClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterController_Statics::NewProp_HUD_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterController_Statics::NewProp_HUD = { "HUD", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterController, HUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterController_Statics::NewProp_HUD_MetaData), Z_Construct_UClass_AShooterController_Statics::NewProp_HUD_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_RestartDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_LoseUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_WinUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_HUDClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterController_Statics::NewProp_HUD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterController_Statics::ClassParams = {
		&AShooterController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShooterController()
	{
		if (!Z_Registration_Info_UClass_AShooterController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterController.OuterSingleton, Z_Construct_UClass_AShooterController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterController.OuterSingleton;
	}
	template<> GD_SHOOTER_API UClass* StaticClass<AShooterController>()
	{
		return AShooterController::StaticClass();
	}
	AShooterController::AShooterController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterController);
	AShooterController::~AShooterController() {}
	struct Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_UE5_C___Courses_UE5_GD_Courses_GD_Shooter_Source_GD_Shooter_ShooterController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_UE5_C___Courses_UE5_GD_Courses_GD_Shooter_Source_GD_Shooter_ShooterController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterController, AShooterController::StaticClass, TEXT("AShooterController"), &Z_Registration_Info_UClass_AShooterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterController), 3562905596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_UE5_C___Courses_UE5_GD_Courses_GD_Shooter_Source_GD_Shooter_ShooterController_h_1764406913(TEXT("/Script/GD_Shooter"),
		Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_UE5_C___Courses_UE5_GD_Courses_GD_Shooter_Source_GD_Shooter_ShooterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_UE5_C___Courses_UE5_GD_Courses_GD_Shooter_Source_GD_Shooter_ShooterController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
