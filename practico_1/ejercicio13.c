#include <stdio.h>
#include <stdlib.h>

void min_y_max(int numero1, int numero2, int numero3, int *menor, int *mayor)
{
    *menor = numero1;
    *mayor = numero1;

    if (numero2 >= *mayor)
        *mayor = numero2;
    if (numero2 <= *menor)
        *menor = numero2;

    if (numero3 >= *mayor)
        *mayor = numero3;
    if (numero3 <= *menor)
        *menor = numero3;
}

int main()
{
    int menor, mayor;
    int numero1, numero2, numero3;

    scanf("%d", &numero1);
    scanf("%d", &numero2);
    scanf("%d", &numero3);

    min_y_max(numero1, numero2, numero3, &menor, &mayor);

    printf("el numero mayor es: %d\n el numero menor es: %d\n", mayor, menor);

    return 0;
}