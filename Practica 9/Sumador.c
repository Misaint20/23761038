/*SUMADOR
Sumar dos horas dadas y mostrar resultado en el formato HH:MM:SS
Autor: Zahid Misaint Murillo Valenzuela
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int HH1,HH2,HHF,MM1,MM2,MMF,MMT,SST,SS1,SS2,SSF;

int main ()
{
    printf("Dame el valor de Hora 1: ");
    scanf("%i : %i : %i",&HH1,&MM1,&SS1); 
    printf("Dame el valor de Hora 2: ");
    scanf("%i : %i : %i",&HH2,&MM2,&SS2);  
    SST=(SS1+SS2)/60; 
    MMT=(MM1+MM2)/60;
    HHF=HH1+HH2+MMT;
    MMF=(MM1+MM2+SST)%60;
    SSF=(SS1+SS2)%60;
    printf ("%i:%i:%i",HHF,MMF,SSF);
    return 0;
}