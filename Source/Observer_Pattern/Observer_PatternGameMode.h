// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Observer_PatternGameMode.generated.h"

UCLASS(minimalapi)
class AObserver_PatternGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AObserver_PatternGameMode();

protected:

	virtual void BeginPlay() override;

	class AVidasEnemigoObserver* observer;
	class AEnemigo1* enemigo1;
};



