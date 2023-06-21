#include <stdio.h>

int maior_sequencia(int* arr, int inicio, int maior, int size) {
    if (inicio == size) return maior;

    if (arr[inicio] > maior) maior = arr[inicio];

    return maior_sequencia(arr, inicio + 1, maior, size);
}

int main() {
    int arr[] = {1, 2, 3,73, 4, 5};
    int maior = 0;
    printf("%d\n", maior_sequencia(arr, 0, maior, 6));
    return 0;
}