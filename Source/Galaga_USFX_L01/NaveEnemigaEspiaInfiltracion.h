// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaInfiltracion.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaEspiaInfiltracion : public ANaveEnemigaEspia
{
	GENERATED_BODY()
private:
	bool sigiloActivo;
	bool equipamientoInfiltracion;
	int cantidadEscudos;
public:
	FORCEINLINE bool GetSigiloActivo()const { return sigiloActivo; }
	FORCEINLINE bool GetEquipamientoInfiltracion()const { return equipamientoInfiltracion; }
	FORCEINLINE int GetCantidadEscudos()const { return  cantidadEscudos; }

	FORCEINLINE void SetSigiloActivo(bool _sigiloActivo) { sigiloActivo = _sigiloActivo; }
	FORCEINLINE void SetEquipamientoInfiltracion(bool _equipamientoInfiltracion) { equipamientoInfiltracion = _equipamientoInfiltracion; }
	FORCEINLINE void SetCantidadEscudos(bool _cantidadEscudos) { cantidadEscudos = _cantidadEscudos; }

protected:
	virtual void Infiltrarse();
	virtual void ExplorarAreaInfiltrada();
	virtual void EvadirDeteccion();
	virtual void RealizarAccionesEncubiertas();
	
};
