#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.

void main(void) //esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    float PRO; // En este caso se creo una variable tipo float llamada "PRO" para hacer relacion al Promedio.
    printf("Ingrese el promedio del alumno: "); //En este caso este printf al ejecutar el programa nos indica introducir un valor para comprobar si el alumno aprobo o reprobo.
    scanf("%f", &PRO);// En este caso el scanf guarda el valor ingresado en la variable PRO.
    if (PRO >= 6.0) //En este caso if pone la condicion de que el promedio sea mayor o igual que 6.
        printf("\nAprobado");// En este printf indica que si se cumple la condicion de if marque como aprobado el valor.
    else //En este caso else se ejecutaria al no cumplirse la condicion de if.
        printf("\nReprobado"); //En este caso el printf se ejecutaria solo si la condicion de if no se cumple.
}
