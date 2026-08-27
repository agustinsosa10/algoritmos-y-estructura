#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float cubo_de_un_numero()
{
    float numero;
    printf("ingrese un numero real: ");
    scanf("%f", &numero);

    return pow(numero, 3);
}

int main()
{
    float resultado;

    resultado = cubo_de_un_numero();
    printf("%.2f", resultado);
    return 0;
}