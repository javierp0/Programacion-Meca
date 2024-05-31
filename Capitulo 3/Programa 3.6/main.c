#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.


void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.

{
    int I = 0;//En esta linea creamos una variable tipo "int".
    float SAL, PRO, NOM = 0;//En esta linea se crearon 3 variables tipo float indicando que la variable NOM es igual a 0.
    printf("Ingrese el salario del profesor:\t");//En esta linea el printf dice que se ingrese un dato.
    scanf("%f", &SAL);//En esta linea se utiliza scanf para guardar un dato en la variable SAl.
    do//En esta linea utilizamos el comando "do" para que primero ejecute y luego analice la condicion del bucle.
    {
        NOM = NOM + SAL;//En esta linea dice que el valor de la variable NOM es igual a NOM + SAL.
        I = I + 1;//En esta linea dice que el valor de la variable I es igual a I + 1.
        printf("Ingrese el salario del profesor -0 para terminar- :\t");//En esta linea el printf indica que se indique un dato y en caso de querer terminar se introduzca 0.
        scanf("%f", &SAL);//En esta linea se utiliza scanf para guardar datos en la variable SAL.

    }
    while (SAL);//En esta linea se dice que mientras la variable SAL sea verdadera se siga repitiendo el bucle.
    PRO = NOM / I;//En esta linea decimos que la variable PRO es igual a "NOM" divido por la variable "I".
    printf("\nNomina: %.2f \t promedio de salarios: %.2f", NOM, PRO);//En esta linea hay un printf con salto de linea arrojando un resultado.
}
