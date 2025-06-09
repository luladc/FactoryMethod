// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueVidrio.h"

ABloqueVidrio::ABloqueVidrio()
{
    if (MallaBloque)
    {
        static ConstructorHelpers::FObjectFinder<UMaterial> MaterialBase(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Glass.M_Glass'"));

        if (MaterialBase.Succeeded())
        {
            MallaBloque->SetMaterial(0, MaterialBase.Object); // Asignar el material al slot 0
        }
    }
    bPuedeMoverse = FMath::RandBool(); // Desactivar el movimiento
	BloquenName = "Vidrio"; // Nombre del bloque
}

void ABloqueVidrio::BeginPlay()
{
    Super::BeginPlay();
    GetWorld()->GetTimerManager().SetTimer(TimerDestruir, this, &ABloqueVidrio::DestruirBloque, 5.0f, false);
}

void ABloqueVidrio::DestruirBloque()
{
    if (bPuedeMoverse)
    {
        // L�gica para destruir el bloque
        Destroy();
    }

}