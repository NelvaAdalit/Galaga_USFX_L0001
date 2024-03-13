// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaReabastecimiento.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabastecimiento : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int cantidadBombas;
	int combustible;
	int suministros;
	int velocidad;
	int tiempodeVuelo;


public:
	ANaveEnemigaReabastecimiento();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE int GetCombustible() const { return combustible; }
	FORCEINLINE int GetSuministros() const { return suministros; }
	FORCEINLINE int GetVelocidad() const { return velocidad; }
	FORCEINLINE int GetTiempodeVuelo() const { return tiempodeVuelo; }

	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
	FORCEINLINE void SetCombustible(int _combustible) { combustible = _combustible; }
	FORCEINLINE void SetSuministros(int _suministros) { suministros = _suministros; }
	FORCEINLINE void SetVelocidad(int _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetTiempodeVuelo(int _tiempodeVuelo) { tiempodeVuelo = _tiempodeVuelo; }



protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruir();
	virtual void Escapar();
	virtual void Atacar();
	virtual void cargarCombustible();
	virtual void pasarArmamento();


};
