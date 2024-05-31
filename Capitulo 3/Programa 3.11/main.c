#include <stdio.h>//En esta linea utilizamos else indicando la accion a ejecutar en caso de que if diga lo contrario.


void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;//En esta linea creamos 5 variables tipo "int" y se le dio a cada una el valor de 0.
    float CAL;//En esta linea se creo una variable tipo float.
    printf("Ingresa la calificacion del alumno: ");//En esta linea hay un printf indicando ingresar un dato.
    scanf("%f", &CAL);//En esta linea se utilizo un scanf para guardar datos en la variable CAL.
    while (CAL != -1)//En esta linea creamos un bucle diciendo que mientras la variable CAL sea diferente a -1 se siga repitinedo el bucle.
    {
        if (CAL < 4)//En esta linea utilizamos if para crear una condicion la cual dice que la variable CAL tiene que ser menor o igual que 4.
            R1++;//En esta linea dice que se le sumara 1 a R1.
        else
            if (CAL < 6)//En esta linea utilizamos if para crear una condicion la cual dice que la variable CAL tiene que ser menor o igual que 6.
                R2++;//En esta linea dice que se le sumara 1 a R2.
            else
                if (CAL < 8)//En esta linea utilizamos if para crear una condicion la cual dice que la variable CAL tiene que ser menor o igual que 8.
                    R3++;//En esta linea dice que se le sumara 1 a R3.
                else
                    if (CAL < 9)//En esta linea utilizamos if para crear una condicion la cual dice que la variable CAL tiene que ser menor o igual que 9.
                        R4++;//En esta linea dice que se le sumara 1 a R4.
                    else
                        R5++;//En esta linea dice que se le sumara 1 a R5.
        printf("Ingresa la calificacion del alumno: ");//En esta linea hay un printf indicando ingresar un dato.
        scanf("%f", &CAL);//En esta linea usamos un scanf para guardar datos en la variable CAL.
    }
    printf("\n0..3.99 = %d", R1);//En esta linea hay un printf con salto de linea el cual imprime la cantidad de alumno que qeudaron en este intervalo de calificacion.
    printf("\n4..5.99 = %d", R2);//En esta linea hay un printf con salto de linea el cual imprime la cantidad de alumno que qeudaron en este intervalo de calificacion.
    printf("\n6..7.99 = %d", R3);//En esta linea hay un printf con salto de linea el cual imprime la cantidad de alumno que qeudaron en este intervalo de calificacion.
    printf("\n8..8.99 = %d", R4);//En esta linea hay un printf con salto de linea el cual imprime la cantidad de alumno que qeudaron en este intervalo de calificacion.
    printf("\n9..10   = %d", R5);//En esta linea hay un printf con salto de linea el cual imprime la cantidad de alumno que qeudaron en este intervalo de calificacion.
}
