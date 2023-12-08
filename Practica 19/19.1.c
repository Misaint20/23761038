/*
CUADRADO
Calcular el cuadrado de 10 numeros
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int cuadrado (int x)
{
    int sqrt;
    sqrt = x * x;

    return sqrt;
}

int main ()
{
    int NUM, CUAD, i;

    for(i=1; i<11; i++)
    {
        printf("Dame el numero %i a calcular: ",i);
        scanf("%i",&NUM);

        CUAD = cuadrado(NUM);

        printf("El cuadrado de tu numero es: %i\n",CUAD);
    }

    return 0;
}