// Fill out your copyright notice in the Description page of Project Settings.


#include "TestGameModeBase.h"

#include "TestPlayerController.h"
#include "TestPawn.h"

ATestGameModeBase::ATestGameModeBase()
{
	PlayerControllerClass = ATestPlayerController::StaticClass();
	DefaultPawnClass = ATestPawn::StaticClass();
}
