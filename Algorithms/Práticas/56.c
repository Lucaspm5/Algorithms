#include <stdio.h>

int is_primo(int n) {
    if (n <= 1) return 0;
    for (int i = 2;i * i < n;i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void verifico(int n, int* maior, int* menor) {
    for (int indice = n - 1;indice >= 2;indice--) {
        if (is_primo(indice)) {
            *menor = indice;
            break;
        }
    }
    for (int indice = n + 1; ; indice++) {
        if (is_primo(indice)) {
            *maior = indice;
            break;
        }
    }
}

int main() {
    int n = 4, maior, menor;
    maior = menor = 0;
    verifico(n , &maior, &menor);
    printf("%d - %d\n", maior, menor);
    return 0;
}