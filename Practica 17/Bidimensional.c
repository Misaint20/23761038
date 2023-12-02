/*
BIDIMENSIONAL
Realizar un recorrido de nuestro arreglo
Autor: Zahid Misaint Murillo Valenzuela
*/

#include <stdio.h>
#include <stdlib.h>

int V[12][4] = {{24,20,19,21},{18,24,22,20},{19,27,23,21},{26,25,22,27},{20,21,22,25},{19,26,30,24},{30,32,30,29},{34,30,32,31},{29,30,31,32},{29,26,28,24},{18,24,28,23},{14,15,19,10}};
int i, j;

int main() {
    
    printf("MES\t\tT1\tT2\tT3\tT4\n");

    for (i = 0; i <= 11; i++)
    {
        switch (i)
        {
        case 0:
            printf("\nEnero   ");
            break;
        
        case 1:
            printf("\nFebrero   ");
            break;

        case 2:
            printf("\nMarzo   ");
            break;

        case 3:
            printf("\nAbril   ");
            break;
            
        case 4:
            printf("\nMayo    ");
            break;

        case 5:
            printf("\nJunio   ");
            break;

        case 6:
            printf("\nJulio   ");
            break;

        case 7:
            printf("\nAgosto   ");
            break;

        case 8:
            printf("\nSeptiembre");
            break;

        case 9:
            printf("\nOctubre   ");
            break;

        case 10:
            printf("\nNovembre");
            break;

        case 11:
            printf("\nDiciembre");
            break;
        }

        for (j = 0; j <= 3; j++)
    {
        printf("\t%i",V[i][j]);
    }
    }

    return 0;
}
