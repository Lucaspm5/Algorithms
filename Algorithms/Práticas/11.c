#include <stdio.h>

int somar_inteiros(int x)
{
    return (x < 1) ? 0 : x + somar_inteiros(x - 1); 
}

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d\n", somar_inteiros(x));

    return 0;
}