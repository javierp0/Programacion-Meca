#include <stdio.h>//Esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.
#include <math.h>//Esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.

void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int I = 1, B = 0, C;//En esta linea creamos 3 variables tipo "int".
    double RES;//En esta linea se creo una variable tipo double (reales de doble expresion).
    RES = 4.0 / I;//En esta linea dice que la variable RES es igual a 4.0 dividido por la variable I.
    C = 1;//En esta linea decimos que la variable C es igual a 1.
    while ((fabs (3.1415 - RES)) > 0.0005)//En esta linea creamos un bucle diciendo que mientras que el valor absoluto restado por la variable RES sea mayor a 0,0005 se seguira repitiendo el bucle.
    {
        I += 2 ;//En esta linea decimos que a la variable I se le agrara 2 a lo que ya tenga acumulado.
        if (B)//En esta linea usamos if para comprobar que la condicion de B sea verdadera.
        {
            RES += (double) (4.0 / I);//En esta linea dice que sera igual a su valor mas el cociente de 4 entre I.
            B = 0;//En esta linea decimos que la variable B es igual a 0.
        }
        else//En esta linea utilizamos else indicando la accion a ejecutar en caso de que if diga lo contrario.
        {
            RES -= (double) (4.0 / I);//En esta linea decimos que RES sera igual a su valor menos el cociente de 4 entre I.
            B = 1;//En esta linea deciimos que la variable B es igual a 1.
        }
        C++;//En esta linea decimos que a C se le sumara uno.
    }
    printf("\nNumero de terminos:%d", C);//En esta linea hay un printf que imprime el valor de la variable C con una tabulacion.
}
