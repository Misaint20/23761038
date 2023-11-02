/*
CARRERAS
Determinar si el estudiante es apto para alguna de las facultades menores
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MAT,SEM,CARR;
float PROM;


int main()
{ 
    printf("Dame el numero de matricula: ");
    scanf("%i",&MAT);
    start:
    printf("CARRERAS:\n1: Contabilidad\n2: Economia\n3: Computacion\n4: Administracion\n");
    printf("Selecciona la carrera: ");
    scanf("%i",&CARR);
    printf("Dame el semestre y el promedio del alumno: ");
    scanf("%i, %f",&SEM,&PROM);

    switch (CARR)
    {
    case 1:
    if(SEM >= 6 && PROM >= 8.8){
        printf("El alumno con la matricula: %i, de la carrera de Contabilidad es ACEPTADO",MAT);
    } else {
        printf("El alumno con la matricula: %i, de la carrera de Contabilidad es NO ACEPTADO",MAT);
    }
        break;

        case 2:
    if(SEM >= 6 && PROM >= 8.5){
        printf("El alumno con la matricula: %i, de la carrera de Economia es ACEPTADO",MAT);
    } else {
        printf("El alumno con la matricula: %i, de la carrera de Economia es NO ACEPTADO",MAT);
    }
        break;

        case 3:
    if(SEM >= 5 && PROM >= 8.5){
        printf("El alumno con la matricula: %i, de la carrera de Computacion es ACEPTADO",MAT);
    } else {
        printf("El alumno con la matricula: %i, de la carrera de Computacion es NO ACEPTADO",MAT);
    }
        break;

        case 4:
    if(SEM >= 5 && PROM >= 8.5){
        printf("El alumno con la matricula: %i, de la carrera de Administracion es ACEPTADO",MAT);
    } else {
        printf("El alumno con la matricula: %i, de la carrera de Administracion es NO ACEPTADO",MAT);
    }
        break;
    
    default:
    printf("Error al escoger la carrera, intentalo nuevamente\n");
    goto start;
        break;
    }

    return 0;
    
}