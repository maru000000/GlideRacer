// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/BTTaskNode_MoveToTarget.h"
#include "AI/GlideRacerAIController.h"
#include "Car/GlideRacerVehiclePawn.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "NavigationSystem.h"
#include "ChaosWheeledVehicleMovementComponent.h"



EBTNodeResult::Type UBTTaskNode_MoveToTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp , NodeMemory);

    AAIController* AICon = OwnerComp.GetAIOwner();
    AGlideRacerVehiclePawn* Vehicle = Cast<AGlideRacerVehiclePawn>(AICon->GetPawn());
    UChaosVehicleMovementComponent* ChaosVehicleMovement = Vehicle->GetVehicleMovement();

    FVector TargetLocation = OwnerComp.GetBlackboardComponent()->GetValueAsVector(TEXT("TargetLocation"));
    FVector Direction = (TargetLocation - Vehicle->GetActorLocation()).GetSafeNormal();
    FVector Forward = Vehicle->GetActorForwardVector();

    float Dot = FVector::DotProduct(Forward, Direction);
    float Cross = FVector::CrossProduct(Forward, Direction).Z;

    ChaosVehicleMovement->SetThrottleInput(1.0f); // 앞으로 계속 이동
    ChaosVehicleMovement->SetSteeringInput(FMath::Clamp(Cross, -1.0f, 1.0f));

    float epsilon = 10.0f;

   /* if (FVector::Dist(Vehicle->GetActorLocation(), TargetLocation) < epsilon)
    {
        return EBTNodeResult::Succeeded;
    }*/

    return EBTNodeResult::Succeeded;
}


/*
void UBTTaskNode_MoveToTarget::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float deltaSeconds)
{
    Super::TickTask(OwnerComp, NodeMemory, deltaSeconds);

    AAIController* AICon = OwnerComp.GetAIOwner();
    AGlideRacerVehiclePawn* Vehicle = Cast<AGlideRacerVehiclePawn>(AICon->GetPawn());
    UChaosVehicleMovementComponent* ChaosVehicleMovement = Vehicle->GetVehicleMovement();

    FVector TargetLocation = OwnerComp.GetBlackboardComponent()->GetValueAsVector(TEXT("TargetLocation"));
    FVector Direction = (TargetLocation - Vehicle->GetActorLocation()).GetSafeNormal();
    FVector Forward = Vehicle->GetActorForwardVector();

    float Dot = FVector::DotProduct(Forward, Direction);
    float Cross = FVector::CrossProduct(Forward, Direction).Z;

    ChaosVehicleMovement->SetThrottleInput(1.0f); // 앞으로 계속 이동
    ChaosVehicleMovement->SetSteeringInput(FMath::Clamp(Cross, -1.0f, 1.0f));

    float epsilon = 10.0f;

    if (FVector::Dist(Vehicle->GetActorLocation(), TargetLocation) < epsilon)
    {
        FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
    }

    //FinishLatentTask(OwnerComp, EBTNodeResult::InProgress);
}
*/