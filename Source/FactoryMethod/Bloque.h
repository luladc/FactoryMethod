// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.generated.h"

UCLASS()
class FACTORYMETHOD_API ABloque : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloque();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//nombre del bloque
	FString BloquenName;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bloque")
	UStaticMeshComponent* MallaBloque;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	bool bPuedeMoverse;
	FVector TamanoBloque;


};
