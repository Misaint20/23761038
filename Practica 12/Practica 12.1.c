/*TEMPERATURA
Medir la temperatura basnadonos en los sonidos de un grillo
Autor: Zahid Misaint Murillo Valenzuela */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N;
float T;

int main()
{
    printf("Dame el numero de sonidos del grillo: ");
    scanf("%i",&N);

    T= N/4+40;

    printf("%0.2f°F",T);

    return 0;
}

