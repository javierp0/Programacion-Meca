#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.

void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int I = 2, CAM = 1;//En esta linea se crearon dos variables tipo int y se les dio valor a cada una.
    long SSE = 0;//En esta linea se creo una variabele tipo long indicando que su valor es 0.
    while (I <= 2500)//En esta linea creamos un bucle diciendo que mientras I sea menor o igual a 2500 se siga repitiendo el bucle.
    {
        SSE = SSE + I;//En esta linea se dice que la variable SSE es igual a SSE + I.
        printf("\t %d", I);//En esta linea hay un printf indicando en que vuelta del bucle nos encontramos.
        if (CAM)// En esta linea utilizamos if para crear una condicion diciendo que si CAM es verdadera se realizara lo que esta abajo del if.
        {
            I += 5;//En esta linea dice que a I se le sumara 5 a lo que ya tiene dentro.
            CAM--;//En esta linea dice que a CAM se le va a restar 1.

        }
        else//En esta linea utilizamos para que lo que esta debajo se ejecute en caso de que falle if.
        {
            I += 3;//en esta linea se dice que a I se le sumara 3 a lo que ya tiene adentro.
            CAM ++;//en esta linea se dice que a CAM se le sumara 1.
        }
    }
    printf("\nLa suma de la serie es: %1d", SSE);//En esta linea hay un printf con salto de linea arrojando un resultado.
}
