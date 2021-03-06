// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "ModuleManager.h"

DECLARE_STATS_GROUP(TEXT("DraggebleWindow"), STATGROUP_DraggebleWindow, STATCAT_Advanced);

class FDraggableWindowModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
#if WITH_EDITORONLY_DATA
	void HandlePIEEnd(bool InVal);
#endif
};