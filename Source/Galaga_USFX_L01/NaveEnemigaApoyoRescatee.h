// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaApoyo.h"
#include "NaveEnemigaApoyoRescatee.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaApoyoRescatee : public ANaveEnemigaApoyo
{
	GENERATED_BODY()
private:
	bool tripulacion;
	bool sistemasComunicacion;
	int capacidadCarga;
	int puntosSalud;
	
public:
	FORCEINLINE bool GetTripulacion() const { return tripulacion; }
	FORCEINLINE bool GetSistemasComunicacion() const { return sistemasComunicacion; }
	FORCEINLINE int GetCapacidad() const { return capacidadCarga; }
	FORCEINLINE int GetPuntosSalud() const { return puntosSalud; }

	FORCEINLINE void SetTripulacion(bool _tripulacion) { tripulacion = _tripulacion; }
	FORCEINLINE void SetSistemasComunicacion(bool _sistemasComunicacion) { sistemasComunicacion = _sistemasComunicacion; }
	FORCEINLINE void SetCapacidadCarga(int _capacidadCarga) { capacidadCarga = _capacidadCarga; }
	FORCEINLINE void SetPuntosSalud(int _puntosSalud) { puntosSalud = _puntosSalud; }
protected:
	virtual void RescatarNave ();
	virtual void TrasladoTripulacion();
	virtual void EntregarSuministros();
	virtual void ActivarEscudos();



};
