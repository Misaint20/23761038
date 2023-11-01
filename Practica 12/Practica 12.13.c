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
    start: 
    printf("CARRERAS:\n");
    printf("1: Contabilidad\n"); 
    printf("2: Economia\n");
    printf("3: Computacion\n");
    printf("4: Administracion\n");
    printf("Dame el numero de matricula, selecciona la carrera, dame el semestre y el promedio del alumno: ");
    scanf("%i, %i, %i, %f",&MAT,&CARR,&SEM,&PROM);

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