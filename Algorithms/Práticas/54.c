#include <stdio.h>

void swap(int* a, int* b) {
    int copy = *a;
    *a = *b;
    *b = copy;
}

int menor(int* arr, int N) {
    int indice = 0;
    for (int i = 1;i < N;i++) {
        if (arr[i] < arr[indice]) indice = i;
    }
    return indice;
}

void ordenar(int* arr, int N) {
    if (N == 1) return 0;

    int min = menor(arr, N);

    swap(&arr[0], &arr[min]);

    ordenar(arr + 1, N - 1);
}

int main() {
    int arr[] = {1, 2, 3 , 4, 5};

    ordenar (arr, 5);
    for (int i = 0;i < 5;i++) printf("%d ", arr[i]);
    return 0;
}