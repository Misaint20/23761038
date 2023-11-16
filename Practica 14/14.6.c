/*
MAYOR Y MENOR
Determinar el numero mayor y el numero menor dados
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int N, NUM, i=2, MAY, MEN;

int main() {

    printf("Dame el valor de N: ");
    scanf("%i",&N);

    printf("Dame el primer numero: ");
    scanf("%i",&NUM);

    MAY = NUM;
    MEN = NUM;

    for (i = 2; i <= N; i++)
    {
        printf("Dame el siguiente numero: ");
        scanf("%i",&NUM);
        if (NUM > MAY)
        {
            MAY = NUM;
        }

        if (NUM < MEN)
        {
            MEN = NUM;
        }
    }

    printf("El numero mayor es %i",MAY);
    printf("\nEl numero menor es %i",MEN);

    return 0; 
}