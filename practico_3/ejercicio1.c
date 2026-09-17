#include <stdlib.h>
#include <stdio.h>

#define SIZE 4

void load(int numeros[])
{

    for (int i = 0; i < SIZE; i++)
    {
        printf("numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
}

void sort(int numeros[])
{

    int aux;
    // el size - 1 es para no comparar el ultimo elemento del arreglo. por que el ultimo no se puede comparar con el siguiente por que no existe
    for (int i = 0; i < SIZE - 1; i++) // 0 < 3 / 1 < 3
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {

                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }
}

int main()
{
    int numeros[SIZE];

    load(numeros);
    sort(numeros);

    printf("arreglo ordenado: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}