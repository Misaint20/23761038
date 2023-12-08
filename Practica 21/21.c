/*
PROMEDIO
Calcula el promedio de 2 numeros
Autor: Zahid Misiant Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int num1, num2;
float result;

float func(int x1, int x2)
{
    float prom;
    prom = (x1+x2)/2.0;
    return prom;
}

int main()
{
    printf("Dame el numero 1: ");
    scanf("%i",&num1);
    printf("Dame el numero 2: ");
    scanf("%i",&num2);

    result = func(num1, num2);
    printf("El promedio de los numeros es de %0.2f",result);

    return 0;
}