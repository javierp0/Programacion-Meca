#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.


void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int MAT, CAR, SEM;//En esta linea se crearon 3 variables tipo int.
    float PRO;//En esta linea se creo una variable tipo float.
    printf("Ingrese matricula: ");//En esta linea el printf indica que hay que agregar un valor.
    scanf("%d, &MAT");//En esta linea scanf nos permite guardar el dato o valor en la variabele MAT.
    printf("Ingrese carrera (1-Industrial 2-Telematica 3-Computacion 4-Mecanica) : ");//En esta linea printf
    scanf("%d", &CAR);
    printf("Ingrese semestre: ");
    scanf("%d", &SEM);
    printf("Ingrese promedio: ");
    scanf("%f", &PRO);
    switch(CAR)
    {
    case 1:
        if (SEM >= 6 && PRO >= 8.5)
            printf("\n%d %d %5.2f", MAT, CAR, PRO);
        break;
    case 2:
        if (SEM >= 5 && PRO >= 9.0)
            printf("\n%d %d %5.2f", MAT, CAR, PRO);
        break;
    case 3:
        if (SEM >= 6 && PRO >= 8.8)
            printf("\n%d %d %5.2f", MAT, CAR, PRO);
        break;
    case 4:
        if (SEM >= 7 && PRO >= 9.0)
            printf("\n%d %d %5.2f", MAT, CAR, PRO);
        break;
    default:
        printf("\n Error en la carrera");
        break;
    }
}
