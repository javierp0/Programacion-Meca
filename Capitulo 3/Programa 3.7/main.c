#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.



void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.

{
    int I, N;//En esta linea se crearon dos variables tipo float.
    float LAN, SLA = 0;//en esta linea se crearon dos variables tipo float.
    do//En esta linea utilizamos el comando do para que primero se ejecute y luego se analice la condicion de bucle.
    {
        printf("Ingrese el numero de lanzamientos:\t");//En esta linea hay un printf indicando ingresar un dato.
        scanf("%d", &N);//En esta linea utilizamos scanf para guardar un dato en la variable "N".

    }
    while (N < 1 || N > 11);//En esta linea creamos un bucle diciendo que mientras N sea menor que uno o N mayor a 11 se siga repitiendo el bucle.
    for (I=1; I<=N; I++)//En esta linea usamos "for" para crear un bucle donde se le da valor a la variable I y se crea una condicion logica; min]entas I sea menor o igual que N se seguira repitiendo el bucle.
    {
        printf("\nIngrese el lanzamiento %d: ", I);//En esta linea hay un printf con un salto de linea indicando ingresar un dato.
        scanf("%f", &LAN);//En esta linea usamos scanf para guardar un dato en la variable LAN.
        SLA = SLA + LAN;//En esta linea decimos que la variable SLA es igual a SLA+LAN.

    }
    SLA = SLA / N;//En esta linea decimos que la variable SLA es igual a SLA dividido por la Variable N.
    printf("\nEl promedio de lanzamiento es: %.2f", SLA);//en esta linea hay un printf con salto de linea arrojando unresultado.
}
