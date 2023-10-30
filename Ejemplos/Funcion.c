/*Funcion
Obtener el resultado de la funcion dependiendo de 2 variables de tipo entero
Autor: Zahid Misaint Murillo Valenzuela*/

#include <stdlib.h>
#include <math.h>

int V, NUM;

float VAL;

int main ()
{
    printf ("Dame el valor de NUM: ");
    scanf ("%i",&NUM);

printf ("Dame el valor de V: ");
    scanf ("%i",&V);

   switch (NUM)
   {
   case 1:
    VAL = V*100;
    break;

    case 2:
    VAL = pow(100,V);
    break;

    case 3:
    VAL = 100.00/V;
    break;
   
    default:
    VAL = 0;
    break;
   }

    printf("El valor de VAL con la opcion %i es: %0.2f",NUM,VAL);
    
    return 0;
}