// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaligera.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaCazaligera : public ANaveEnemigaCaza
{
	GENERATED_BODY()
private:
	int canones;
	int luceslacer;
	int bombasaturdidoras;

public:
	FORCEINLINE int  GetCanones() const { return canones; }
	FORCEINLINE int GetLuceslacer() const { return luceslacer; }
	FORCEINLINE int GetBombasaturdidoras() const { return bombasaturdidoras; }

	FORCEINLINE void SetCanones(int _canones) { canones = _canones; }
	FORCEINLINE void SetLuceslacer(int _luceslacer) { luceslacer = _luceslacer; }
	FORCEINLINE void SetBombasaturdidoras(int _bombasaturdidoras) { bombasaturdidoras = _bombasaturdidoras; }
protected:
	virtual void Comunicarse();
	virtual void Evadir ();
	virtual void Escanear();
	
};
