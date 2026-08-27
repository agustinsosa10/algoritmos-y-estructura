#include <stdlib.h>
#include <stdio.h>

void dibujar_trian(int numero, char letra)
{

    int aux = numero;
    for (int i = 0; i < numero; i++)
    {
        for (int j = 0; j < aux; j++)
        {
            printf("%c", letra);
        }
        aux--;
        printf("\n");
    }
}

int main()
{
    int numero;
    char letra;

    printf("ingrese un numero: ");
    scanf("%d", &numero);
    printf("ingrese una letra: ");
    scanf(" %c", &letra);
    dibujar_trian(numero, letra);
}