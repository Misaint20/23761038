/*
MAYOR
Escribir el mayor de 2 numeros
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int mayor (int n1, int n2)
{
    int may;
    
    if (n1 < n2)
    {
        may = n2;
    } else {
        may = n1;
    }
    
    return may;
}

int main ()
{
    int NUM1, NUM2, MAY;

    printf("Dame los numeros a comparar: ");
    scanf("%i, %i",&NUM1,&NUM2);

    MAY = mayor(NUM1, NUM2);

    printf("El mayor de tus numeros es: %i",MAY);

    return 0;
}