// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaApoyo.h"

ANaveEnemigaApoyo::ANaveEnemigaApoyo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_Out.Shape_Trim_90_Out'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaApoyo::Mover()
{
}

void ANaveEnemigaApoyo::Disparar()
{
}

void ANaveEnemigaApoyo::Destruir()
{
}

void ANaveEnemigaApoyo::Escapar()
{
}

void ANaveEnemigaApoyo::Atacar()
{
}

void ANaveEnemigaApoyo::Reparar()
{
}

void ANaveEnemigaApoyo::cargarCombustible()
{
}

void ANaveEnemigaApoyo::pasarEnergia()
{
}
