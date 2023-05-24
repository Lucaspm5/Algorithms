// Memoization
#include <stdio.h>

#define validar_existencia -1
#define MAX 100

int fib[MAX];
// ----------------------------------------------
void inicializar()
{
    for (int i = 0;i < MAX;i++) fib[i] = validar_existencia;
}
// ----------------------------------------------
int recursion(int n)
{
    if (fib[n] == validar_existencia)
    {
        if (n <= 1) fib[n] = n;
        else
            fib[n] = recursion(n - 1) + recursion(n - 2);
    }
    return fib[n];
}
// ----------------------------------------------
int main()
{
    int n;

    scanf ("%d", &n);

    inicializar();

    int result_recursion = recursion(n);

    printf("%d\n",result_recursion);

    return 0;
}