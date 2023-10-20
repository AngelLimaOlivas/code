#include <stdio.h>

#define Tamano 8

void InsercionDirecta();
void ImprimirArreglo();

int Arreglo[] = {10, 15, 21, 4, 16, 75, 94, 8};

int main()
{
    printf("Algoritmo de inserción directa \n\n");
    InsercionDirecta();

    return 0;
}

void InsercionDirecta()
{
    for (int i = 0; i < Tamano; i++)
    {
        int Actual = Arreglo[i];
        int Anterior = i - 1;

        // Si el índice es >= 0, evalúa qué elemento es mayor.
        while (Anterior >= 0 && (Arreglo[Anterior] > Actual))
        {
            // Desplaza el elemento hacia la derecha.
            Arreglo[Anterior + 1] = Arreglo[Anterior];

            Anterior--;
        }

        // Coloca el elemento actual en la posición correcta.
        Arreglo[Anterior + 1] = Actual;

        // Imprime cada paso del ordenamiento.
        ImprimirArreglo();
    }
}

void ImprimirArreglo()
{
    for (int i = 0; i < Tamano; i++)
    {
        printf("   %d", Arreglo[i]);

        // Coloca , en lugar de . en el último elemento.
        if (i < Tamano - 1)
            printf(",");
        else
            printf(".");
    }
    printf("\n");
}
