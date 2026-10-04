#include <stdio.h>

void sort(int nums[], int tam)
{
    int aux;
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = 0; j < tam - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                aux = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = aux;
            }
        }
    }
}

int binary_search(int nums[], int tam, int value_to_search)
{
    int idx_max = tam;
    int idx_min = 0;
    int half;

    while (idx_min <= idx_max)
    {
        half = (idx_min + idx_max) / 2;
        if (nums[half] == value_to_search)
        {
            return half;
        }
        else if (value_to_search < nums[half])
        {
            idx_max = half - 1;
        }
        else if (value_to_search > nums[half])
        {
            idx_min = half + 1;
        }
    }
}

int main()
{
    int nums[5] = {10, 6, 2, 4, 8};
    sort(nums, 5);
    int result = binary_search(nums, 5, 10);

    printf("arreglo ordenado\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\nel valor que buscaba esta en la posicion %d y es %d\n", result, nums[result]);
    return 0;
}