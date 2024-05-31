#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.


void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int I, N, NUM, SUM;//En esta linea se crearon tres variables tipo "int".
    SUM = 0;//En esta linea le damos valor a la variable "SUM" el cual es "0".
    printf("Ingrese el numero de datos:\t");//En esta linea se creo un printf pidiendo ingresar el numero de datos".
    scanf("%d", &N);//En esta linea se uso scanf para guardar datos en la variable "N".
    for (I=1; I<=N; I++)//En esta linea utilizamos "for" para crear un bucle en el cual se le dio un valor a la variable "I" y se creo una condicion logica en la cual decimos que mientras la variable I sea menor o igual que la variable "N" se seguira repitiendo el ciclo.
    {
        printf("Ingrese el dato numero %d:\t", I);//En esta linea creamos un printf para ingresar el dato numero.
        scanf("%d", &NUM);//En esta linea utilizamos scanf para guardar datos en la variable "NUM".
        if (NUM > 0)//En esta linea se utilizo if para crear una condicion en la cual se exige que la variable "NUM" debe ser mayor a 0.
            SUM = SUM + SUM;//En esta linea decimos que el valor de la variable "SUM" ahora es la suma de la misma "SUM" + "SUM".
    }
    printf("\nLa suma de los numeros positivos es: %d", SUM);//En esta linea usamos un printf con salto de linea indicando que se mostrara el valor de la suma de los numeros positivos.
}
