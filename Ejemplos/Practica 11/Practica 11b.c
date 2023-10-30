/*ORDENAR
Ordenar los datos dados de mayor a menor
Autor: Zahid Misaint Murillo Valenzuela*/

#include <stdio.h>
#include <stdlib.h>

int A,B,C;

int main()
{

    printf("Dame el valor de A: ");
    scanf("%i",&A);
    printf("Dame el valor de B: ");
    scanf("%i",&B);
    printf("Dame el valor de C: ");
    scanf("%i",&C);

    if(A>B && B>C){
        printf("%i, %i, %i", A,B,C);
    } else {
        if(A>B && C>B){
            printf("%i, %i, %i", A,C,B);
        } else {
            if(B>A && A>C){
            printf("%i, %i, %i", B,A,C);
            } else {
                if(B>C && C>A) {
                    printf("%i, %i, %i", B,C,A);
                } else {
                    if(C>B && B>A) {
                        printf("%i, %i, %i", C,B,A);
                    } else {
                        if(C>B && A>B) {
                        printf("%i, %i, %i", C,A,B);
                    }
                    }
                }
            }
        }
    } 
    return 0;
}