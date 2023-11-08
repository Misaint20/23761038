/*
NOMINA
Calcular la nomina total de una empresa
Autor: Zahid Misaint Murillo Valenzuela
*/

#include<stdio.h>
#include<stdlib.h>

int i=1;
float SUE, NOM=0; 

int main()
{

    for(i=1; i<=10; i++){

        printf("Dame el sueldo del trabajador %i: $",i);
        scanf("%f",&SUE);
        
            NOM = NOM + SUE;

    }

    printf("La nomina total de la empresa es de $%0.2f",NOM);

    return 0;

}