// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloquesMagicos.h"
#include "BloqueVidrio.h"
#include "BloqueMadera.h"
#include "BloqueOro.h"

ABloque* AFabricaBloquesMagicos::CrearBloque(FString tipoBloque, FVector posicionBloque)
{
	//Select which potion to spawn depending on the passed string
	if (tipoBloque.Equals("Vidrio")) {
		return GetWorld()->SpawnActor<ABloqueVidrio>
			(ABloqueVidrio::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque.Equals("Madera")) {
		return GetWorld()->SpawnActor<ABloqueMadera>
			(ABloqueMadera::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque.Equals("Oro")) {
		return GetWorld()->SpawnActor<ABloqueOro>
			(ABloqueOro::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else {
		return nullptr;
	}
}