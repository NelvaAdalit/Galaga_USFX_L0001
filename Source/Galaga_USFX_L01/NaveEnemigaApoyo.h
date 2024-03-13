// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaApoyo.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaApoyo : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int cantidadEnergia;
	int cantidadArmamento;
	int velocidad;
	int tiempoAlcance;



public:
	ANaveEnemigaApoyo();
	FORCEINLINE int GeteCantidadEnergia() const { return cantidadEnergia; }
	FORCEINLINE int GetCantidadArmamento() const { return cantidadEnergia; }
	FORCEINLINE int GetVelocidad() const { return velocidad; }
	FORCEINLINE int GetTiempoAlcance() const { return tiempoAlcance; }


	FORCEINLINE void SetCantidadEnergia(int _cantidadEnergia) { cantidadEnergia = _cantidadEnergia; }
	FORCEINLINE void SetCantidadArmamento(int _cantidadArmamento) { cantidadArmamento = _cantidadArmamento; }
	FORCEINLINE void SetVelocidad(int _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetTiempoAlcance(int _tiempoAlcance) { tiempoAlcance = _tiempoAlcance; }



protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruir();
	virtual void Escapar();
	virtual void Atacar();
	virtual void Reparar();
	virtual void cargarCombustible();
	virtual void pasarEnergia();
	
	

};
