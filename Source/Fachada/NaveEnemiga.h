// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class FACHADA_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	int cantidadBalas;
	float Energia;
	float velocidad;
	float tiempoDisparo;

public:

	virtual void Mover();
	virtual void Disparar();
	virtual void RecibirDanio();

};
