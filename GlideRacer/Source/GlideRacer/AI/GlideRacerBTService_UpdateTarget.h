// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "GlideRacerBTService_UpdateTarget.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class GLIDERACER_API UGlideRacerBTService_UpdateTarget : public UBTService
{
	GENERATED_BODY()

public:
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector TargetKey;
};
