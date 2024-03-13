// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaSoporteAereo.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaNodrizaSoporteAereo : public ANaveEnemigaNodriza
{
	GENERATED_BODY()
private:
	int canonesAntimateria;
	int canonesdePlasma;
	int misilesGuiados;

public:
	FORCEINLINE int GetCanonesAntimateria() const {return canonesAntimateria;}
	FORCEINLINE int GetCanonesdePlasma() const { return  canonesdePlasma; }
	FORCEINLINE int GetMisilesGuiados() const { return misilesGuiados; }
	
	FORCEINLINE void SetCanonesAntimateria(int _canonesAntimateria) { canonesAntimateria = _canonesAntimateria; }
	FORCEINLINE void SetCanonesdePlasma(int _canonesdePlasma) { canonesdePlasma = _canonesdePlasma; }
	FORCEINLINE void SetMisilesGuiados( int _misilesGuiados) { misilesGuiados = _misilesGuiados; }

protected:
	virtual void protegerFlotasAliadas();
	virtual void atacarObjetivosAereos();
	//virtual void protegerFlotasAliadas();


};
