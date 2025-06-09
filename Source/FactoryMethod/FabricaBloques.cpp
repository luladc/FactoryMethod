// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloques.h"
#include "BloqueAcero.h"
#include "BloqueConcreto.h"
#include "BloqueLadrillo.h"

ABloque* AFabricaBloques::CrearBloque(FString tipoBloque, FVector posicionBloque)
{
	//Select which potion to spawn depending on the passed string
	if (tipoBloque.Equals("Acero")) {
		return GetWorld()->SpawnActor<ABloqueAcero>
			(ABloqueAcero::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque.Equals("Concreto")) {
		return GetWorld()->SpawnActor<ABloqueConcreto>
			(ABloqueConcreto::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else if (tipoBloque.Equals("Ladrillo")) {
		return GetWorld()->SpawnActor<ABloqueLadrillo>
			(ABloqueLadrillo::StaticClass(), posicionBloque, FRotator(0.0f, 0.0f, 0.0f));
	}
	else {
		return nullptr;
	}
}
