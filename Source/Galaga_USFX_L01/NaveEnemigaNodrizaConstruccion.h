// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaConstruccion.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodrizaConstruccion : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
private:
	bool equipamientoConstruccion;
	bool capacidadConstruccion;
	int recursos;
	int hangares;
public:

	FORCEINLINE bool GetEquipamientoConstruccion()const { return equipamientoConstruccion; }
	FORCEINLINE bool GetCapacidadConstruccion()const { return capacidadConstruccion; }
	FORCEINLINE int GetRecursos()const { return recursos; }
	FORCEINLINE int GetHangares()const { return hangares; }

	FORCEINLINE void SetEquipamientoConstruccion(bool _equipamientoConstruccion) { equipamientoConstruccion =_equipamientoConstruccion;}
	FORCEINLINE void SetCapacidadConstruccionn(bool _capacidadConstruccion) { capacidadConstruccion = _capacidadConstruccion; }
	FORCEINLINE void SetRecursos(int _recursos) { recursos = _recursos; }
	FORCEINLINE void SetHangares(int _hangares) { hangares = _hangares; }

protected:
	virtual void ConstruirNave();
	virtual void SeleccionarDiseño();
	virtual void RecolectarRecursos();
	virtual void EnsamblarComponentes();
	virtual void FinalizarConstruccion();






};
