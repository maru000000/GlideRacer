// Copyright Epic Games, Inc. All Rights Reserved.

#include "GlideRacerGameMode.h"
#include "Car/GlideRacerPlayerController.h"

AGlideRacerGameMode::AGlideRacerGameMode()
{
	PlayerControllerClass = AGlideRacerPlayerController::StaticClass();
}
