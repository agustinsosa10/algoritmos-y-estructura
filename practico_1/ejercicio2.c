#include <stdio.h>
#include <stdlib.h>

int obtener_menor(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("el numero mayor es el primer numero que es %d\n", num1);
        return num1;
    }
    else
    {
        printf("el numero mayor es el segundo numero que es %d\n", num2);
        return num2;
    }
}

int main()
{

    int num1, num2, menor;
    for (int i = 0; i < 3; i++)
    {
        printf("ingrese el primer numero: ");
        scanf("%d", &num1);
        printf("ingrese el segundo numero: ");
        scanf("%d", &num2);

        menor = obtener_menor(num1, num2);
    }

    return 0;
}