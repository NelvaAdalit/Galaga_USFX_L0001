// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodriza : public ANaveEnemiga
{
	GENERATED_BODY()
private:
	int cantidadBombas;

public:
	ANaveEnemigaNodriza();
	FORCEINLINE int GetCantidadBombas() const { return cantidadBombas; }
	FORCEINLINE void SetCantidadBombas(int _cantidadBombas) { cantidadBombas = _cantidadBombas; }
protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Vigilancia();
	virtual void Apoyo();
	virtual void Intercepcion();
	virtual void Comunicacion();
};
