// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaAcorazado.h"

ANaveEnemigaAcorazado::ANaveEnemigaAcorazado()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	PrimaryActorTick.bCanEverTick = true;

}

/*void ANaveEnemigaAcorazado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}*/

void ANaveEnemigaAcorazado::Mover()
{
	//SetActorLocation(FVector(GetActorLocation().X + 1, GetActorLocation().Y + 1, GetActorLocation().Z));

}

void ANaveEnemigaAcorazado::Disparar()
{
}

void ANaveEnemigaAcorazado::Atacar()
{
}


void ANaveEnemigaAcorazado::Bloqueo()
{
}



