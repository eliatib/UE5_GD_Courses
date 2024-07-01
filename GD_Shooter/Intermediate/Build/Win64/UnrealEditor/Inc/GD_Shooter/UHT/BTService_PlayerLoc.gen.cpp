// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GD_Shooter/BTService_PlayerLoc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_PlayerLoc() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	GD_SHOOTER_API UClass* Z_Construct_UClass_UBTService_PlayerLoc();
	GD_SHOOTER_API UClass* Z_Construct_UClass_UBTService_PlayerLoc_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GD_Shooter();
// End Cross Module References
	void UBTService_PlayerLoc::StaticRegisterNativesUBTService_PlayerLoc()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_PlayerLoc);
	UClass* Z_Construct_UClass_UBTService_PlayerLoc_NoRegister()
	{
		return UBTService_PlayerLoc::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_PlayerLoc_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_PlayerLoc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GD_Shooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_PlayerLoc_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_PlayerLoc_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTService_PlayerLoc.h" },
		{ "ModuleRelativePath", "BTService_PlayerLoc.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_PlayerLoc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_PlayerLoc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_PlayerLoc_Statics::ClassParams = {
		&UBTService_PlayerLoc::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_PlayerLoc_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_PlayerLoc_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBTService_PlayerLoc()
	{
		if (!Z_Registration_Info_UClass_UBTService_PlayerLoc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_PlayerLoc.OuterSingleton, Z_Construct_UClass_UBTService_PlayerLoc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_PlayerLoc.OuterSingleton;
	}
	template<> GD_SHOOTER_API UClass* StaticClass<UBTService_PlayerLoc>()
	{
		return UBTService_PlayerLoc::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_PlayerLoc);
	UBTService_PlayerLoc::~UBTService_PlayerLoc() {}
	struct Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_BTService_PlayerLoc_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_BTService_PlayerLoc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_PlayerLoc, UBTService_PlayerLoc::StaticClass, TEXT("UBTService_PlayerLoc"), &Z_Registration_Info_UClass_UBTService_PlayerLoc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_PlayerLoc), 649547955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_BTService_PlayerLoc_h_1407405849(TEXT("/Script/GD_Shooter"),
		Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_BTService_PlayerLoc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tmich_OneDrive_Documents_Unreal_Projects_GD_Shooter_Source_GD_Shooter_BTService_PlayerLoc_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
