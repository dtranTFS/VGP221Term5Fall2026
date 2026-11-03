// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "GameMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class VGP221TERM5FALL2026_API UGameMenuWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta=(BindWidget))
	UProgressBar* HealthBar;

	UFUNCTION()
	void UpdateHealthBar(float HealthPercent);
};
