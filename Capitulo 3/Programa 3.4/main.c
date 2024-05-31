#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.
#include <math.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.

void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.

{
    int NUM;//En esta linea creamos una variable tipo "int"
    long CUA, SUC = 0;//En esta variable creamos dos variables tipo "long" >>> enteros de largo alcance.
    printf("\nIngrese un numero entero -0 para terminar -:\t");//En esta linea el printf indica que se ingrese un numero 0 para terminar.
    scanf("%d", &NUM);//En esta linea utlizamos scanf para guardar un dato en la variable NUM.
    while(NUM)//En esta linea creamos un bucle indicando que mientras la variable NUM sea verdadera se siga repitiendo el mismo.
    {
        CUA = pow (NUM, 2);//En esta linea decimos que la variable CUA es igual a al cuadrado de la variable NUM.
        printf("%d al cubo es %ld", NUM, CUA);//En esta linea el printf imprime las variables NUM  y CUA.
        SUC = SUC + CUA;//En esta linea se dice que la variable SUC es igual a la suma de SUC y CUA.
        printf("\nIngrese un numero entero -0 para terminar -:\t");//En esta linea el printf dice que se ingrese 0 para terminar.
        scanf("%d", &NUM);//En esta linea utiizamos un scanf para guardar datos en la variable NUM.
    }
    printf("\nLa suma de los cuadrados es %ld", SUC);//En esta linea el printf indica que la suma de los cuadrados es porciento de long.
}
