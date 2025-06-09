// Copyright Epic Games, Inc. All Rights Reserved.

#include "FactoryMethodGameMode.h"
#include "FactoryMethodCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Bloque.h"
#include  "Fabrica.h"
#include "FabricaBloques.h"
#include "FabricaBloquesMagicos.h"

AFactoryMethodGameMode::AFactoryMethodGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AFactoryMethodGameMode::BeginPlay()
{
	Super::BeginPlay();
	//Crea las fabricas
	FabricaDeBloques = GetWorld()->SpawnActor<AFabricaBloques>(AFabricaBloques::StaticClass());
	FabricaDeBloquesMagicos = GetWorld()->SpawnActor<AFabricaBloquesMagicos>(AFabricaBloquesMagicos::StaticClass());

	SpawnBloques();
}

// Función para generar un bloque
void AFactoryMethodGameMode::SpawnBloque(FVector posicionBloque, int32 tipoBloque)
{
	//ABloque* BloqueGenerado = nullptr;

	ABloque* BloqueGenerado = nullptr;
	// Elegir tipo de bloque basado en el valor
	if (tipoBloque == 6)
	{
		BloqueGenerado = FabricaDeBloques->CrearBloque("Ladrillo", posicionBloque);
	}
	else if (tipoBloque == 5)
	{
		BloqueGenerado = FabricaDeBloques->CrearBloque("Concreto", posicionBloque);
	}
	else if (tipoBloque == 4)
	{
		BloqueGenerado = FabricaDeBloques->CrearBloque("Acero", posicionBloque);
	}
	else if (tipoBloque == 3)
	{
		BloqueGenerado = FabricaDeBloquesMagicos->CrearBloque("Oro", posicionBloque);
	}
	else if (tipoBloque == 2)
	{
		BloqueGenerado = FabricaDeBloquesMagicos->CrearBloque("Madera", posicionBloque);
	}
	else if (tipoBloque == 1)
	{
		BloqueGenerado = FabricaDeBloquesMagicos->CrearBloque("Vidrio", posicionBloque);
	}
	else {
		return;
	}
	// Agregar el bloque al TArray si fue generado
	if (BloqueGenerado)
	{
		aBloques.Add(BloqueGenerado);
	}

}

void AFactoryMethodGameMode::SpawnBloques()
{
	for (int32 fila = 0; fila < aMapaBloques.Num(); ++fila)
	{
		for (int32 columna = 0; columna < aMapaBloques[fila].Num(); ++columna)
		{
			int32 valor = aMapaBloques[fila][columna];
			if (valor != 0)
			{
				FVector posicionBloque = FVector(
					XInicial + columna * AnchoBloque,
					YInicial + fila * LargoBloque,
					20.0f);

				SpawnBloque(posicionBloque, valor); // Usa el método que ya tenías
			}
		}
	}
}
