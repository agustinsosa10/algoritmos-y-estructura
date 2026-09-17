#include <stdio.h>
#include <stdlib.h>

#define MAX 2

typedef struct
{
    char id[20];
    char name[20];
    char last_name[20];
    int age;
    char profession[30];
    char born_place[30];
    char address[30];
    char tel[20];
} Students;

int menu()
{

    int option;
    printf("\n------MENU-------\n1.Cargar\n2.Mostrar alumnos\n3.Eliminar datos de un amigo\n4.Modificar un dato de un amigo\n5.Ver datos de un amigo\n0.Salir\nopcion: ");

    scanf("%d", &option);
    return option;
}

void load(Students students[])
{
    printf("ingrese los datos de los estudiantes:\n");
    for (int i = 0; i < MAX; i++)
    {
        printf("cedula: ");
        fgets(students[i].id, sizeof(students[i].id), stdin);
        printf("nombre: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("apellido: ");
        fgets(students[i].last_name, sizeof(students[i].last_name), stdin);
        printf("edad: ");
        scanf("%d", &students[i].age);
        getchar();
        printf("profesion: ");
        fgets(students[i].profession, sizeof(students[i].profession), stdin);
        printf("lugar de nacimiento: ");
        fgets(students[i].born_place, sizeof(students[i].born_place), stdin);
        printf("direccion: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);
        printf("telefono: ");
        fgets(students[i].tel, sizeof(students[i].tel), stdin);
    }
}

void show_students(Students students[])
{
    for (int i = 0; i < MAX; i++)
    {
        printf("\n------------\nestudiante %d\n", i + 1);
        printf("cedula: %s", students[i].id);
        printf("nombre: %s", students[i].name);
        printf("apeliido: %s", students[i].last_name);
        printf("edad: %d\n", students[i].age);
        printf("profesion: %s", students[i].profession);
        printf("lugar de nacimiento: %s", students[i].born_place);
        printf("direc: %s", students[i].address);
        printf("telefono: %s", students[i].tel);
    }
}

int main()
{
    Students students[MAX];
    int option;
    do
    {
        option = menu();
        getchar();
        switch (option)
        {
        case 1:
            load(students);
            break;
        case 2:
            show_students(students);
            break;
        default:
            break;
        }
    } while (option != 0);
    return 0;
}