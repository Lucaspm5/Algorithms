#include <stdio.h>

int busca_binaria(int* arr, int inicio, int fim, int x) {
    if (inicio > fim) return -1;

    int meio = (inicio + fim) / 2;
    if (arr[meio] == x) return meio;
    return (arr[meio] < x) ? busca_binaria(arr, meio + 1, fim, x) : busca_binaria(arr, inicio, meio - 1, x);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int k = 4;
    int achado = busca_binaria(arr, 0, 5, k);
    printf("%d\n", achado);
    return 0;
}