#include <stdio.h>//Esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.
#include <math.h>//Esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.

void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int NUM;//En esta linea creamos una variable tipo "int".
    printf("Ingresa el numero para calcular la serie: ");//En esta linea hay un printf indicando ingresar un dato.
    scanf("%d", &NUM);//En esta linea usamos un scanf para guardar datos en la variable NUM.
    if (NUM > 0)//En esta linea creamos una condicion en la que la variable NUM tiene que ser mayor a 0.
    {
        printf("\nSerie de ULAM\n");//En esta linea hay un printf con salto de linea arrojando un dato.
        printf("%d \t", NUM);//En esta linea hay un printf indicando algo con relacion a la variable NUM.
        while (NUM !=1)//En esta linea creamos un bucle diciendo que mientras la variable NUM sea diferente a -1 se siga repitinedo el bucle.
        {
            if (pow(-1, NUM) > 0)//En esta linea el if esta comprobando si el numero es par o impar.
                NUM = NUM / 2;//n esta linea se dice que la variable NUM es igual a NUM dividido por 2.
            else//En esta linea utilizamos else indicando la accion a ejecutar en caso de que if diga lo contrario.
                NUM = NUM * 3 + 1;//En esta linea se dice que la variable NUM es igual a NUM multiplicado por 3 mas 1 (NUM * 3 + 1).
            printf("%d \t", NUM);//En este printf se imprime el valor de la variable NUM con una tabulacoin.
        }
    }
    else//En esta linea utilizamos else indicando la accion a ejecutar en caso de que if diga lo contrario.
        printf("\n NUM debe ser un entero positivo");//En esta linea hay un printf con salto de linea que indica que la variable num tiene que ser un numero enteroy positivo.
}
