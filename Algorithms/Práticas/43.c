#include <stdio.h>

int soma_conjunto(int n, int ultimo) {
    if (n == 0) return ultimo;
    
    ultimo += n % 10;
    return soma_conjunto(n/10, ultimo);
}

int main() {
    int n = 1, ultimo = 0;
    int soma = soma_conjunto(n, ultimo);
    printf("%d\n", soma);
    return 0;
}