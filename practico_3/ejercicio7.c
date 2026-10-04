#include <stdio.h>

int suma_recursiva(int nums[], int idx, int acumm, int pos)
{

    if (idx == pos)
    {
        return acumm;
    }
    acumm += nums[idx];
    idx++;
    suma_recursiva(nums, idx, acumm, pos);
}

int main()
{
    int total;
    int pos;
    int acumm = 0;
    int nums[5] = {10, 0, 5, 10, 25};
    printf("ingrese hasta que posicion del 1 hasta el 5 quiere sumar: ");
    scanf("%d", &pos);
    total = suma_recursiva(nums, 0, acumm, pos);
    printf("el total es: %d\n", total);
    return 0;
}