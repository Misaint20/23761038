/*
IMPUESTOS
Calcular impuestos de los articulos dependiendo el precio
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float PREBAS,PT,IT;
float PA1,PA2,IA1,IA2,IA3;

int main()
{
    printf("Dame el precio del producto: ");
    scanf("$%f",&PREBAS);

    if(PREBAS > 500){
        IA1 = 20 * 0.3;
        PA2 = PREBAS - 40;
        IA3 = PA2 * 0.50;
    } else {
        if(PREBAS > 40 && PREBAS <= 500){
            IA1 = 20 * 0.3;
            PA1 = PREBAS - 40;
            IA2 = PA1 * 0.40;
        } else {
            if(PREBAS > 20 && PREBAS <= 40){
                IA1 = (PREBAS - 20) * 0.3;
            } 
        }    
    }    
    IT = IA1 + IA2 + IA3;
    PT = PREBAS + IT;
    
    printf("El total de impuestos de tu producto es $%0.2f, lo cual deja con un precio total al producto de $%0.2f",IT,PT);

    return 0;
}