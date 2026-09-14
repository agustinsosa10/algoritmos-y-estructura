#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 2

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
    printf("\n------MENU-------\n1.Cargar\n2.Mostrar todos\n3.Eliminar datos de un amigo\n4.Modificar un dato de un amigo\n5.Ver datos de un amigo\n0.Salir\nopcion: ");

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

void eliminar_datos(Amigos amigos[], int idx)
{
    strcpy(amigos[idx].nombre, "");
    strcpy(amigos[idx].apellido, "");
    amigos[idx].edad = 0;
    strcpy(amigos[idx].sexo, "");
    strcpy(amigos[idx].direc, "");
    strcpy(amigos[idx].telefono, "");
}

void modificar_amigo(Amigos amigo[], int idx)
{
    int opcion;
    printf("que dato quiere modificar?\n1.nombre\n2.apellido\n3.edad\n4.sexo\n5.direccion\n6.telefono\ningrese opcion: ");
    scanf("%d", &opcion);
    getchar();
    switch (opcion)
    {
    case 1:
        char nombre[30];
        printf("ingrese el nuevo nombre: ");
        fgets(nombre, sizeof(nombre), stdin);
        strcpy(amigo[idx].nombre, nombre);
        break;
    case 2:
        char apellido[39];
        printf("ingrese el nuevo apellido: ");
        fgets(apellido, sizeof(apellido), stdin);
        strcpy(amigo[idx].apellido, apellido);
        break;
    case 3:
        int edad;
        printf("ingrese la nueva edad: ");
        scanf("%d", &edad);
        amigo[idx].edad = edad;
        break;
    case 4:
        char sexo[30];
        printf("ingrese el nuevo sexo: ");
        fgets(sexo, sizeof(sexo), stdin);
        strcpy(amigo[idx].sexo, sexo);
        break;
    case 5:
        char direccion[30];
        printf("ingrese el nuevo nombre: ");
        fgets(direccion, sizeof(direccion), stdin);
        strcpy(amigo[idx].direc, direccion);
        break;
    case 6:
        char telefono[30];
        printf("ingrese el nuevo nombre: ");
        fgets(telefono, sizeof(telefono), stdin);
        strcpy(amigo[idx].telefono, telefono);
        break;
    default:
        break;
    }
}

void ver_amigo(Amigos amigo[], int idx)
{
    printf("\n------------\namigo %d\n", idx + 1);
    printf("nombre: %s", amigo[idx].nombre);
    printf("apeliido: %s", amigo[idx].apellido);
    printf("edad: %d\n", amigo[idx].edad);
    printf("sexo: %s", amigo[idx].sexo);
    printf("direc: %s", amigo[idx].direc);
    printf("telefono: %s", amigo[idx].telefono);
}

int main()
{
    Amigos amigos[MAX];
    int opcion;
    int idx;
    do
    {

        opcion = menu();
        switch (opcion)
        {
        case 1:
            getchar();
            cargar(amigos);
            break;
        case 2:
            mostrar(amigos);
            break;
        case 3:
            printf("\n los datos de que amigo quiere eliminar: \n");
            mostrar(amigos);
            printf("\n--------\ningrese el numero de amigo que quiere eliminar: ");
            scanf("%d", &idx);
            idx -= 1;
            eliminar_datos(amigos, idx);
            break;
        case 4:
            printf("\n---------\nlos datos de que amigo quiere modificar? \n");
            mostrar(amigos);
            printf("\n--------\ningrese el numero de amigo que quiere modificar: ");
            scanf("%d", &idx);
            idx -= 1;
            modificar_amigo(amigos, idx);
        case 5:
            printf("de que amigo quiere ver los datos? \n");
            for (int i = 0; i < MAX; i++)
            {
                printf("de %d: %s", i + 1, amigos[i].nombre);
            }
            printf("elija el numero de amigo: ");
            scanf("%d", &idx);
            idx -= 1;
            ver_amigo(amigos, idx);
        default:
            break;
        }

    } while (opcion != 0);
    return 0;
}