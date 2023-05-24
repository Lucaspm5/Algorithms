#include <stdio.h>

#define validar_existencia -1
#define Max_value 100

int fib[Max_value];

// Inicializo todos os elementos do vetor com -1, indicando a procura do elemento
void inicializar()
{
    for (int i = 0;i < Max_value;i++) fib[i] = validar_existencia;
}

int fibonacci(int n)
{
    // if o elemento ñ foi encontrado
    if (fib[n] == validar_existencia)
    {
        // condição de parada da recursao
        if (n <= 1) fib[n] = n;
        else
        // o fib[n] vai atualizando a cada interação e salvando/sobrescrevendo o valor de recursão de forma individual
            fib[n] = fibonacci (n - 1) + fibonacci (n - 2);
    }
    // ira retornar o elemento do n, esse indice sera onde ouve a ultima recursao e posterior mente a soma
    return fib[n];
}

int main()
{
    int n;

    scanf ("%d", &n);
    // inicializando todos os elementos com 0
    inicializar();

    int result = fibonacci(n);

    printf("%d\n",result);

    return 0;
}

/*O indice a cada recursao sera sendo atualizado, por exemplo n = 5
    fib[n] = fibonacci(5 - 1) + fibonacci(5-2)
    fib[4] = fibonacci(4-1) + fibonacci(4-2)
    ...
*/
