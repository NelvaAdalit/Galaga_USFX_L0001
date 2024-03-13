// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaReabastecimiento.h"

ANaveEnemigaReabastecimiento::ANaveEnemigaReabastecimiento() {

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
}
void ANaveEnemigaReabastecimiento::Mover()
{

}

void ANaveEnemigaReabastecimiento::Disparar()
{
}

void ANaveEnemigaReabastecimiento::Destruir()
{
}

void ANaveEnemigaReabastecimiento::Escapar()
{
}

void ANaveEnemigaReabastecimiento::Atacar()
{
}

void ANaveEnemigaReabastecimiento::cargarCombustible()
{

}

void ANaveEnemigaReabastecimiento::pasarArmamento()
{
}

