/* 
CLASIFICACION
Dado como dato un numero entero imprimir si es positivo, negativo o nulo
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int NUM;

int main()
{
    printf("Dame el valor del numero: ");
    scanf("%i",&NUM);

    if(NUM == 0){
        printf("El numero es nulo");
    } else {
        if(NUM > 0){
            printf("El numero es positivo");
        } else {
                printf("El numero es negativo");
        }
    }
    return 0;
}