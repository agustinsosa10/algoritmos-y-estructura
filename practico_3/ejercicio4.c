#include <stdio.h>

int binary_search(int nums[], int num, int size)
{
    int idx_top = size;
    int idx_bot = 0;
    int half;

    while (idx_bot <= idx_top)
    {
        half = (idx_bot + idx_top) / 2;
        if (nums[half] == num)
        {
            return half;
        }
        else if (nums[half] > num)
        {
            idx_top = half - 1;
            // half = (top + bot) / 2;
        }
        else if (nums[half] < num) // 5 < 1
        {
            idx_bot = half + 1;
            // half = (bot + top) / 2;
        }
    }

    return -1;
}

int main()
{
    int num;
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("ingrese el numero que quiere buscar del 1 al 10: ");
    scanf("%d", &num);

    int idx = binary_search(nums, num, 9);
    if (idx != -1)
    {
        printf("el numero buscado esta en la posicion: %d\n", idx);
    }
    else
    {
        printf("no se encontro el valor buscado\n");
    }
    return 0;
}