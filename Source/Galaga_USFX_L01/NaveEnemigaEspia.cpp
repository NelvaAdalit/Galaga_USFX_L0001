// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"
ANaveEnemigaEspia :: ANaveEnemigaEspia(){

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}
void ANaveEnemigaEspia::Mover()
{

}

void ANaveEnemigaEspia::Disparar()
{

}

void ANaveEnemigaEspia::Vigilancia()
{
}



void ANaveEnemigaEspia::Apoyo()
{
}

void ANaveEnemigaEspia::Intercepcion()
{
}

void ANaveEnemigaEspia::Comunicacion()
{
}

