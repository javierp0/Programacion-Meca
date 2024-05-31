#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.

void main(void)  //esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    float PRE, NPR;//En este caso se crearon dos variables tipo float llamadas "PRE" y " "NPR" que hace relacion a Precio y Nuevo Precio
    printf("Ingrese el precio del producto: ");// en este caso este printf indica que al ejecutar el programa presente en la pantalla que hay que que introducir un valor como precio del producto.
    scanf("%f", &PRE);// en este caso (scanf) nos da la opcion a la hora de corre el programa de guardar un dato en la variable PRE.
    if (PRE < 1500) // En este caso "if" pone una condicion de que "PRE" sea menor a 1500.
        NPR = PRE * 1.11;// En esta linea ordena de que en caso de que se cunpla la condicion de if la variable NPR sea igual que el valor dado a PRE al ser multiplicado 1.11 veces.
    else //En este caso else se ejecutaria al no cumplirse la condicion de if.
        NPR = PRE * 1.08; // En esta linea ordena de que en caso que no se cumpla if... el valor dado a PRE multiplicado por 1.08.
    printf("\nNuevo precio del producto: %8.2f", NPR);
}
