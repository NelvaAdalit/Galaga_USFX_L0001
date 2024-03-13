// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabasteciCombustible.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabasteciCombustible : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()
private:
	bool sistemasTransferenciaCombustible;
	int capacidadCombustible;
public:
	FORCEINLINE bool GeTSistemasTransferenciaCombustible()const { return  sistemasTransferenciaCombustible; }
	FORCEINLINE int  GeTCapacidadCombustible()const { return  capacidadCombustible; }

	FORCEINLINE void SetSistemasTransferenciaCombustible(bool  _sistemasTransferenciaCombustible) { sistemasTransferenciaCombustible = _sistemasTransferenciaCombustible; }
	FORCEINLINE void SetCapacidadCombustible(int  _capacidadCombustible) { capacidadCombustible = _capacidadCombustible; }

protected:
	virtual void reabastecerCombustible();
	
};
