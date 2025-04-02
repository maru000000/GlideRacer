// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GlideRacerPawn.h"
#include "GlideRacerSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class GLIDERACER_API AGlideRacerSportsCar : public AGlideRacerPawn
{
	GENERATED_BODY()
	
public:

	AGlideRacerSportsCar();
};
