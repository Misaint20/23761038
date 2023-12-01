/*
AÑADIR
Añade un valor a nuestro arreglo
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int  i, V[6] = {52,32,12,102}, NUM;

int main() {
    printf("El arreglo original es...\n");
    for (i = 0; i <= 5; i++)
    {
        printf("V[%i]\t",i);
    }
    printf("\n");
    for (i = 0; i <= 5; i++)
    {
        printf("%i\t\t",V[i]);
    }
    i=0;
    
    while (V[i] != '\0')
    {
        i = i + 1;
    }
    
    if(i<=5) 
    {
        printf("\nDame el valor del numero a añadir: ");
        scanf("%i",&NUM);
        V[i] = NUM;
    } else {
        printf("\nEl arreglo esta lleno");
    }

    printf("\nEl nuevo arreglo es....\n");
    for (i = 0; i <= 5; i++)
    {
        printf("V[%i]\t",i);
    }
    printf("\n");
    for (i = 0; i <= 5; i++)
    {
        printf("%i\t\t",V[i]);
    }

    return 0;
}
