/*
INSERTAR
Insertar un valor a nuestro arreglo
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int  i, V[6] = {52,12,31,102}, NUM, P;

int main() {
    printf("El arreglo original es...\n");
    for (i = 0; i <= 5; i++)
    {
        printf("\nV[%i]: %i",i,V[i]);
    }


    i=5;
    printf("\nDame la posicion donde deseas insertar el valor: ");
    scanf("%i",&P);
    printf("\nDame el valor del numero a añadir: ");
    scanf("%i",&NUM);
    
    for(i=5; i>= P+1; i--) 
    {
        V[i] = V[i-1];
    } 

    V[P] = NUM;
    i = 0;

    for (i = 0; i <= 5; i++)
    {
        printf("\nV[%i]: %i",i,V[i]);
    }

    return 0;
}