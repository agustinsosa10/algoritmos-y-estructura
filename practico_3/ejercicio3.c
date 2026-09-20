#include <stdlib.h>
#include <stdio.h>

#define MAX 3

typedef struct
{
    long id;
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
        scanf("%ld", &students[i].id);
        printf("nombre completo: ");
        getchar();
        fgets(students[i].full_name, sizeof(students[i].full_name), stdin);
        printf("promedio: ");
        scanf("%f", &students[i].avg);
    }
}

int sort(Students students[])
{
    Students aux;
    int changes = 0;

    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = 0; j < MAX - i - 1; j++)
        {
            if (students[j].avg < students[j + 1].avg)
            {
                aux = students[j + 1];         // 9
                students[j + 1] = students[j]; // 8
                students[j] = aux;
                changes++;
            }
            else if (students[j].avg == students[j + 1].avg)
            {
                if (students[j].id > students[j + 1].id)
                {
                    aux = students[j + 1];
                    students[j + 1] = students[j];
                    students[j] = aux;
                    changes++;
                }
            }
        }
    }

    return changes;
}

void show(Students students[])
{
    printf("\nListado Estudiantes: \n");
    for (int i = 0; i < MAX; i++)
    {
        printf("\n---------\n----- estudiante %d ---- \n", i + 1);
        printf("legajo: %ld\n", students[i].id);
        printf("nombre: %s", students[i].full_name);
        printf("promedio: %.2f\n", students[i].avg);
    }
}

int main()
{
    int changes = 0;
    Students students[MAX];
    load(students);

    changes = sort(students);

    show(students);
    printf("en total hubieron %d cambios\n", changes);

    return 0;
}