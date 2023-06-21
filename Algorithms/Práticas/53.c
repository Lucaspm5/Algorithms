#include <stdio.h>

int somar(int A, int B) {
    // Somar A com o resultado da chamada recursiva
    return (A < B) ? A + somar(A + 1, B) : 0;
}

int main() {
    int A = 6, B = 4;

    if (A > B) {
        int copy = A;
        A = B;
        B = copy;
    }
    int soma = somar(A, B);
    printf("%d\n", soma);
    return 0;
}
