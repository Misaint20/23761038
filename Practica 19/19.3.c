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
    int a, b, c, d;

    a= 5;
    b = 9;
    c = 4;
    d = mult(a, b);
    d = mult(c, d);

    printf("El resultado es: %i",d);

    return 0;
}