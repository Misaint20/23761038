/*
GASTO
Calcular los gastos totales de un viaje
Autor: Zahid Misaint Murillo Valenzuela
*/

#include<stdio.h>
#include<stdlib.h>

float GT, GASTO;

int main()
{
    printf("Dame el gasto: $");
    scanf("%f",&GASTO);

    while (GASTO != -1)
    {
        GT = GT + GASTO;
        printf("Dame el siguiente gasto: $");
        scanf("%f",&GASTO);
    }

    printf("El total de gastos fue de $%0.2f",GT);

    return 0;
}