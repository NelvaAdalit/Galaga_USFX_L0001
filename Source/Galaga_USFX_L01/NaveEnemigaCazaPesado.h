// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaPesado.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCazaPesado : public ANaveEnemigaCaza
{
	GENERATED_BODY()
private:
	int capacidadRadar;
	bool capacidadManiobra;
public:
	FORCEINLINE int GetCapacidadRadar() const { return capacidadRadar; }
	FORCEINLINE bool  GetCapacidadManiobra() const { return capacidadManiobra; }

	FORCEINLINE void SetCapacidaRadar(int _capacidaRadar) { capacidadRadar = _capacidaRadar; }
	FORCEINLINE void SetCapacidadManiobra(bool _capacidadManiobra) { capacidadManiobra = _capacidadManiobra; }


protected:
	virtual void MantenerNave();
	virtual void EscanearArea ();
	virtual void DesplegarEquipamiento();
	virtual void ActivarEscudos ();
	
};