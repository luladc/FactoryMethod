// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Bloque.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fabrica.generated.h"

UCLASS()
class FACTORYMETHOD_API AFabrica : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabrica();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual ABloque* CrearBloque(FString tipoBloque, FVector posicionBloque) PURE_VIRTUAL(AFabrica::CrearBloque, return nullptr;);

	// Factory method to create a block
	virtual ABloque* CrearBloque(FString tipo);

};
