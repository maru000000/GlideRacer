// Fill out your copyright notice in the Description page of Project Settings.


#include "Car/SUV/GlideRacerSUVWheelFront.h"

UGlideRacerSUVWheelFront::UGlideRacerSUVWheelFront()
{
	WheelRadius = 36.0f;
	WheelWidth = 19.0f;
	WheelMass = 20.0f;

	FrictionForceMultiplier = 2.0f;
	SlipThreshold = 20.0f;
	SkidThreshold = 20.0f;
	MaxSteerAngle = 46.0f;

	MaxBrakeTorque = 1500.0f;
	MaxHandBrakeTorque = 3000.0f;
}
