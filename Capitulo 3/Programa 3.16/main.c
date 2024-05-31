#include <stdio.h>//Esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.


void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int I, MAT, MAMAT, MEMAT;//En esta linea creamos 4 variables de tipo "int"
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;//En esta linea creamos 4 variables tipo float.
    printf("Ingrese la matricula del primer alumno:\t");//En esta linea hay un printf indicando ingresar un dato.
    scanf("%d", &MAT);//En esta linea usamos scanf para guardar datos en la variable MAT.
    while (MAT)//En esta linea se dice que mientras la variable SAL sea verdadera se siga repitiendo el bucle.
    {
        SUM = 0;//En esta linea se dice que la variable SUM es igual a 0.
        for (I = 1; I <= 5; I++)//En esta linea utilizamos "for" para crear un bucle en el cual se le dio un valor a la variable "I" y se creo una condicion logica en la cual decimos que mientras la variable I sea menor o igual que "5" se seguira repitiendo el ciclo.
        {
            printf("\tIngrese la calificacion del alumno: ", I);//En esta linea hay un printf indicando ingresar un dato.
            scanf("%f", &CAL);//En esta linea usamos scanf para guardar datos en la variable CAL.
            SUM += CAL;//En esta linea decimos que a SUM se le sumara el valor de CAL a lo que ya tiene acumulado.
        }
        PRO = SUM / 5;//En esta linea decimos que la variable PRO es igual a SUM dividido por 5.
        printf("\nMatricula:%d\tPromedio:%5.2f", MAT, PRO);//En esta linea hay un printf con salto de linea  arrojando un resultado por medio de una tabulacion.
        if (PRO > MAPRO)//En esta linea creamos una condicion donde la variable PRO tiene que ser mayor a MAPRO.
        {
            MAPRO = PRO;//En esta linea decimos que MAPRO es igual a PRO.
            MAMAT = MAT;//En esta linea decimos que MAMAT es igual a MAT.
        }
        if (PRO < MEPRO)//En esta linea creamos una condicion donde la variable PRO tiene que ser menor a MEPRO.
        {
            MEPRO = PRO;//En esta linea decimos que la variable MEPRO es igual a PRO.
            MEMAT = MAT;//En esta linea decimos que la variable MEMAT es igual a MAT.
        }
        printf("\n\Ingrese la matricula del siguiente alumno: ");//En esta linea hay un printf con salto de linea indicando ingresar un dato.
        scanf("%d", &MAT);//En esta linea usamos scanf para guardar datos en la variable MAT.
    }
    printf("\n\Alumno con mejor Promedio:\t%d\t\%5.2f", MAMAT, MAPRO);//En esta linea hay un printf con salto de linea  arrojando un resultado por medio de una tabulacion.
    printf("\n\Alumno con peor Promedio:\t%d\t\%5.2f", MEMAT, MEPRO);//En esta linea hay un printf con salto de linea  arrojando un resultado por medio de una tabulacion.
}
