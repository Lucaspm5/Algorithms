#include <stdio.h>

int soma_vetor(int* x, int size)
{
    return (size == 0) ? 0 : x[0] + soma_vetor(x + 1, size - 1);
}

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0;i < size;i++) scanf("%d", &arr[i]);
    
    printf("%d\n", soma_vetor(arr, size));

    return 0;
}