#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.

void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int I, NUM;//En esta linea creamos dos variables tipo "int".
    long FAC;//En esta linea creamos una variable tipo long.
    printf("\nIngrese el numero: ");//En esta linea hay un printf con salto de linea indicando ingresar un dato.
    scanf("%d", &NUM);//En esta linea usamos un scanf para guardar datos en la variable NUM.
    if (NUM >= 0)//En esta linea utilizamos if para crear una condicion la cual dice que la variable NUM tiene que ser mayor o igual que cero.
    {
        FAC = 1;//En esta linea decimos que la variable FAC es igual a 1
        for (I=1; I <= NUM; I++)//En esta linea creamos un bucle con "for" donde se le da un valor a la variable I y se crea una condicion logica que dice mientras I sea menor o igual que NUM se siga repitiendo el bucle.
            FAC = 1;//En esta linea decimos que la variable FAC es igual a 1.
        printf("\el factorial de %d es: %1d", NUM, FAC);//En esta linea el printf arroja un resultado.



    }
    else//En esta linea utilizamos else indicando la accion a ejecutar en caso de que if diga lo contrario.
        printf("\nError en el dato ingresado");//En esta linea el print hay un printf con salgo de linea indicanco un error.
}
