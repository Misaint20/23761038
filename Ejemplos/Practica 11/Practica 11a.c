/*ORDENAR
Ordenar los datos dados de mayor a menor
Autor: Zahid Misaint Murillo Valenzuela*/

#include <stdio.h>
#include <stdlib.h>

int A,B,C;

int main ()
{
    printf("Dame el valor de A: ");
    scanf("%i",&A);
    printf("Dame el valor de B: ");
    scanf("%i",&B);
    printf("Dame el valor de C: ");
    scanf("%i",&C);
    
    if(A>B){
        if(A>C){
            if(B>C){
                printf("%i, %i, %i", A,B,C);
            } else {
            printf("%i, %i, %i", A,C,B);    
            }
        } else {
        printf("%i, %i, %i", C,A,B);
        }
    } else {
        if (A>C){
            printf("%i, %i, %i", B,A,C);
        } else {
            if(C>B){
                printf("%i, %i, %i", C,B,A);
            } else {
                printf("%i, %i, %i", B,C,A);
            }
        }
    }
    return 0;
}