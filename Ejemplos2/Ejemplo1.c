/*
NOMINA
Calcular la nomina de la empresa
Autor: Zahid Misaint Murillo Valenzuela
*/

#include<stdio.h>
#include<stdlib.h>

float NOM, SUE1, SUE2, SUE3, SUE4, SUE5, SUE6, SUE7, SUE8, SUE9, SUE10;

int main()
{
    printf("Dame el sueldo del trabajor 1: ");
    scanf("$%f",&SUE1);

    printf("Dame el sueldo del trabajor 2: ");
    scanf("$%f",&SUE2);

    printf("Dame el sueldo del trabajor 3: ");
    scanf("$%f",&SUE3);

    printf("Dame el sueldo del trabajor 4: ");
    scanf("$%f",&SUE4);

    printf("Dame el sueldo del trabajor 5: ");
    scanf("$%f",&SUE5);

    printf("Dame el sueldo del trabajor 6: ");
    scanf("$%f",&SUE6);

    printf("Dame el sueldo del trabajor 7: ");
    scanf("$%f",&SUE7);

    printf("Dame el sueldo del trabajor 8: ");
    scanf("$%f",&SUE8);

    printf("Dame el sueldo del trabajor 9: ");
    scanf("$%f",&SUE9);

    printf("Dame el sueldo del trabajor 10: ");
    scanf("$%f",&SUE10);

    NOM = SUE1+ SUE2 + SUE3 + SUE4 + SUE5 + SUE6 + SUE7 + SUE8 + SUE9 + SUE10;

    printf("La nomina total de la empresa es $%0.2f",NOM);

    return 0;
    
}