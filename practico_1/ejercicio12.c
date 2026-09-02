#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    char nombre;
    float precio;
} Producto;

void alta_prod(Producto productos[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("--------------\n");
        printf("ingrese el nombre del producto[%d]: ", i + 1);
        scanf(" %c", &productos[i].nombre);

        printf("ingrese el precio del producto[%d]: ", i + 1);
        scanf("%f", &productos[i].precio);
    }
}

void mod_prod(Producto productos[])
{
    int opcion = 0;
    printf("el nombre de que producto queres modificar?\n 1, 2, 3, 4 o 5\nopcion: ");
    scanf("%d", &opcion);
    opcion -= 1;

    printf("ingrese el nuevo nombre: ");
    scanf(" %c", &productos[opcion].nombre);
}

void elim_prod(Producto productos[], int tam)
{
    int opcion = 0;
    printf("el nombre de que producto queres eliminar?\n1, 2, 3, 4 o 5\nopcion: ");
    scanf("%d", &opcion);
    opcion -= 1;

    productos[opcion].precio = 0;
}

int main()
{

    Producto productos[5];
    alta_prod(productos, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("----\nproducto[%d]: %c %.2f\n", i + 1, productos[i].nombre, productos[i].precio);
    }

    mod_prod(productos);

    for (int i = 0; i < 5; i++)
    {
        printf("----\nproducto[%d]: %c %.2f\n", i + 1, productos[i].nombre, productos[i].precio);
    }

    elim_prod(productos, 5);

    for (int i = 0; i < 5; i++)
    {
        if (productos[i].precio != 0)
        {
            printf("----\nproducto[%d]: %c %.2f\n", i + 1, productos[i].nombre, productos[i].precio);
        }
    }
    return 0;
}