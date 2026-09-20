#include <stdlib.h>
#include <stdio.h>

#define MAX 3

typedef struct
{
    char id[30];
    char full_name[30];
    float avg;
} Students;

void load(Students students[])
{

    printf("funcion cargar");
    for (int i = 0; i < MAX; i++)
    {
        printf("\n--------------\ningrese los datos del estudiante %d:\n", i + 1);
        printf("legajo: ");
        getchar();
        fgets(students[i].id, sizeof(students[i].id), stdin);
        printf("nombre completo: ");
        fgets(students[i].full_name, sizeof(students[i].full_name), stdin);
        printf("promedio: ");
        scanf("%f", &students[i].avg);
    }
}

void sort(Students students[])
{
    Students aux;

    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = 0; j < MAX - i - 1; j++)
        {
            if (students[j].avg < students[j + 1].avg)
            {
                aux = students[j + 1];         // 9
                students[j + 1] = students[j]; // 8
                students[j] = aux;             // 9
            }
        }
    }
}

void show(Students students[])
{
    printf("\nListado Estudiantes: \n");
    for (int i = 0; i < MAX; i++)
    {
        printf("\n---------\n----- estudiante %d ---- \n", i + 1);
        printf("legajo: %s", students[i].id);
        printf("nombre: %s", students[i].full_name);
        printf("promedio: %.2f\n", students[i].avg);
    }
}

int main()
{
    Students students[MAX];
    load(students);

    sort(students);

    show(students);

    return 0;
}