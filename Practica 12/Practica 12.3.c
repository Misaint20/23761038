/*EXPRESION
Obtener las raices de la expresion a traves de la formula general
Autor: Zahid Misaint Murillo Valenzuela */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float A,B,C,X1,X2;

int main()
{
    printf("Dame el valor de A, B y C: ");
    scanf("%f, %f, %f",&A,&B,&C);

    if (B*B-4*A*C > 0 && 2*A != 0) {
        X1=(-B+(sqrt(B*B-4*A*C)))/(2*A);
        X2=(-B-(sqrt(B*B-4*A*C)))/(2*A);
        printf("El valor de X1 es: %0.2f, y el valor de X2 es: %0.2f",X1,X2);
    }  else {
        printf("No es posible calcular la expresion");
    }
    return 0;
}

