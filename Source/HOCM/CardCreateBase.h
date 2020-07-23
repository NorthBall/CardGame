// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CardCreateBase.generated.h"

/**
 * 
 */
class UBaseCardWidget;
class UWrapBox;
UCLASS()
class HOCM_API UCardCreateBase : public UUserWidget
{
	GENERATED_BODY()
public:
	UCardCreateBase(const FObjectInitializer &ObjectInit);
	TArray<UBaseCardWidget*> RightDeck;
	UWrapBox* RightWrap;
	UFUNCTION(BlueprintCallable)
		void RefreshDeck();
};
