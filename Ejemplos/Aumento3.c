/*Aumento por categoria
Aplicar un aumento de sueldo dependiendo la categoria
Autor: Zahid Misaint Murillo Valenzuela*/

#include <stdlib.h>
#include <math.h>

int CATE;

float SUE,NSUE;

int main ()
{
    printf ("Dame el sueldo del trabajador: ");
    scanf ("$%f",&SUE);

printf ("Dame la categoria: ");
    scanf ("%i",&CATE);

   switch (CATE)
   {
   case 1:
    NSUE = SUE*1.15;
    break;

    case 2:
    NSUE = SUE*1.10;
    break;

    case 3:
    NSUE = SUE*1.08;
    break;
   
   case 4:
    NSUE = SUE*1.07;
    break;
   }

    printf("Nuevo sueldo: $%0.2f",NSUE);
    
    return 0;
}