/*Aumento
Aplicar 15% de aumento si el sueldo es menor a $1000.00 y un aumento del 12% en caso contrario
Autor: Zahid Misaint Murillo Valenzuela*/

#include <stdlib.h>

float SUE,NSUE;

int main ()
{
    printf ("Dame el sueldo del trabajador: ");
    scanf ("$%f",&SUE);

    if(SUE < 1000){
        NSUE = SUE*1.15;
    } else {
        NSUE = SUE*1.12;
    }

    printf("Nuevo sueldo: $%0.2f",NSUE);
    
    return 0;
}