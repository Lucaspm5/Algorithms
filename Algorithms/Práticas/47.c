#include <stdio.h>

void swap(int* a, int* b) {
    int copy = *a;
    *a = *b;
    *b = copy;
}

int menor(int* arr, int size) {
    int indice = 0;
    for (int i = 1;i < size;i++) {
        if (arr[i] < arr[indice]) indice = i;
    }
    return indice;
}

void ordenar(int* arr, int size) {
    if (size == 1) return 0;

    int min = menor(arr, size);

    swap(&arr[0], &arr[min]);

    ordenar(arr + 1, size - 1);
}

int main() {
    int size = 5;
    int arr[size];
    for (int i = 0;i < 5;i++) scanf("%d", &arr[i]);

    ordenar(arr, 5);

    for (int i = 0;i < 5;i++) printf("%d\n", arr[i]);
    return 0;
}

