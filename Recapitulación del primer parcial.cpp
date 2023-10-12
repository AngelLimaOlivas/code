#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define Max 15

// Estructura de la pila
struct Pila {
    int items[Max];
    int top;
};

// Estructura de la cola
struct Cola {
    int items[Max];
    int front;
    int rear;
};

// Función para inicializar la pila
void initPila(struct Pila* Pila) {
    Pila->top = -1;
}

// Función para comprobar si la pila está vacía
bool isPilaEmpty(struct Pila* Pila) {
    return Pila->top == -1;
}

// Función para comprobar si la pila está llena
bool isPilaFull(struct Pila* Pila) {
    return Pila->top == Max - 1;
}

// Función para agregar un elemento a la pila
void push(struct Pila* Pila, int value) {
    if (isPilaFull(Pila)) {
        printf("La pila está llena. No se puede agregar mas elementos.\n");
    } else {
        Pila->items[++Pila->top] = value;
        printf("Elemento %d agregado a la pila.\n", value);
    }
}

// Función para eliminar un elemento de la pila
int pop(struct Pila* Pila) {
    if (isPilaEmpty(Pila)) {
        printf("La pila está vacia. No se pueden eliminar elementos.\n");
        return -1;
    } else {
        return Pila->items[Pila->top--];
    }
}

// Función para inicializar la cola
void initCola(struct Cola* Cola) {
    Cola->front = -1;
    Cola->rear = -1;
}

// Función para comprobar si la cola está vacía
bool isColaEmpty(struct Cola* Cola) {
    return Cola->front == -1;
}

// Función para comprobar si la cola está llena
bool isColaFull(struct Cola* Cola) {
    return (Cola->rear + 1) % Max == Cola->front;
}

// Función para agregar un elemento a la cola
void enCola(struct Cola* Cola, int value) {
    if (isColaFull(Cola)) {
        printf("La cola está llena. No se puede agregar mas elementos.\n");
    } else {
        if (isColaEmpty(Cola)) {
            Cola->front = 0;
        }
        Cola->rear = (Cola->rear + 1) % Max;
        Cola->items[Cola->rear] = value;
        printf("Elemento %d agregado a la cola.\n", value);
    }
}

// Función para eliminar un elemento de la cola
int deCola(struct Cola* Cola) {
    if (isColaEmpty(Cola)) {
        printf("La cola está vacia. No se pueden eliminar elementos.\n");
        return -1;
    } else {
        int value = Cola->items[Cola->front];
        if (Cola->front == Cola->rear) {
            Cola->front = Cola->rear = -1;
        } else {
            Cola->front = (Cola->front + 1) % Max;
        }
        return value;
    }
}

// Función para calcular el máximo en una estructura
int findMax(int items[], int count) {
    if (count == 0) {
        printf("La estructura esta vacia. No se puede encontrar el maximo.\n");
        return -1;
    }
    int max = items[0];
    for (int i = 1; i < count; i++) {
        if (items[i] > max) {
            max = items[i];
        }
    }
    return max;
}

// Función para calcular la moda en una estructura
void findMode(int items[], int count) {
    if (count == 0) {
        printf("La estructura está vacia. No se puede encontrar la moda.\n");
        return;
    }

    int maxCount = 0;
    int mode = -1;

    for (int i = 0; i < count; i++) {
        int current = items[i];
        int currentCount = 1;
        for (int j = i + 1; j < count; j++) {
            if (items[j] == current) {
                currentCount++;
            }
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
            mode = current;
        }
    }

    printf("La moda es: %d\n", mode);
}

// Función para calcular la sumatoria en una estructura
int findSum(int items[], int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += items[i];
    }
    return sum;
}

// Función para calcular el promedio en una estructura
double findAverage(int items[], int count) {
    if (count == 0) {
        printf("La estructura esta vacia. No se puede encontrar el promedio.\n");
        return -1;
    }
    return (double)findSum(items, count) / count;
}

// Función para calcular el rango en una estructura
int findRange(int items[], int count) {
    if (count == 0) {
        printf("La estructura esta vacia. No se puede encontrar el rango.\n");
        return -1;
    }
    int min = items[0];
    int max = items[0];
    for (int i = 1; i < count; i++) {
        if (items[i] < min) {
            min = items[i];
        }
        if (items[i] > max) {
            max = items[i];
        }
    }
    return max - min;
}

// Función para calcular la desviación media en una estructura
double findMeanDeviation(int items[], int count) {
    if (count == 0) {
        printf("La estructura esta vacia. No se puede calcular la desviacion media.\n");
        return -1;
    }

    double mean = findAverage(items, count);
    double deviationSum = 0.0;

    for (int i = 0; i < count; i++) {
        deviationSum += abs(items[i] - mean);
    }

    return deviationSum / count;
}

int main() {
    struct Pila Pila;
    struct Cola Cola;
    initPila(&Pila);
    initCola(&Cola);

    int option;
    int value;
    int PilaCount = 0;
    int ColaCount = 0;

    do {
        printf("\nOpciones:\n");
        printf("1. Agregar un elemento\n");
        printf("2. Encontrar el maximo\n");
        printf("3. Encontrar la moda\n");
        printf("4. Encontrar la sumatoria\n");
        printf("5. Encontrar el promedio\n");
        printf("6. Encontrar el rango\n");
        printf("7. Calcular la desviacion media\n");
        printf("8. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Ingrese un valor: ");
                scanf("%d", &value);
                int choice;
                printf("¿Agregar a la cola (1) o a la pila (2)?: ");
                scanf("%d", &choice);
                if (choice == 1) {
                    enCola(&Cola, value);
                    ColaCount++;
                } else if (choice == 2) {
                    push(&Pila, value);
                    PilaCount++;
                } else {
                    printf("Opcion no valida.\n");
                }
                break;
            case 2:
                printf("Maximo en la cola: %d\n", findMax(Cola.items, ColaCount));
                printf("Maximo en la pila: %d\n", findMax(Pila.items, PilaCount));
                break;
            case 3:
                printf("Moda en la cola: ");
                findMode(Cola.items, ColaCount);
                printf("Moda en la pila: ");
                findMode(Pila.items, PilaCount);
                break;
            case 4:
                printf("Sumatoria en la cola: %d\n", findSum(Cola.items, ColaCount));
                printf("Sumatoria en la pila: %d\n", findSum(Pila.items, PilaCount));
                break;
            case 5:
                printf("Promedio en la cola: %.2f\n", findAverage(Cola.items, ColaCount));
                printf("Promedio en la pila: %.2f\n", findAverage(Pila.items, PilaCount));
                break;
            case 6:
                printf("Rango en la cola: %d\n", findRange(Cola.items, ColaCount));
                printf("Rango en la pila: %d\n", findRange(Pila.items, PilaCount));
                break;
            case 7:
                printf("Desviacion media en la cola: %.2f\n", findMeanDeviation(Cola.items, ColaCount));
                printf("Desviacion media en la pila: %.2f\n", findMeanDeviation(Pila.items, PilaCount));
                break;
            case 8:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no valida. Intente de nuevo.\n");
        }
    } while (option != 8);

    return 0;
}
