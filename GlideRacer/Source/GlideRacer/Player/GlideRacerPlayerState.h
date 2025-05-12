// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/GlideRacerAbilitySystemComponent.h"
#include "AbilitySystem/Attributes/GlideRacerPlayerSet.h"
#include "GlideRacerPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class GLIDERACER_API AGlideRacerPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	AGlideRacerPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

public:
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UGlideRacerAbilitySystemComponent* GetGlideRacerAbilitySystemComponent() const; // Casting Ver
	UGlideRacerAttributeSet* GetGlideRacerPlayerSet() const;

protected:
	UPROPERTY(VisibleAnyWhere, BlueprintReadWrite)
	TObjectPtr<UGlideRacerAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UGlideRacerPlayerSet> PlayerSet;
};
