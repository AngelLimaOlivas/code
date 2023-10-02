#include <stdio.h>
#include <stdlib.h>

float calcularSuma(float lista[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += lista[i];
    }
    return suma;
        system("pause");
        system("cls");
}

float calcularPromedio(float lista[], int n) {
    float suma = calcularSuma(lista, n);
    return suma / n;
        system("pause");
        system("cls");
}

float encontrarMaximo(float lista[], int n) {
    float maximo = lista[0];
    for (int i = 1; i < n; i++) {
        if (lista[i] > maximo) {
            maximo = lista[i];
        }
    }
    return maximo;
        system("pause");
        system("cls");
}

float encontrarMinimo(float lista[], int n) {
    float minimo = lista[0];
    for (int i = 1; i < n; i++) {
        if (lista[i] < minimo) {
            minimo = lista[i];
        }
    }
    return minimo;
        system("pause");
        system("cls");
}

int main() {
    int n;
    printf("Ingrese el numero de elementos en la lista: ");
    scanf("%d", &n);
    
    if(n<=10){

    float lista[n];
    printf("Ingrese la lista de numeros separados por espacios:\n");
   
    for (int i = 0; i < n; i++) {
        if (scanf("%f", &lista[i]) != 1) {
            printf("Error: Ingrese un numero válido.\n");
            exit(1);
        }
    }

    system("cls");
   
    while (1) {
        printf("\nOperaciones disponibles:\n");
        printf("1. Calcular la suma\n");
        printf("2. Calcular el promedio\n");
        printf("3. Encontrar el maximo\n");
        printf("4. Encontrar el minimo\n");
        printf("5. Salir\n");
        printf("Seleccione una operacion (1-5): ");
       
        int opcion;
        scanf("%d", &opcion);

    system("cls");
   
    switch (opcion) {
            case 1:
                printf("Suma: %.2f\n", calcularSuma(lista, n));
                 break;
            case 2:
                printf("Promedio: %.2f\n", calcularPromedio(lista, n));
                break;
            case 3:
                printf("Máximo: %.2f\n", encontrarMaximo(lista, n));
                break;
            case 4:
                printf("Mínimo: %.2f\n", encontrarMinimo(lista, n));
                break;
            case 5:
                printf("¡Hasta luego!\n");
                exit(0);
            default:
                printf("Opción no válida. Por favor, seleccione una opción válida (1-5).\n");
        }
    }

    return 0;
}
    else{
	
    printf("Ingresa un numero menor o igual a diez \n");
	printf("Ingrese el numero de elementos en la lista: ");
    scanf("%d", &n);
    
    float lista[n];
    printf("Ingrese la lista de numeros separados por espacios:\n");
   
    for (int i = 0; i < n; i++) {
        if (scanf("%f", &lista[i]) != 1) {
            printf("Error: Ingrese un numero válido.\n");
            exit(1);
        }
    }

    system("cls");
   
    while (1) {
        printf("\nOperaciones disponibles:\n");
        printf("1. Calcular la suma\n");
        printf("2. Calcular el promedio\n");
        printf("3. Encontrar el maximo\n");
        printf("4. Encontrar el minimo\n");
        printf("5. Salir\n");
        printf("Seleccione una operacion (1-5): ");
       
        int opcion;
        scanf("%d", &opcion);

    system("cls");
   
    switch (opcion) {
            case 1:
                printf("Suma: %.2f\n", calcularSuma(lista, n));
                 break;
            case 2:
                printf("Promedio: %.2f\n", calcularPromedio(lista, n));
                break;
            case 3:
                printf("Máximo: %.2f\n", encontrarMaximo(lista, n));
                break;
            case 4:
                printf("Mínimo: %.2f\n", encontrarMinimo(lista, n));
                break;
            case 5:
                printf("¡Hasta luego!\n");
                exit(0);
            default:
                printf("Opción no válida. Por favor, seleccione una opción válida (1-5).\n");
        }
    }

    return 0;
}
}
