#include <stdlib.h>
#include <stdio.h>

int valor(int numero)
{
    if (numero > 0)
    {
        return 1;
    }
    else if (numero < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int resultado, numero, opcion;

    do
    {
        printf("\n---------\ningrese un numero: ");
        scanf("%d", &numero);
        resultado = valor(numero);
        printf("el resultado es: %d\n", resultado);
        printf("-------------\nquiere continuar?\n1:si\n0:no\nopcion: ");
        scanf("%d", &opcion);
    } while (opcion != 0);

    return 0;
}