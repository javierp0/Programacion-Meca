#include <stdio.h>
#include <stdlib.h>
//Jose Javier Pacheco\\
//2021/0276\\

void main(void)
{
float PRO;
printf("Ingrese el promedio del alumno: ");
scanf("&f", &PRO);
if (PRO >= 6.0)
    printf("\nAprobado");
else
    printf("\nReprobado");
}
