// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GD_Shooter/KillThemAllGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillThemAllGameMode() {}
// Cross Module References
	GD_SHOOTER_API UClass* Z_Construct_UClass_AKillThemAllGameMode();
	GD_SHOOTER_API UClass* Z_Construct_UClass_AKillThemAllGameMode_NoRegister();
	GD_SHOOTER_API UClass* Z_Construct_UClass_AShooterGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GD_Shooter();
// End Cross Module References
	void AKillThemAllGameMode::StaticRegisterNativesAKillThemAllGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKillThemAllGameMode);
	UClass* Z_Construct_UClass_AKillThemAllGameMode_NoRegister()
	{
		return AKillThemAllGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKillThemAllGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKillThemAllGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShooterGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GD_Shooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKillThemAllGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKillThemAllGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "KillThemAllGameMode.h" },
		{ "ModuleRelativePath", "KillThemAllGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKillThemAllGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKillThemAllGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKillThemAllGameMode_Statics::ClassParams = {
		&AKillThemAllGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKillThemAllGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AKillThemAllGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AKillThemAllGameMode()
	{
		if (!Z_Registration_Info_UClass_AKillThemAllGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKillThemAllGameMode.OuterSingleton, Z_Construct_UClass_AKillThemAllGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKillThemAllGameMode.OuterSingleton;
	}
	template<> GD_SHOOTER_API UClass* StaticClass<AKillThemAllGameMode>()
	{
		return AKillThemAllGameMode::StaticClass();
	}
	AKillThemAllGameMode::AKillThemAllGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKillThemAllGameMode);
	AKillThemAllGameMode::~AKillThemAllGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_KillThemAllGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_KillThemAllGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKillThemAllGameMode, AKillThemAllGameMode::StaticClass, TEXT("AKillThemAllGameMode"), &Z_Registration_Info_UClass_AKillThemAllGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKillThemAllGameMode), 1829520307U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_KillThemAllGameMode_h_168684712(TEXT("/Script/GD_Shooter"),
		Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_KillThemAllGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_KillThemAllGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
