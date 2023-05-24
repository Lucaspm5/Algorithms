#include <stdio.h>

int Fibonacci(int size)
{
    int arr[size + 1];

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2;i <= size;i++) arr[i] = arr[i - 1] + arr[i - 2];

    return arr[size];
}

int main()
{
    int size;

    scanf ("%d", &size);

    int arr = Fibonacci(size);

    printf("%d\n",arr);

    return 0;
}