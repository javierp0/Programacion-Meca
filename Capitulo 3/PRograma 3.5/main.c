#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.

void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.

{
    float PAG, SPA = 0;//En esta linea se crearon dos variables tipo float.
    printf("Ingrese el primer pago:\t");//En esta linea el printf indica que se ingrese el primer pago.
    scanf("%f", &PAG);//En esta linea usamos scanf para guardar datos en la variable PAG.
    do//En esta linea utilizamos un comando "do" para que analice la condicion del bucle luego de ya ejecutarlo.
    {
        SPA = SPA + PAG;//En esta linea se dice que el valor de la variable SPA es SPA sumado a PAG.
        printf("Ingrese el sigueiente pago -0 para terminar -:");//En esta linea el printf dice que se ingrese el siguiente pago y para terminar la ejecucion se ponga 0.
        scanf("%f", &PAG);//En esta linea utilizamos scanf para guardar datos en la variable PAG.
    }
    while(PAG);//En esta linea creamos un bucle diciendo que mientras la variable PAG sea verdadera se siga repitiendo el bucle.
    printf("\nEl total del pago del mes es: %.2f", SPA);//En esta linea hay un printf con salto de linea diciendo que el pago del mes es %2.f.
}
