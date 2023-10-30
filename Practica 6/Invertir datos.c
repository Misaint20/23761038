/*INVERTIR_DATOS
Invierte el orden de los datos
Autor: Zahid Misaint Murillo Valenzuela
*/
#include <stdio.h>  // Librerias
int A,B,C,D;  // Bloque de declaracion

int main()
{
    printf("Dame el valor de A: ");
    scanf("%i",&A);  // Leer A
    printf("Dame el valor de B: ");
    scanf("%i",&B);  // Leer B
    printf("Dame el valor de C: ");
    scanf("%i",&C);  // Leer C
    printf("Dame el valor de D: ");
    scanf("%i",&D);  // Leer D
    printf("%i,%i,%i,%i",D,C,B,A);  // Escribir los valores invertidos
    return 0;
}