// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaAcorazado.h"
#include "NaveEnemigaApoyo.h"
#include "NaveEnemigaAcorazadodeBatalla.h"
#include "NaveEnemigaAcorazadoExploracion.h"
#include "NaveEnemigaApoyoReparacion.h"
#include "NaveEnemigaApoyoRescatee.h"
#include "NaveEnemigaCazaligera.h"
#include "NaveEnemigaCazaPesado.h"
#include "NaveEnemigaEspiaInfiltracion.h"
#include "NaveEnemigaEspiaCamuflaje.h"
#include "NaveEnemigaNodrizaSoporteAereo.h"
#include "NaveEnemigaNodrizaConstruccion.h"
#include "NaveEnemigaReabasteciEscudos.h"
#include "NaveEnemigaReabasteciCombustible.h"
#include "NaveEnemigaTransporteMuniciones.h"
#include "NaveEnemigaTransporteVehiculos.h"



AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//Set the game state to playing

	FVector ubicacionNave01 = FVector(-300.0f, -500.0f, 250.0f);
	FVector ubicacionNave02 = FVector(-500.0f, -500.0f, 250.0f);
	FVector ubicacionNave03 = FVector(-600.0f, -500.0f, 250.0f);
	FVector ubicacionNave04 = FVector(-700.0f, -500.0f, 250.0f);
	FVector ubicacionNave05 = FVector(-800.0f, -500.0f, 250.0f);
	FVector ubicacionNave06 = FVector(-900.0f, -500.0f, 250.0f);
	FVector ubicacionNave07 = FVector(- 400.0f, -500.0f, 250.0f);
	FVector ubicacionNave08 = FVector(-900.0f, -700.0f, 250.0f);
	FVector ubicacionNave09 = FVector(-900.0f, -900.0f, 250.0f);
	FVector ubicacionNave010 = FVector(-400.0f, -600.0f, 250.0f);
	FVector ubicacionNave022 = FVector(-400.0f, -700.0f, 250.0f);
	FVector ubicacionNave014 = FVector(-500.0f, -800.0f, 250.0f);
	FVector ubicacionNave015 = FVector(-600.0f, -900.0f, 250.0f);
	FVector ubicacionNave016 = FVector(-700.0f, -100.0f, 250.0f);
	FVector ubicacionNave017 = FVector(-800.0f, -300.0f, 250.0f);
	FVector ubicacionNave013 = FVector(-800.0f, -600.0f, 250.0f);
	FVector ubicacionNave019 = FVector(-800.0f, -700.0f, 250.0f);
	FVector ubicacionNave7 = FVector(-600.0f, -400.0f, 250.0f);
	FVector ubicacionNave74 = FVector(-600.0f, -800.0f, 250.0f);
	FVector ubicacionNave743 = FVector(-700.0f, -680.0f, 250.0f);
	FVector ubicacionNave744 = FVector(-980.0f, -570.0f, 250.0f);
	

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);
		NaveEnemigaEspia01 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNave03, rotacionNave);
		NaveEnemigaReabastecimiento01 = World->SpawnActor<ANaveEnemigaReabastecimiento>(ubicacionNave04, rotacionNave);
		NaveEnemigaNodriza01 = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNave05, rotacionNave);
		NaveEnemigaAcorazado01 = World->SpawnActor<ANaveEnemigaAcorazado>(ubicacionNave06, rotacionNave);
		NaveEnemigaApoyo01 = World->SpawnActor<ANaveEnemigaApoyo>(ubicacionNave07, rotacionNave);
		NaveEnemigaAcorazadodeBatalla01 = World->SpawnActor<ANaveEnemigaAcorazadodeBatalla>(ubicacionNave08, rotacionNave);
		NaveEnemigaAcorazadoExploracion02 = World->SpawnActor<ANaveEnemigaAcorazadoExploracion>(ubicacionNave09, rotacionNave);
		NaveEnemigaApoyoReparacion01 = World->SpawnActor<ANaveEnemigaApoyoReparacion>(ubicacionNave010, rotacionNave);
		NaveEnemigaApoyoRescatee022 = World->SpawnActor<ANaveEnemigaApoyoRescatee>(ubicacionNave022, rotacionNave);
		NaveEnemigaCazaligera014 = World->SpawnActor<ANaveEnemigaCazaligera>(ubicacionNave014, rotacionNave);
		NaveEnemigaCazaPesado16 = World->SpawnActor<ANaveEnemigaCazaPesado>(ubicacionNave015, rotacionNave);
		NaveEnemigaEspiaInfiltracion56 = World->SpawnActor<ANaveEnemigaEspiaInfiltracion>(ubicacionNave016, rotacionNave);
		NaveEnemigaEspiaCamuflaje01 = World->SpawnActor<ANaveEnemigaEspiaCamuflaje>(ubicacionNave017, rotacionNave);
		NaveEnemigaNodrizaSoporteAereo1 = World->SpawnActor<ANaveEnemigaNodrizaSoporteAereo>(ubicacionNave013, rotacionNave);
		NaveEnemigaNodrizaConstruccion02 = World->SpawnActor<ANaveEnemigaNodrizaConstruccion>(ubicacionNave019, rotacionNave);
		NaveEnemigaReabasteciEscudos05 = World->SpawnActor<ANaveEnemigaReabasteciEscudos>(ubicacionNave7, rotacionNave);
		NaveEnemigaReabasteciCombustible059 = World->SpawnActor<ANaveEnemigaReabasteciCombustible>(ubicacionNave74, rotacionNave);
		NaveEnemigaTransporteMuniciones1 = World->SpawnActor<ANaveEnemigaTransporteMuniciones>(ubicacionNave743, rotacionNave);
		NaveEnemigaTransporteVehiculos1 = World->SpawnActor<ANaveEnemigaTransporteVehiculos>(ubicacionNave744, rotacionNave);

	
	}

	NaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	NaveEnemigaTransporte01->SetPosicion(FVector(500.0f, -500.0f, 200.0f));
	NaveEnemigaEspia01->SetPosicion(FVector(600.0f, -500.0f, 200.0f));
	NaveEnemigaReabastecimiento01->SetPosicion(FVector(700.0f, -500.0f, 200.0f));
	NaveEnemigaNodriza01->SetPosicion(FVector(800.0f, -500.0f, 200.0f));
	NaveEnemigaAcorazado01->SetPosicion(FVector(900.0f, -500.0f, 200.0f));
	NaveEnemigaApoyo01->SetPosicion(FVector(100.0f, -500.0f, 200.0f));
	NaveEnemigaAcorazadodeBatalla01->SetPosicion(FVector(110.0f, -560.0f, 200.0f));
	NaveEnemigaAcorazadoExploracion02->SetPosicion(FVector(110.0f, -580.0f, 200.0f));
	NaveEnemigaApoyoReparacion01->SetPosicion(FVector(120.0f, -580.0f, 200.0f));
	NaveEnemigaApoyoRescatee022->SetPosicion(FVector(130.0f, -580.0f, 200.0f));
	NaveEnemigaCazaligera014->SetPosicion(FVector(140.0f, -580.0f, 200.0f));
	NaveEnemigaCazaPesado16->SetPosicion(FVector(150.0f, -580.0f, 200.0f));
	NaveEnemigaEspiaInfiltracion56->SetPosicion(FVector(-500.0f, -580.0f, 200.0f));
	NaveEnemigaEspiaCamuflaje01->SetPosicion(FVector(-500.0f, -580.0f, 200.0f));
	NaveEnemigaNodrizaSoporteAereo1->SetPosicion(FVector(-700.0f, -580.0f, 200.0f));
	NaveEnemigaNodrizaConstruccion02->SetPosicion(FVector(-700.0f, -580.0f, 200.0f));
	NaveEnemigaReabasteciCombustible059->SetPosicion(FVector(-500.0f, -580.0f, 200.0f));
	NaveEnemigaTransporteMuniciones1->SetPosicion(FVector(-530.0f, -580.0f, 200.0f));
	NaveEnemigaTransporteVehiculos1->SetPosicion(FVector(-980.0f, -580.0f, 200.0f));
}
