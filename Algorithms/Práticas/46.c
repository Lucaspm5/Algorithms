#include <stdio.h>

void swap(int* a, int* b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int menor(int* arr, int N)
{
    int indice = 0;
    // 5 4 3 2 1
    // arr[i] = 4 < arr[0] = 5
    // arr[i] = 3
    // arr[i] = 2
    // arr[i] = 1 indice = 5
    for (int i = 1;i < N;i++)
    {
        if (*(arr + i) < *(arr + indice)) { indice = i; }
    }

    return indice;
}

void ordena_crescente(int *arr, int N)
{
    if (arr == NULL || arr < 1 || N == 1) return 0;

    else{
        int indice = menor(arr, N);

        swap(&*(arr + 0), &*(arr + indice));
        // n - 1 indica que ja ordenou o ultimo, colocando o na ultima posicao
        ordena_crescente(arr + 1, N - 1);
    }
}

int main()
{
    int N;

    scanf("%d", &N);

    int arr[N];

    for (int i = 0;i < N;i++) scanf("%d", &arr[i]);

    ordena_crescente(arr, N);

    for (int i = 0;i < N;i++) printf("%d ", *(arr + i));

    return 0;
}