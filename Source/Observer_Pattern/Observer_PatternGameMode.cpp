// Copyright Epic Games, Inc. All Rights Reserved.

#include "Observer_PatternGameMode.h"
#include "Observer_PatternCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "VidasEnemigoObserver.h"
#include "Enemigo1.h"

AObserver_PatternGameMode::AObserver_PatternGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AObserver_PatternGameMode::BeginPlay()
{
	Super::BeginPlay();

	observer = GetWorld()->SpawnActor<AVidasEnemigoObserver>(AVidasEnemigoObserver::StaticClass());
	enemigo1 = GetWorld()->SpawnActor<AEnemigo1>(AEnemigo1::StaticClass());

	enemigo1->EstablecerObserver(observer);
	observer->EstablecerAccion("Quitavida");
	observer->EstablecerAccion("QuitaVida");
	observer->EstablecerAccion("QuitaVida");

}