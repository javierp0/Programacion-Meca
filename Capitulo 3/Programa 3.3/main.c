#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.


void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    float PAG, SPA;//En esta lineas se crearon dos variables tipo float.
    SPA = 0;//En esta linea le damos valor a la variable "SPA" diciendo que vale "0"
    printf("Ingrese el primer pago:\t");//En esta linea usamos un printf que imprima que se debe ingresar el primer pago.
    scanf("%f", &PAG);//En esta linea utilizamos scanf para guardar datos en la variable "PAG".
    while(PAG)//En esta linea creamos un bucle indicando que mientras la variable sea verdadera se seguira repitiendo el mismo.
    {
        SPA = SPA + PAG;//En esta linea decimos que la variable SPA es igual a la suma de la variable SPA mas PAG.
        printf("Ingrese el siguiente pago:\t");//En este printf se imprimira que se debe ingresar el siguiente pago.
        scanf("%f", &PAG);//En esta linea utilizamos scanf para guardar datos en la variable PAG.
    }
    printf("\nEl total de pagos del mes es: %.2f", SPA);//En esta linea utilizamos printf que muestra el total de pagos del mes.
}
