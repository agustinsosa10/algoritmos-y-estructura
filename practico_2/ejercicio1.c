#include <stdlib.h>
#include <stdio.h>

#define MAX 3

typedef struct
{
    char nombre[30];
    char apellido[39];
    int edad;
    char sexo[30];
    char direc[30];
    char telefono[30]
} Amigos;

int menu()
{

    int opcion;
    printf("\n------MENU-------\n1.Cargar\n2.Mostrar todos\n3.Eliminar datos de un amigo\n3.Modificar un dato de un amigo\n4.Ver datos de un amigo\n0.Salir\nopcion: ");

    scanf("%d", &opcion);
    return opcion;
}

void cargar(Amigos amigos[])
{

    printf("funcion cargar");
    for (int i = 0; i < MAX; i++)
    {

        printf("\n--------------\ningrese los datos de los amigos:\n");
        printf("nombre: ");
        getchar();
        fgets(amigos[i].nombre, sizeof(amigos[i].nombre), stdin);
        printf("apellido: ");
        fgets(amigos[i].apellido, sizeof(amigos[i].apellido), stdin);
        printf("edad: ");
        scanf("%d", &amigos[i].edad);
        getchar();
        printf("sexo: ");
        fgets(amigos[i].sexo, sizeof(amigos[i].sexo), stdin);
        printf("direccion: ");
        fgets(amigos[i].direc, sizeof(amigos[i].direc), stdin);
        printf("telefono: ");
        fgets(amigos[i].telefono, sizeof(amigos[i].telefono), stdin);
    }
}

void mostrar(Amigos amigos[])
{
    for (int i = 0; i < MAX; i++)
    {
        printf("\n------------\namigo %d\n", i + 1);
        printf("nombre: %s", amigos[i].nombre);
        printf("apeliido: %s", amigos[i].apellido);
        printf("edad: %d\n", amigos[i].edad);
        printf("sexo: %s", amigos[i].sexo);
        printf("direc: %s", amigos[i].direc);
        printf("telefono: %s", amigos[i].telefono);
    }
}

int main()
{
    Amigos amigos[MAX];
    int opcion;
    do
    {

        opcion = menu();
        switch (opcion)
        {
        case 1:
            cargar(amigos);
            break;
        case 2:
            mostrar(amigos);

        default:
            break;
        }

    } while (opcion != 0);
    return 0;
}