#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.
#include <math.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.

void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;//En esta linea se crearon 6 variables tipo int y se les dio valor a tres de ellas.
    printf("Ingrese el numero de datos que se van a procesar:\t");//En esta linea hay un printf indicando ingresar un dato.
    scanf("%d", &N);//En esta linea utilizamos un scanf para guardar datos en la variable N.
    if (N > 0)//en esta linea hay un if diciendo que n tiene que ser mayor a 0.
    {
        for (I=1; I <= N; I++)//en esta linea creamos un bucle utilizando "for" donde se le dio un valor a la variable I y una condicion logica que dice que mientras I sea menor o igual que N se seguira repitiendo el bucle.
        {
            printf("\nIngrese el numero %d: ", I);//En esta linea hay un printf con salto de linea indicando ingrear un dato.
            scanf("%d", &NUM);//En esta linea se utilizo un scanf para guardar un dato en la variable NUM.
            if (NUM)//En esta linea utilizamos if diciendo que la variable NUM tiene que ser verdadera.
                if (pow(-1, NUM) > 0)//En esta linea el if esta comprobando si el numero es par o impar.
                    SPA = SPA + NUM;//En esta linea se dice que la variable SPA es igual a SPA+NUM.
                else//En esta linea utilizamos else indicando la accion a ejecutar en caso de que if diga lo contrario.
                {
                    SIM = SIM + NUM;//En esta linea se dice que SIM es igual a SIM+ NUM.
                    CIM++;//En esta linea se dice que se le sumara 1 a CIM.
                }
        }
        printf("\n La suma de los numeros pares es: %d", SPA);//En esta linea hay un printf con salto de linea arrojando un resultado.
        printf("\n El promedio de numeros impares es: %5.2f"), (float)(SIM / CIM);//En esta linea hay un printf con salto de linea arrojando un resultado.
    }
    else//En esta linea utilizamos else indicando la accion a ejecutar en caso de que if diga lo contrario.
        printf("\n El valor de N es incorrecto");//En esta linea hay un print f diciendo q es incorrecto el valor de N.
}
