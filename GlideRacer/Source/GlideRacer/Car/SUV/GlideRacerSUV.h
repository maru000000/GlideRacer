// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Car/GlideRacerVehiclePawn.h"
#include "GlideRacerSUV.generated.h"

/**
 * 
 */
UCLASS()
class GLIDERACER_API AGlideRacerSUV : public AGlideRacerVehiclePawn
{
	GENERATED_BODY()
public:
	AGlideRacerSUV();

	void StartDrift();
	void StopDrift();
	void UpdateWheelFriction(bool bDrift);

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drift")
	bool bIsDrifting = false;
};
