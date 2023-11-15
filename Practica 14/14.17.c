/*
NUMEROS PRIMOS
Obtener y contar los numeros primos menores a M
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N, M, i=2, CP=1, j, c;

int main() {

    printf("Dame el numero a considerar: ");
    scanf("%i",&M);
    
    CP = 1;
    printf("%i, ",CP);
    CP = CP + 1;

    for (i = 2; i < M; i++)
    {
        c=0;
        for ( j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                c = c + 1;
            }
        }
        if (c == 0)
        {
            printf("%i, ",i);
            CP = CP + 1;
        }
        
    }
    printf("\nLa cantidad de numeros primos es de %i",CP);
    
    return 0;
}