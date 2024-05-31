#include <stdio.h>//Esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.

void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int I, PRI = 0, SEG = 1, SIG;//En esta linea se crearon 4 variables tipo int y se les dio un valor a 2 de ellas.
    printf("\t %d \t %d", PRI, SEG);//En esta linea hay un printf que imprime el valor de dos variables con una tabulacion.
    for (I = 3; I <= 50; I++)//En esta linea creamos un bucle utilizando "for" donde se le dio un valor a la variable I y una condicion logica que dice que mientras I sea menor o igual que 50 se seguira repitiendo el bucle.
    {
        SIG = PRI + SEG;//En esta linea se dice que la variable SIG es igual a PRI + SEG.
        PRI = SEG;//En esta linea se dice que la variable PRI es igual a SEG.
        SEG = SIG;//En esta linea se dice que la variable SEG es igual a SIG.
        printf("\t %d", SIG);//En esta linea hay un printf que imprime el valor de la variable SIG con una tabulacion.
    }
}
