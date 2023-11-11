/*
CUBO
Calcular el cubo de los números naturales dados
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int NUM, CUBO;

int main() 
{
    printf("Dame el primer número: ");
    scanf("%i",&NUM);
    
    while( NUM != -1 )
    {
        if (NUM > 0)
        {
            CUBO = pow(NUM, 3);
            printf("El cubo de %i es = %i\n",NUM,CUBO);
        }
        printf("Dame el siguiente número: ");
        scanf("%i",&NUM);
    }

    return 0;
}