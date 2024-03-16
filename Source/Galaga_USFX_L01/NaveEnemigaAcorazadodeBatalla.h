// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemigaAcorazado.h"
#include "NaveEnemigaAcorazadodeBatalla.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaAcorazadodeBatalla : public ANaveEnemigaAcorazado
{
	GENERATED_BODY()
private:
	int escudos;
	//int flag=1;
	int armasPrimarias;
	int armasSecundarias;
	int tiempoDeteccionenemigos;
public:
	//ANaveEnemigaAcorazadodeBatalla();
	virtual void Tick(float DeltaTime) override;
	FORCEINLINE int GetEscudos() const { return escudos; }
	FORCEINLINE int GetArmasPrimarias() const { return armasPrimarias; }
	FORCEINLINE int GetArmasSecundarias() const { return armasSecundarias; }
	FORCEINLINE int GetTiempoDeteccionenemigos() const { return tiempoDeteccionenemigos; }

	FORCEINLINE void SetEscudos(int _escudos) { escudos = _escudos; }
	FORCEINLINE void SetArmasPrimarias(int _armasPrimarias) { armasPrimarias = _armasPrimarias; }
	FORCEINLINE void SetArmasSecundarias(int _armasSecundarias) { armasSecundarias = _armasSecundarias; }
	FORCEINLINE void SetTiempoDeteccionenemigos(int _tiempoDeteccionenemigos) { tiempoDeteccionenemigos = _tiempoDeteccionenemigos; }
	 

protected:
	   virtual void Mover(float DeltaTime) override;
	   virtual void disparar();
	   virtual void atacar();
	   virtual void recargarenergia();








};