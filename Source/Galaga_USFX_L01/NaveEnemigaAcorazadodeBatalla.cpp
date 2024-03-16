// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaAcorazadodeBatalla.h"

void ANaveEnemigaAcorazadodeBatalla::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);

	//posicion = FVector(1200, -1000, 250);
	
}

void ANaveEnemigaAcorazadodeBatalla::Mover(float DeltaTime)
{
    // Velocidad de rotación
    float RotationSpeed = 0.7f;

    // Definir el radio y la velocidad angular
    float Radius = 500.0f; // Cambia el valor según el tamaño de la curva deseada
    float AngularSpeed = 0.7f; // Cambia el valor para ajustar la velocidad de la curva

    // Calcular el ángulo basado en el tiempo
    static float Angle = 0.0f;
    Angle += AngularSpeed * DeltaTime;

    // Calcular la nueva posición en función del ángulo
    float NewX = Radius * FMath::Cos(Angle);
    float NewY = Radius * FMath::Sin(Angle);
    FVector NewPosition = FVector(NewX, NewY, GetActorLocation().Z);

    // Aplicar la nueva posición
    SetActorLocation(NewPosition);

    // Rotar la nave para que apunte en la dirección del movimiento
    FVector Direction = NewPosition - GetActorLocation();
    FRotator NewRotation = Direction.Rotation();
    SetActorRotation(FMath::Lerp(GetActorRotation(), NewRotation, RotationSpeed * DeltaTime));
}


/*void ANaveEnemigaAcorazadodeBatalla::Mover(float DeltaTime)
{
	velocidad = 1;
	SetActorLocation(FVector(GetActorLocation().X - velocidad, GetActorLocation().Y - velocidad * flag, GetActorLocation().Z));
	if (GetActorLocation().Y < -1200 || GetActorLocation().Y > -800) {
		flag *= -1;
	}
	if (GetActorLocation().X < -1800) {
		SetActorLocation(FVector(posicion));
	}
}*/

void ANaveEnemigaAcorazadodeBatalla::disparar()
{
}

void ANaveEnemigaAcorazadodeBatalla::atacar()
{
}

void ANaveEnemigaAcorazadodeBatalla::recargarenergia()
{
}
