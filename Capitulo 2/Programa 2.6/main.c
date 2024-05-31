#include <stdio.h>>//esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.


void main(void) //Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    float SAL;// En esta linea se creo una variable tipo float con el nombre de SAL.
    int NIV; //En esta linea se creo una variable tipo int con el nombre de NIV.
    printf("Ingrese el nivel academico del profesor: ");//En esta linea se utilizo printf para mostrar un texto que indique ingresar el valor.
    scanf("%d", &NIV);//En esta linea scanf nons permite guardar el valor ingresado en la variable NIV.
    printf("Ingrese el salario: ");//En esta linea se utiliza printf para  mostrar un texto indicando ingresar el valor.
    scanf("%f", &SAL);//En esta linea utilizamos scanf para guardar el valor ingresado en la variable tipo float SAT.
    switch(NIV)//En esta linea utilizamos switch indicando al programa que dependiendo de la variable NIV realice un caso u otro.
    {
    case 1:// En esta linea se utliza case para verificar si NIV es igual a 1.
        SAL = SAL * 1.0035;//En esta linea en caso de que se ejecute este case la variable SAL seria igual a SAl*1.0041.
        break;//En esta linea se utiliza break para salir del comando switch.
    case 2://En esta linea se utiliza case para verificar si NIV es igual a 2.
        SAL = SAL * 1.0041;//En esta linea en caso de que se ejecute este case la variable SAL es igual a SAl*1.0048.
        break;//En este linea utilizamos break para salir del comando switch.
    case 3://En esta linea utilizamos case para verificar que NIV es igual a 3.
        SAL = SAL * 1.0048;//En esta linea en caso de que se ejecute este caso la variable SAL es igual a SAL * 1.0053.
        break;//En esta linea se utiliza break para salir del comando switch.
    case 4://En esta linea se utiliza case para verificar si NIV es igual a 4.
        SAL = SAL * 1.0053;//En esta linea en caso de que se ejecute este case SAL seria igual a SAl * 1.0053
        break;//En este caso break se utiliza para salir del comando switch.
    }
    printf("\n\nNivel: %d \tNuevo salario: %8.2f", NIV, SAL);//En esta linea utilizamos printf para imprimir la variable NIV y SALT en un salto de linea indicando que la variable real solo se le imprimiran 2 resultados decimales.
}
