// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteVehiculos.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporteVehiculos : public ANaveEnemigaTransporte
{
	GENERATED_BODY()
private:
	int vehiculosTransportados;
	int capacidadCarga;
public:
	FORCEINLINE int GetVehiculosTransportados()const { return vehiculosTransportados; }
	FORCEINLINE int GetCapacidadCarga()const {return  capacidadCarga; }

protected:
	virtual void  cargarVehiculos();
	virtual void descargarVehiculos();
};
