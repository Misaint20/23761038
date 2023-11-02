/*
TELEFONIA
Determinar costo por duracion de llamada
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdlib.h>
#include <stdio.h>

int CLAVE,NUMIN;
float COST;

int main()
{

    start:
    printf("Dame la clave de la zona de la llamada y la duracion de la llamada en minutos: ");
    scanf("%i y %i minutos",&CLAVE,&NUMIN);

    switch (CLAVE)
    {
    case 12:
       COST=NUMIN*2;
        break;

    case 15:
       COST=NUMIN*2.20;
        break;

    case 18:
       COST=NUMIN*4.50;
        break;

    case 19:
       COST=NUMIN*3.50;
        break;

    case 23:
       COST=NUMIN*6;
        break;

    case 25:
       COST=NUMIN*6;
        break;

    case 29:
       COST=NUMIN*5;
        break;
    
    default:
    printf("Esta clave no existe, pruebe nuevamente con una clave distinta\n");
    goto start;
        break;
    }

    printf("Costo total de la llamada: $%0.2f",COST);

    return 0;
}