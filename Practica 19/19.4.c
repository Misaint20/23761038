/*
MAXIMO
Escribir el maximo de un subarreglo
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int mayor (int V[5], int L1, int L2)
{
    int i, temp, may;
    temp= V[L1];
    
    for(i=L1; i<=L2; i++)
    if (V[i] > temp)
    {
        temp = V[i];
    } 
    
    return temp;
}

int main ()
{
    int i, MAX, W[5];

    for(i=0; i<=4; i++)
    {
    printf("Dame el valor %i del arreglo: ",i+1);
    scanf("%i",&W[i]);
    }

    MAX = mayor(W, 0, 4);

    printf("El mayor del arreglo es: %i",MAX);

    return 0;
}