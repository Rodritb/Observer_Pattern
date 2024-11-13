// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemigo1.h"
#include "VidasEnemigoObserver.h"
#include "Engine/Engine.h"
#include "Components/SphereComponent.h"
#include "UObject/ConstructorHelpers.h"
#include  "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
// Sets default values
AEnemigo1::AEnemigo1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VidasEnemigo = 3;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));  // Ejemplo con una esfera
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp"));
	StaticMeshComp->SetStaticMesh(Mesh.Object);
	RootComponent = StaticMeshComp;
	
	colision = CreateDefaultSubobject<UBoxComponent>(TEXT("Colision"));
	colision->SetupAttachment(RootComponent);
	colision->OnComponentBeginOverlap.AddDynamic(this, &AEnemigo1::OnOverlapBegin);
	
	// Crear componente de colisión
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->InitSphereRadius(110.0f);
	SphereComponent->SetCollisionProfileName(TEXT("Trigger"));
	SphereComponent->SetupAttachment(RootComponent);
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AEnemigo1::OnOverlapBegin);

}


// Called when the game starts or when spawned
void AEnemigo1::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green,
	FString::Printf(TEXT("El enemigo tiene %d vidas"), GetVidasEnemigo()));
}

void AEnemigo1::MallaColision(AActor* OtherActor)
{
	// Mostrar mensaje de colisión en los logs
	UE_LOG(LogTemp, Warning, TEXT("¡Colisión detectada!"));

	// Reducir vida al colisionar
	SetVidasEnemigo(1);

	// Verificar si la vida llegó a 0
	if (VidasEnemigo == 0)
	{
		// Destruir al enemigo si la vida llega a 0
		Destroyed();
	}

}

void AEnemigo1::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		// Mostrar mensaje de colisión en los logs
		UE_LOG(LogTemp, Warning, TEXT("¡Colisión detectada!"));

		// Reducir vida al colisionar
		SetVidasEnemigo(1);

		// Verificar si la vida llegó a 0
		if (VidasEnemigo == 0)
		{
			// Destruir al enemigo si la vida llega a 0
			Destroyed();
		}
	}
}

// Called every frame
void AEnemigo1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (GetVidasEnemigo() == 0) {
		Destroyed();
	}

}

void AEnemigo1::EstablecerObserver(AVidasEnemigoObserver* _observer)
{
	observer = _observer;
	observer->Subscribirse(this);
}

void AEnemigo1::Actualizar(APublicador* _publicador)
{
	Actuar();
}

void AEnemigo1::Actuar()
{
	FString mensaje_recibido = observer->GetMensaje();
	if (mensaje_recibido.Equals("QuitarVida"))
	{
		SetVidasEnemigo(1);
	}
	
}

void AEnemigo1::SetVidasEnemigo(int32 _vidas)
{
	VidasEnemigo -= _vidas;
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta,
	FString::Printf(TEXT("El enemigo tiene %d vidas"), GetVidasEnemigo()));
}

void AEnemigo1::Destroyed()
{
	if (VidasEnemigo==0)
	{
		// Destruir al enemigo si la vida llega a 0
		Destroy();	
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
		FString::Printf(TEXT("El enemigo ya no tiene vidas, fue destruido")));
	}
}
