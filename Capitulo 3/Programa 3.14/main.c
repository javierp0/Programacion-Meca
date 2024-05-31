#include <stdio.h>//Esta linea representa la carpeta de comandos que se van a utilizar en este ejercicio.

void main(void)//Esta linea tiene dos "void" dejando claro que el primer "void" es para indicar que el programa no dara resultados de un tipo especificamente y el segundo "void" para indicar que no tiene parametros.
//(main) es la parte mas esencial para iniciar un programa ya que sirve como punto de partida para la ejecucion.
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;//En esta linea creamos 8 variables tipo "int" y se le dio a cada una el valor de 0.
    float PO1, PO2, PO3, PO4, PO5, PON;//En esta linea creamos 6 variables tipo "float".
    printf("ingese el primer voto: ");//En esta linea hay un printf indicando ingresar un dato.
    scanf("%d", VOT);//En esta linea usamos scanf para guardar datos en la variable VOT.
    while (VOT)//En esta linea se dice que mientras la variable VOT sea verdadera se siga repitiendo el bucle.
    {
        switch(VOT)// En esta linea indicamos al programa que dependiendo de la variable "VOT" realice un caso u otro.
        {
        case 1: C1++; break;// En este linea se utiliza case para verificar si VOT es igual a 1, se le sumaria 1 y se utiliza break para salir del comando switch.
        case 2: C2++; break;// En este linea se utiliza case para verificar si VOT es igual a 2, se le sumaria 1 y se utiliza break para salir del comando switch.
        case 3: C3++; break;// En este linea se utiliza case para verificar si VOT es igual a 3, se le sumaria 1 y se utiliza break para salir del comando switch.
        case 4: C4++; break;// En este linea se utiliza case para verificar si VOT es igual a 4, se le sumaria 1 y se utiliza break para salir del comando switch.
        case 5: C5++; break;// En este linea se utiliza case para verificar si VOT es igual a 5, se le sumaria 1 y se utiliza break para salir del comando switch.
        default: NU++; break;//En lugar de que no haya encontrado un case igual a la variable evaluada ejecutara esa orden sin importar el valor de la variable. A la variable NU se le sumara 1. se utiliza break para salir del comadno switch.
        }
        printf("Ingrese el siguiente voto -0 para terminar-: ");//En esta linea hay un printf indicando ingrear un dato.
        scanf("%d", &VOT);//En esta linea se utiliza scanf para guardar datos en la variable VOT.
    }
    SVO = C1 + C2 + C3 + C4 + C5 + NU;//En esta linea se aprecia que SVO es igual a la suma de los casos 1,2,3,4,5 mas la variable NU.
    PO1 = ((float) C1 / SVO) * 100;//En esta linea decimos que la variable PO1 es igual a C1 dividido por SVO multiplicado por 100.
    PO2 = ((float) C2 / SVO) * 100;//En esta linea decimos que la variable PO2 es igual a C2 dividido por SVO multiplicado por 100.
    PO3 = ((float) C3 / SVO) * 100;//En esta linea decimos que la variable PO3 es igual a C3 dividido por SVO multiplicado por 100.
    PO4 = ((float) C4 / SVO) * 100;//En esta linea decimos que la variable PO4 es igual a C4 dividido por SVO multiplicado por 100.
    PO5 = ((float) C5 / SVO) * 100;//En esta linea decimos que la variable PO5 es igual a C5 dividido por SVO multiplicado por 100.
    printf("\nTotal de votos: %d", SVO);//En esta linea hay un printf con salto de linea indicando arrojando un resultado por medio de una tabulacion.
    printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1);//En esta linea hay un printf con salto de linea indicando arrojando un resultado por medio de una tabulacion.
    printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2);//En esta linea hay un printf con salto de linea indicando arrojando un resultado por medio de una tabulacion.
    printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3);//En esta linea hay un printf con salto de linea indicando arrojando un resultado por medio de una tabulacion.
    printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, PO4);//En esta linea hay un printf con salto de linea indicando arrojando un resultado por medio de una tabulacion.
    printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, PO5);//En esta linea hay un printf con salto de linea indicando arrojando un resultado por medio de una tabulacion.
    printf("\nNulos:       %d votos -- Porcentaje: %5.2f", NU, PON);//En esta linea hay un printf con salto de linea indicando arrojando un resultado por medio de una tabulacion.

}
