// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabasteciEscudos.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaReabasteciEscudos : public ANaveEnemigaReabastecimiento
{
	GENERATED_BODY()
private:
	int totalEscudos;
	bool reavastecimientoActivo;
public:
	FORCEINLINE int GetTotalEscudos()const { return totalEscudos; }
	FORCEINLINE bool GetReavastecimientoActivo()const { return reavastecimientoActivo; }

	FORCEINLINE void SetTotalEscudos(int _totalEscudos) { totalEscudos = _totalEscudos; }
	FORCEINLINE void SetReavastecimientoActivo(bool _reavastecimientoActivo) { reavastecimientoActivo = _reavastecimientoActivo; }
protected:
	virtual void reabastecerEscudos();



};
