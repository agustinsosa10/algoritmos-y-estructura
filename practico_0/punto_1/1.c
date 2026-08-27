#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choise_option()
{
    int option;

    printf("\n----------\n1.cargar produccion\n2.mostrar produccion\n3.analizar produccion\n4.mostrar resultados\n0.salir\nopcion: ");
    scanf("%d", &option);

    return option;
}

void load_production(int production[4][5])
{
    int max = 99;
    int min = 10;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            production[i][j] = rand() % (max - min + 1) + min;
        }
    }
}

void show_production(int production[4][5])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", production[i][j]);
        }
        printf("\n");
    }
}

void total_mach_product(int production[4][5])
{

    int total_mach[4] = {0};

    printf("---PRODUCCION DE CADA MAQUINA----\n");
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            total_mach[i] += production[i][j];
        }
        printf("produccion maquina %d: %d \n", i + 1, total_mach[i]);
    }
}

void total_day(int production[4][5])
{
    int total[5] = {0};
    printf("\n---PRODUCCION POR DIA-----\n");
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            total[j] += production[i][j];
        }
        printf("total por dia %d: %d \n", j + 1, total[j]);
    }
}

void mach_with_higher_prod(int production[4][5])
{
    int higher = 0;

    int total_mach[4] = {0};

    printf("---PRODUCCION DE CADA MAQUINA----\n");
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            total_mach[i] += production[i][j];
            if (higher <= total_mach[i])
            {
                higher =
            }
        }
        printf("produccion maquina %d: %d \n", i + 1, total_mach[i]);
    }
}

int main()
{
    int option;
    int production[4][5];

    srand(time(NULL));

    do
    {

        option = choise_option();

        // printf("%d", option);

        switch (option)
        {
        case 1:
            load_production(production);
            break;
        case 2:
            show_production(production);
            break;
        case 3:
            system("clear");
            total_mach_product(production);
            total_day(production);
            mach_with_higher_prod(production);
            break;
        case 4:
            printf("case 4\n");
            break;
        default:
            if (option != 0)
            {
                printf("default case\n");
            }
            break;
        }
    } while (option != 0);

    return 0;
}
