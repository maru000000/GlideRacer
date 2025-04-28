// Copyright Epic Games, Inc. All Rights Reserved.

#include "GlideRacerGameMode.h"
#include "Player/GlideRacerPlayerController.h"

AGlideRacerGameMode::AGlideRacerGameMode()
{
	PlayerControllerClass = AGlideRacerPlayerController::StaticClass();
}
