/*
PROCEDIMIENTO

Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

void impr(int w[5])
{
    int j;

    for (j = 0; j < 5; j++)
    {
        printf("W[%i]\t",j);
    }
    printf("\n");
    for (j = 0; j < 5; j++)
    {
        printf("%i\t",w[j]);
    }
    
}

int main()
{
    int i, V[5];

    for (i = 0; i < 5; i++)
    {
        printf("Dame el valor %i del arreglo: ",i+1);
        scanf("%i",&V[i]);
    }
    printf("\n\nLos valores del arreglo son: \n");
    impr(V);

    return 0;
}