// Fill out your copyright notice in the Description page of Project Settings.


#include "Publicador.h"
#include "ISubscriptor.h"

// Sets default values
APublicador::APublicador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Eventos = 0;
	ArrayEnemigos = TArray<AActor*>();
	//TArray<FString> Eventos = TArray<FString>();
   
}
    
// Called when the game starts or when spawned
void APublicador::BeginPlay()
{
	Super::BeginPlay();
    GetWorldTimerManager().SetTimer(TimerHandle, this, &APublicador::ActivarEventos, 5.0f, true);

    // Agregar eventos de ejemplo
    AgregarEventos("QuitarVida");
    AgregarEventos("AumentarVelocidad");
    AgregarEventos("CambiarDireccion");
    AgregarEventos("ActivarDefensa");
    AgregarEventos("QuitarVida");  // Reutilización del evento "QuitarVida"

}

// Called every frame
void APublicador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublicador::Subscribirse(AActor* _subs)
{
    ArrayEnemigos.Add(_subs);
}

void APublicador::Cancelar(AActor* _subs)
{
    ArrayEnemigos.Remove(_subs);
}

void APublicador::Notificar()
{
    for (AActor* Actor : ArrayEnemigos)
    {
        IISubscriptor* Sus = Cast<IISubscriptor>(Actor);

        if (Sus)
        {
            Sus->Actualizar(this);
        }
    }
}

void APublicador::ActivarEventos()
{
    Eventos++;

    if (Eventos >= 5)
    {
        // Stop the timer
        GetWorldTimerManager().ClearTimer(TimerHandle);
    }

}

void APublicador::AgregarEventos(FString _nuevoevento)
{
	_Eventos.Add(_nuevoevento);
}
