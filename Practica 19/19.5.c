/*
FACTORIAL
Realizar la operacion del factorial de un numero
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int fact (int par)
{
    int z, f;
    
    if (par == 1 || par == 0)
    {
        f = 1;
    } else {
        z = fact(par-1);
        f = par*z;
    }
    
    return f;
}

int main ()
{
    int i, a, result;

    printf("Dame el numero: ");
    scanf("%i",&a);

    result = fact(a);

    printf("El factorial de %i es: %i",a,result);

    return 0;
}