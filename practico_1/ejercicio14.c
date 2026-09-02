#include <stdio.h>
#include <stdlib.h>

void depositar_dinero(float *saldo, float monto_depositar)
{
    *saldo += monto_depositar;
}

void retirar_dinero(float *saldo, float saldo_retirar)
{

    while (saldo_retirar > *saldo)
    {
        printf("no hay saldo suficiente para retirar\n");
        printf("ingrese un nuevo monto a retirar: ");
        scanf("%f", &saldo_retirar);
    }

    *saldo -= saldo_retirar;
}

void consultar_saldo(float *saldo)
{
    printf("su saldo actual es: %.2f$ ", *saldo);
}

int main()
{
    int opcion;
    float saldo = 0;
    float monto_depositar;
    float saldo_retirar;

    do
    {
        printf("---------------\n1-Depositar dinero\n2-Retirar dinero\n3-Consultar saldo\n0-Salir\nopcion: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("saldo a depositar: ");
            scanf("%f", &monto_depositar);
            depositar_dinero(&saldo, monto_depositar);
            break;
        case 2:
            printf("cuanto dinero quiere retirar? :");
            scanf("%f", &saldo_retirar);
            retirar_dinero(&saldo, saldo_retirar);
            break;
        case 3:
            consultar_saldo(&saldo);
        }
    } while (opcion != 0);

    return 0;
}