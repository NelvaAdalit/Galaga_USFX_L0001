// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaNodriza.h"

ANaveEnemigaNodriza::ANaveEnemigaNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaNodriza::Mover()
{

}

void ANaveEnemigaNodriza::Disparar()
{
}

void ANaveEnemigaNodriza::Vigilancia()
{
}

void ANaveEnemigaNodriza::Apoyo()
{
}

void ANaveEnemigaNodriza::Intercepcion()
{
}

void ANaveEnemigaNodriza::Comunicacion()
{
}
