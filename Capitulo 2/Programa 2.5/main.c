#include <stdio.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.
#include <math.h>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.


void main(void) //Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int OP, T; //En esta linea se crearon dos variables tipo "int".
    float RES;// En esta linea se creo una variable tipo float.
    printf("Ingrese la opcion del calculo y el valor entero: ");//En esta linea este printf fue creado para que se ingresen dos datos.
    scanf("%d %d", &OP, &T);// En esta linea scanf nos permite guardar datos en dos variables en este caso las de tipo int.
    switch(OP)// En esta linea indicamos al programa que dependiendo de la variable "OP" realice un caso u otro.
    {
    case 1: // En este linea se utiliza case para verificar si OP es igual a 1.
        RES = T / 5; //En esta linea en caso de que se ejecute este caso la variable RES seria la quinta parte de T
        break; // En este linea se utiliza break para salir del comadno switch.
    case 2: //En esta linea se utiliza case para verificar si OP es igual a 2.
        RES = pow(T,T);// En caso de que se ejecute este caso la variable RES sera igual a la variable "T" T veces
        break;// En esta linea sse utiliza break para salir del comando switch.
    case 3:// En esta linea se utiliza case para verificar si OP es igual a 3.
    case 4://En esta linea se utiliza case para verificar si OP es igual a 4.
        RES = 6 * T/2; // RES seria igual a T * 3.
        break;//En esta linea se utiliza break para salir del comando switch.
    default://En lugar de que no haya encontrado un case igual a la variable evaluada ejecutara esa orden sin importar el valor de la variable.
        RES = 1;//En esta linea en caso de que ejecute este case la variable RES es igual a 1.
        break;//En esta linea se utiliza break para salir del comando switch.

    }
    printf("\nResultado:  %7.2f", RES);//En esta linea se utiliza printf para decirnos el resultado de la variable RES con un salto de linea.

}
