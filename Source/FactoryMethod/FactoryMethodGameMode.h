// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FactoryMethodGameMode.generated.h"
class AFabrica; class ABloque; class AFabricaBloques; class AFabricaBloquesMagicos;
UCLASS(minimalapi)
class AFactoryMethodGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFactoryMethodGameMode();

	// FactoryMethodGameMode.h

	UPROPERTY()
	AFabrica* FabricaDeBloques;

	UPROPERTY()
	AFabrica* FabricaDeBloquesMagicos;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Declarar la posición del siguiente bloque
	FVector posicionSiguienteBloque = FVector(1000.0f, 500.0f, 20.0f);

	// Declarar un mapa de bloques como un array bidimensional

	TArray<TArray<int32>> aMapaBloques = {
	  {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
	{4, 0, 1, 0, 1, 2, 0, 3, 5, 0, 0, 0, 3, 0, 0, 6, 4},
	{4, 2, 3, 6, 1, 2, 6, 0, 5, 0, 6, 0, 3, 1, 0, 6, 4},
	{4, 0, 0, 0, 2, 0, 2, 0, 0, 0, 3, 6, 0, 1, 0, 0, 4},
	{4, 3, 1, 2, 5, 0, 0, 5, 6, 0, 5, 0, 1, 2, 3, 5, 4},
	{4, 0, 0, 2, 0, 2, 0, 0, 0, 1, 0, 3, 0, 0, 3, 0, 4},
	{4, 1, 5, 0, 2, 0, 6, 0, 6, 2, 0, 0, 5, 0, 0, 0, 4},
	{4, 0, 0, 1, 0, 0, 2, 0, 1, 0, 3, 6, 0, 2, 0, 1, 4},
	{4, 6, 5, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 4},
	{4, 0, 0, 0, 2, 0, 3, 2, 6, 0, 2, 0, 0, 0, 0, 0, 4},
	{4, 1, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 2, 0, 0, 0, 4},
	{4, 0, 0, 5, 3, 0, 5, 0, 0, 2, 0, 0, 0, 0, 5, 0, 4},
	{4, 3, 1, 0, 2, 0, 0, 1, 0, 0, 1, 0, 0, 0, 3, 0, 4},
	{4, 2, 0, 5, 0, 5, 0, 6, 0, 2, 0, 0, 0, 5, 3, 5, 4},
	{4, 0, 0, 5, 0, 0, 2, 0, 0 ,1, 3, 0, 2, 0, 3, 0, 4},
	{4, 5, 2, 0, 3, 1, 0, 1, 5, 0, 0, 1, 3, 0, 0, 2, 4},
	{4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4}
	};

	float XInicial = 1000.00f;
	float YInicial = 1000.00f;
	float AnchoBloque = 200.0f;
	float LargoBloque = 200.0f;
	ABloque* BloqueActual = nullptr;
	// Declarar un array de punteros a objetos de tipo BloqueMadera
	TArray<ABloque*> aBloques;

	//void SpawnBloques();
	void SpawnBloque(FVector posicion, int32 tipoBloque); 
	// Método para generar bloques en el mapa
	void SpawnBloques();

};



