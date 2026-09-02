#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenar_arreglo(int numeros[], int tam)
{

    for (int i = 0; i < tam; i++)
    {
        numeros[i] = (rand() % 10) + 1;
        printf("posicion[%d]: %d\n", i + 1, numeros[i]);
    }
}

int es_impar(int numeros[], int tam)
{
    int posicion = rand() % 5;

    printf("posicion a analizar: [%d]\n", posicion + 1);
    printf("valor en la posicion %d: %d\n", posicion + 1, numeros[posicion]);

    if (numeros[posicion] % 2 != 0)
    {
        return posicion;
    }
    else
    {
        printf("el valor no es impar, volvemos a empezar\n");
        printf("----------\n");
        return -1;
    }
}

int main()
{
    srand(time(NULL));
    int numeros[5] = {0};
    int posicion = 0;

    do
    {

        llenar_arreglo(numeros, 5);
        posicion = es_impar(numeros, 5);

    } while (posicion == -1);

    printf("el arreglo en la posicion %d es impar y su valor es: %d\n", posicion + 1, numeros[posicion]);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("numero %d: %d", i + 1, numeros[i]);
    //     printf("\n");
    // }

    return 0;
}