/*
AUMENTO
Calcular el aumento de los trabajadores y la nomina de la empresa
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

float SUE, NSUE, NOM;

int main() {

    printf("Dame el primer sueldo: $");
    scanf("%f",&SUE);

    while (SUE != -1)
    {
        if (SUE < 1000)
        {
            NSUE = SUE*1.15;
        } else {
            if (SUE >= 1000) 
            {
                NSUE = SUE*1.12;
            }
        }

        printf("El nuevo sueldo del trabajador es de $%0.2f",NSUE);

        NOM = NOM + NSUE;

        printf("\nDame el siguiente sueldo: $");
        scanf("%f",&SUE);
        
    }

    printf("La nomina de la empresa es de un total de $%0.2f",NOM);

    return 0;
    
}