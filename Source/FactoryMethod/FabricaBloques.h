// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fabrica.h"
#include "FabricaBloques.generated.h"

/**
 * 
 */
UCLASS()
class FACTORYMETHOD_API AFabricaBloques : public AFabrica
{
	GENERATED_BODY()
	
public:

	virtual ABloque* CrearBloque(FString tipoBloque, FVector posicionBloque) override;

};
