#include <stdio.h> //esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.


void main(void)  //esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    float PRO; // a diferencia del tipo de dato "int" este tipo de dato nos permite usar numeros tanto enteros como decimales para ejecutar el programa. En este caso se creo una variable tipo float llamada "PRO" que hace relacion a Promedio
    printf("Ingrese el promedio del alumno: "); // (printf) este comando nos permite proyectar cualquier texto siempre y cuando este dentro de comillas en el print a la hora de ejecutar el programa .
    scanf("%f", &PRO); // en esta linea el scanf pide un dato para cuando este sea introducido guardarlo en la variable pro.
    if (PRO >= 6) // "if" pone una condicion para en caso de que se cumpla o no dicha condicion el flujo del programa cambie o siga igual. En este caso la condicion es que la variable PRO sea mayor o igual a 6.
        printf("\nAprobado"); // en este caso este comando (printf) se ejecutaria solo si se cumple la condicion del if que en este caso es que sea mayor o igual a 6.
}

