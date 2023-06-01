#include <stdio.h>
 
int *fibonacci(int *fib,int n)
{
    for(int i = 2; i < n; i++)
    {
        *(fib + i) = *(fib + i - 1) + *(fib + i - 2);
    }
 
    return fib;
}
 
int soma_k(int *fib, int n)
{
    int soma = 0;
 
    for(int i = 0;i < n;i++)
    {
        soma += *(fib + i);
    }
 
    return soma;
}
 
int main(int argc, char const **argv)
{
    int n = 20;
    int k;
 
    scanf("%d", &k);
 
    int *fib = (int*)malloc((k + 1) * sizeof(int));
 
    *(fib + 0) = 0;
    *(fib + 1) = 1;
 
    int *auxiliary = fibonacci(fib, k + 1);
    int soma = soma_k(auxiliary,k + 1);
 
    printf("%d\n",soma);
 
    free(fib);
 
    return 0;
}
