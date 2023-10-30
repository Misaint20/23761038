/*DETERMINAR_ORDEN
Dado 3 numeros enteros determinar si estan ordenados de forma creciente
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int A,B,C;

int main()
{
    printf("Dame los 3 numeros: ");
    scanf("%i , %i , %i",&A,&B,&C);

    if(A<B && B<C){
        printf("Los numeros estan ordenados de forma creciente");
    } else {
        printf("Los numeros no estan acomodados de forma creciente");
    }
    return 0;
}