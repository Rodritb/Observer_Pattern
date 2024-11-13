// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "ISubscriptor.h"
#include "IAccionEnemiga.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo1.generated.h"

UCLASS()
class OBSERVER_PATTERN_API AEnemigo1 : public AActor, public IIAccionEnemiga, public IISubscriptor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo1();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Destroyed() override;

	int32 VidasEnemigo = 3;
	class AVidasEnemigoObserver* observer;

	void MallaColision(AActor* OtherActor);
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	class UStaticMeshComponent* StaticMeshComp;
	class UBoxComponent* colision;

public:	

	// Componente para manejar las colisiones
	UPROPERTY(VisibleAnywhere, Category = "Collision")
	class USphereComponent* SphereComponent;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void EstablecerObserver(class AVidasEnemigoObserver* _observer) override;
	void Actualizar(class APublicador* _publicador) override;
	void Actuar() override;
	void SetVidasEnemigo(int32 _vidas);
	FORCEINLINE int32 GetVidasEnemigo() { return VidasEnemigo; };

};
