/*
Eliminar
Eliminar un valor a nuestro arreglo
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int  i, V[6] = {52,12,31,102}, NUM, P;

int main() {
    printf("El arreglo original es...\n");
    for (i = 0; i <= 5; i++)
    {
        printf("V[%i]\t",i);
    }
    printf("\n");
    for (i = 0; i <= 5; i++)
    {
        printf("%i\t",V[i]);
    }

    printf("\nDame la posicion donde deseas eliminar el valor: ");
    scanf("%i",&P);
    i=P;
    
    for(i=P; i<=5; i++) 
    {
        V[i] = V[i+1];
    } 

    V[5] = '\0';
    i = 0;

    for (i = 0; i <= 5; i++)
    {
        printf("V[%i]\t",i);
    }
    printf("\n");
    for (i = 0; i <= 5; i++)
    {
        printf("%i\t",V[i]);
    }

    return 0;
}
