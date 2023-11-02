/*TEMPERATURA
Medir la temperatura basnadonos en los sonidos de un grillo
Autor: Zahid Misaint Murillo Valenzuela */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N;
float T,T2;

int main()
{
    printf("Dame la cantidad de sonidos del grillo: ");
    scanf("%i",&N);

    if(N > 0){

       T= N/4.00 + 40;
       T2= (T - 32) * 5/9;

       printf("La temperatura es: %0.2f°F; %0.2f°C",T,T2); 

    } else {

        printf("Grillo perdido");

    }

    return 0;
}