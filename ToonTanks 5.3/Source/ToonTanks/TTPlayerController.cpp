// Fill out your copyright notice in the Description page of Project Settings.


#include "TTPlayerController.h"

void ATTPlayerController::SetPlayerEnableState(bool bPlayerEnabled)
{
	bShowMouseCursor = bPlayerEnabled;
	
	if(bPlayerEnabled)
	{
		GetPawn()->EnableInput(this);
		return;
	}
	GetPawn()->DisableInput(this);
}
