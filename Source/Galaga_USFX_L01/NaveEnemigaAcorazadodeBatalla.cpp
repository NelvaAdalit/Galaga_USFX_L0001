// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaAcorazadodeBatalla.h"

void ANaveEnemigaAcorazadodeBatalla::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

	posicion = FVector(1200, -1000, 250);
	
}




void ANaveEnemigaAcorazadodeBatalla::Mover(float DeltaTime)
{
	velocidad = 1;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y - velocidad * flag, GetActorLocation().Z));
	if (GetActorLocation().Y < -1200 || GetActorLocation().Y > -800) {
		flag *= -1;
	}
	if (GetActorLocation().X < -1800) {
		SetActorLocation(FVector(posicion));
	}
}

void ANaveEnemigaAcorazadodeBatalla::disparar()
{
}

void ANaveEnemigaAcorazadodeBatalla::atacar()
{
}

void ANaveEnemigaAcorazadodeBatalla::recargarenergia()
{
}
