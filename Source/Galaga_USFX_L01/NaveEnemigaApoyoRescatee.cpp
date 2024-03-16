// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaApoyoRescatee.h"


void ANaveEnemigaApoyoRescatee::Tick(float DeltaTime) {

	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}
void ANaveEnemigaApoyoRescatee::Mover(float DeltaTime)
{
	SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 1));
}


void ANaveEnemigaApoyoRescatee::RescatarNave()
{
}

void ANaveEnemigaApoyoRescatee::TrasladoTripulacion()
{
}


void ANaveEnemigaApoyoRescatee::EntregarSuministros()
{
}

void ANaveEnemigaApoyoRescatee::ActivarEscudos()
{
}
