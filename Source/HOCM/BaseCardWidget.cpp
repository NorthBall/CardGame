// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCardWidget.h"


bool operator<(const UBaseCardWidget& first, const UBaseCardWidget& second)
{
	if (first.Mana == second.Mana) {
		if (first.ShortName == second.ShortName) {
			return first.Amount < second.Amount;
		}
		else {
			return first.ShortName < second.ShortName;
		}
	}
	else {
		return first.Mana < second.Mana;
	}


}

FLinearColor UBaseCardWidget::BrushHighlight()
{
	if (MustLight) return FLinearColor(0.5, 0, 0.02, 1);
	else return FLinearColor(0, 0, 0, 0);
}
