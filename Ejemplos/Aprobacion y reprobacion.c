/*Aprobacion
Enviar "Aprobado" si la calificacion es mayor o igual a 70
Autor: Zahid Misaint Murillo Valenzuela*/

#include <stdlib.h>

int CAL;

int main ()
{
    printf("Dame la calificacion del examen: ");
    scanf("%i",&CAL);

    if(CAL >= 70){
        printf("Aprobado");
    } else {
        printf("Reprobado");
    }
    
    return 0;
}