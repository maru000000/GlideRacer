// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/GlideRacerBTService_UpdateTarget.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "AI/GlideRacerAIController.h"
#include "Car/GlideRacerVehiclePawn.h"
#include "Engine/OverlapResult.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"


void UGlideRacerBTService_UpdateTarget::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    APawn* PlayerPawn = OwnerComp.GetAIOwner()->GetWorld()->GetFirstPlayerController()->GetPawn();
    if (PlayerPawn)
    {
        OwnerComp.GetBlackboardComponent()->SetValueAsVector(TEXT("TargetLocation"), PlayerPawn->GetActorLocation());
        OwnerComp.GetBlackboardComponent()->SetValueAsObject(TEXT("Target"), PlayerPawn);
    }
}