#include <stdio.h>

int fatorial(int x) {
    return (x == 0 || x == 1) ? 1 : x * fatorial(x - 1);
}

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d\n",fatorial(x));
    return 0;
}