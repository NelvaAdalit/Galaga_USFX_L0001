// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteMuniciones.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporteMuniciones : public ANaveEnemigaTransporte
{
	GENERATED_BODY()
private:
	int totalMuniciones;
public:
	FORCEINLINE int GetTotalMuniciones()const { return totalMuniciones; }
	FORCEINLINE void SetTotalMuniciones(int _totalMuniciones) { totalMuniciones = _totalMuniciones; }
protected:
	virtual void RecargarArmas();
	virtual void EntregarMuniciones();
	
};
