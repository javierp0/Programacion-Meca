#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.



void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    float P, S, R;//En esta linea se crearon tres variables tipo float.
    printf("\nIngrese las ventas de los tres vendedores: ");//En este caso el printf nos indica con un aslto de linea que ingresemos el valor a cada una de las variables.
    scanf("%f %f %f", &P, &S, &R); //En este caso el scanf nos permite guardar el valor de cada una de las variables.
    if (P > S)//En esta linea if pone una condicion de que P tiene que ser mayor que S.
        if (P > R)// En esta linea if pone una condicion de que P tiene que ser mayor que R.
            if (S > R)// En esta linea if pone una cindicion de que S tiene que ser mayor que R.
                printf("\n\n El orden es P, S y R: %8.2f %8.2f 8.2f", P, S, R);//En esta linea se imprimen las variables en P S y R.
            else//En esta linea se utiliza else en caso de no cumplirse la condicion de if
                printf("\n\n El orden es P, r y S: %8.2f %8.2f %8.2f", P, R, S);// En esta linea se imprimen las variables en P R y S.
        else//En esta linea se utiliza else en caso de no cumplirse la condicion del segundo if.
            printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);//En esta linea se imprimen las variables en R P y S.
    else
        if (S > R)//En esta linea el trabajo de else es qu
        if (P > R)
            printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);
        else
            printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);
    else
        printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);

}
