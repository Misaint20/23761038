/* CALIFICACION
Dado como dato la calificacion del alumno y matricula, imprimir matricula, calificacion y si aprobo o no
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int MAT;
float CAL1,CAL2,CAL3,CAL4,CAL5,PROM;

int maint()
{
    printf("Dame la matricula del alumno: ");
    scanf("%i",&MAT);
    printf("Dame las calificaciones del alumno en orden: ");
    scanf("%f, %f, %f, %f, %f",&CAL1,&CAL2,&CAL3,&CAL4,&CAL5);

    PROM = (CAL1 + CAL2 + CAL3 + CAL4 + CAL5)/5;
}