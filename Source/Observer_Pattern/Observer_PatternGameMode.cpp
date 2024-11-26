// Copyright Epic Games, Inc. All Rights Reserved.

#include "Observer_PatternGameMode.h"
#include "Observer_PatternCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "VidasEnemigoObserver.h"
#include "Publicador.h"
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

	FVector enemigo1Location = FVector(0.0f, 0.0f, 0.0f);

	observer = GetWorld()->SpawnActor<AVidasEnemigoObserver>(AVidasEnemigoObserver::StaticClass());
	enemigo1 = GetWorld()->SpawnActor<AEnemigo1>(AEnemigo1::StaticClass());
	//publicado = GetWorld()->SpawnActor<APublicador>(APublicador::StaticClass());

	enemigo1->EstablecerObserver(observer);
	observer->EstablecerAccion("Quitavida");
	observer->EstablecerAccion("QuitaVida");
	observer->EstablecerAccion("QuitaVida");
	observer->EstablecerAccion("AumentarVelocidad");
	observer->EstablecerAccion("CambiarDireccion");
	observer->EstablecerAccion("ActivarDefensa");
	observer->EstablecerAccion("QuitarVida");

}