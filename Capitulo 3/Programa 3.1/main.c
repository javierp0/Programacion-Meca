#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.



void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int I;//En esta linea se creo una variable tipo "int".
    float SAL, NOM;// En esta linea se creo dos variables tipo float.
    NOM = 0;// En esta linea se le dio un valor igual a cero a la variable NOM.
    for (I=1; I<=15; I++)//En esta linea se utilizo "for" para crear un bucle, en el cual se le dio valor a la variable "I" y se creo una condicion logica para el mismo (mientras i sea menor o igual a 15 se seguira repitiendo el ciclo.
    {
        printf("\Ingrese el salario del profesor%d:\t", I);//En esta linea se creo un print para indicar cuando ingresar el dato SAL.
        scanf("%f, %SAL");//En esta linea scanf nos permite guardar datos en la variable "SAL".
        NOM = NOM + SAL;//En esta linea se dice que la variable "NOM" es igual a la variable NOM sumada a la variable "SAL".
    }
    printf("\nEl total de la nomina es: %.2f", NOM);//En esta linea tenemos un printf el cual imprime el valor de la variable NOM.
}


