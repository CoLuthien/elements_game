// Copyright Epic Games, Inc. All Rights Reserved.

#include "ElementsUI.h"

#define LOCTEXT_NAMESPACE "FElementsUIModule"

void FElementsUIModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FElementsUIModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FElementsUIModule, ElementsUI)