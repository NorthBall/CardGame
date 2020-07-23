// Fill out your copyright notice in the Description page of Project Settings.

#include "CardCreateBase.h"
#include "BaseCardWidget.h"
#include "Components/WrapBox.h"


UCardCreateBase::UCardCreateBase(const FObjectInitializer& ObjectInit):UUserWidget(ObjectInit)
{
	//RightDeck.Sort();
}
void UCardCreateBase::RefreshDeck()
{
	RightDeck.Sort();
	RightWrap->ClearChildren();
	for (auto Card : RightDeck)
	{
		RightWrap->AddChildToWrapBox(Card);
	}
}