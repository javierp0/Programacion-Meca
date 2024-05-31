#include <stdio.h>//Esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.

void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int I, J, NUM, SUM, C = 0;//En esta linea se crearon 5 variables tipo "int" y a una de ellas se le dio el valor de 0.
    printf("nIngrese el numero limite: ");//En esta linea hay un printf indicando ingresar un dato.
    scanf("%d", &NUM);//En esta linea usamos scanf para guardar datos en la variable MAT.
    for (I = 1; I <= NUM; I++)//En esta linea utilizamos "for" para crear un bucle en el cual se le dio un valor a la variable "I" y se creo una condicion logica en la cual decimos que mientras la variable I sea menor o igual que la variable "NUM" se seguira repitiendo el ciclo.
    {
        SUM = 0;//En esta linea se dice que el valor de la variable SUM es 0.
        for (J = 1; J <= (I / 2); J++)//En esta lineas hacemos un bucle utilizando "for" en el cual se le dio un valor a J y se creo una condicion logica diciendo que mientras J sea menor o igual a la variable I dividida por 2 se seguira repitiendo el ciclo y a J se le agregara 1.
            if (( I % J) == 0)//En esta linea lo que se esta es creando una condicion de que el residuo i J sea igual a 0 para que se cumpla.
                SUM += J;//En esta linea decimos que a SUM se le sumara el valor de J a lo que ya tiene acumulado.
        if (SUM == I)//En esta linea tenemos una condicion de que la variable SUm sea igual a la variable I.
        {
            printf("\n%d es un numero perfecto", I);//En esta linea tenemos un printf con salto de linea dando el resultado de I mediante una tabulacion.
            C++;//En esta linea dice que a C se le sumara 1.
        }
    }
    printf("\nEntre 1 y %d hay %d numeros perfectos", NUM, C);//En esta linea tenemos un printf con salto de linea dando el resultado de NUM y C mediante una tabulacion.
}
