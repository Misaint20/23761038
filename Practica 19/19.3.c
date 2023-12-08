/*
MULTIPLICACION
Multiplica 2 numeros
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int mult (int n1, int n2)
{
    int r;
    r= n1 * n2;
    return r;
}

int main ()
{
    int NUM1, NUM2, result;

    printf("Dame los numeros a multiplicar: ");
    scanf("%i, %i",&NUM1,&NUM2);

    result = mult(NUM1, NUM2);

    printf("El resultado es5: %i",result);

    return 0;
}