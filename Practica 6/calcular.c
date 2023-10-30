/*CALCULAR_EXPRESION
Calcular la expresion e imprimir resultado
Autor: Zahid Misaint Murillo Valenzuela
*/
#include <stdio.h>
#include <math.h>
int A,B;
float R;

int main()
{
    printf("Dame el valor de A: ");
    scanf("%i",&A);  // Leer A
    printf("Dame el valor de B: ");
    scanf("%i",&B);  // Leer B
    R=pow(A+B,2.0/3.0);
    printf ("%f",R);
    return 0;
}