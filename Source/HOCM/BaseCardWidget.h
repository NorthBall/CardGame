// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseCardWidget.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClickItOn, UBaseCardWidget*, SelfReference);
UCLASS(Blueprintable)
class HOCM_API UBaseCardWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Mana;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic")
		int32 Gold;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Amount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool MustLight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ShortName;
	UPROPERTY(BlueprintAssignable,BlueprintCallable, Category = "Event")
		FClickItOn ClickItOn;
	friend bool operator<(const UBaseCardWidget& first, const UBaseCardWidget& second);
	UFUNCTION(BlueprintCallable,BlueprintPure)
		FLinearColor BrushHighlight();
	
};
