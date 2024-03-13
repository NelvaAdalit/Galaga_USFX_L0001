// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFX_L01GameMode.generated.h"

//class ANaveEnemiga;
class ANaveEnemigaTransporte;
class ANaveEnemigaCaza;
class ANaveEnemigaEspia;
class ANaveEnemigaReabastecimiento;
class ANaveEnemigaNodriza;
class ANaveEnemigaAcorazado;
class ANaveEnemigaApoyo;
class ANaveEnemigaAcorazadodeBatalla;
class ANaveEnemigaAcorazadoExploracion;
class ANaveEnemigaApoyoReparacion;
class ANaveEnemigaApoyoRescatee;
class ANaveEnemigaCazaligera;
class ANaveEnemigaCazaPesado;
class ANaveEnemigaEspiaInfiltracion;
class ANaveEnemigaEspiaCamuflaje;
class ANaveEnemigaNodrizaSoporteAereo;
class ANaveEnemigaNodrizaConstruccion;
class ANaveEnemigaReabasteciEscudos;
class ANaveEnemigaReabasteciCombustible;
class ANaveEnemigaTransporteMuniciones;
class ANaveEnemigaTransporteVehiculos;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();

public:
	//ANaveEnemiga* NaveEnemiga01;
	ANaveEnemigaTransporte* NaveEnemigaTransporte01;
	ANaveEnemigaCaza* NaveEnemigaCaza01;
	ANaveEnemigaEspia* NaveEnemigaEspia01;
	ANaveEnemigaReabastecimiento* NaveEnemigaReabastecimiento01;
	ANaveEnemigaNodriza* NaveEnemigaNodriza01;
	ANaveEnemigaAcorazado* NaveEnemigaAcorazado01;
	ANaveEnemigaApoyo* NaveEnemigaApoyo01;
	ANaveEnemigaAcorazadodeBatalla* NaveEnemigaAcorazadodeBatalla01;
	ANaveEnemigaAcorazadoExploracion* NaveEnemigaAcorazadoExploracion02;
	ANaveEnemigaApoyoReparacion* NaveEnemigaApoyoReparacion01;
	ANaveEnemigaApoyoRescatee* NaveEnemigaApoyoRescatee022;
	ANaveEnemigaCazaligera* NaveEnemigaCazaligera014;
	ANaveEnemigaCazaPesado* NaveEnemigaCazaPesado16;
	ANaveEnemigaEspiaInfiltracion* NaveEnemigaEspiaInfiltracion56;
	ANaveEnemigaEspiaCamuflaje* NaveEnemigaEspiaCamuflaje01;
	ANaveEnemigaNodrizaSoporteAereo* NaveEnemigaNodrizaSoporteAereo1;
	ANaveEnemigaNodrizaConstruccion* NaveEnemigaNodrizaConstruccion02;
	ANaveEnemigaReabasteciEscudos* NaveEnemigaReabasteciEscudos05;
	ANaveEnemigaReabasteciCombustible* NaveEnemigaReabasteciCombustible059;
	ANaveEnemigaTransporteMuniciones* NaveEnemigaTransporteMuniciones1;
	ANaveEnemigaTransporteVehiculos* NaveEnemigaTransporteVehiculos1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};



