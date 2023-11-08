/*
CEROS
Contar la cantidad de ceros dados
Autor: Zahid Misaint Murillo Valenzuela
*/

#include<stdio.h>
#include<stdlib.h>

int i=1, N, NCERO=0, NUM;

int main()
{
    printf("Dame N: ");
    scanf("%i",&N);

    for(i=1; i<=N; i++){

        printf("Dame el numero %i: ",i);
        scanf("%i",&NUM);
        
        if(NUM == 0){

            NCERO = NCERO + 1;

        }
    }

    printf("El numero de ceros ingreados es %i",NCERO);

    return 0;

}