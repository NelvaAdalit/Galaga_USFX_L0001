// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaApoyoReparacion.h"


void ANaveEnemigaApoyoReparacion::Tick(float DeltaTime) {

	Super::Tick(DeltaTime);
	Mover(DeltaTime);

}

void ANaveEnemigaApoyoReparacion::Mover(float DeltaTime)
{
	//velocidad = 1;
	SetActorLocation(FVector(GetActorLocation().X , GetActorLocation().Y -1, GetActorLocation().Z + 2));

}


void ANaveEnemigaApoyoReparacion::regenerarEscudos()
{
}

void ANaveEnemigaApoyoReparacion::recargarMunicion()
{
}

void ANaveEnemigaApoyoReparacion::recargarCombustible()
{
}

void ANaveEnemigaApoyoReparacion::repararNave()
{
}
