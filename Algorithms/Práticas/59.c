#include <stdio.h>

int main() {
    int A, *B, **C, ***D;
    printf("Digite um valor para A: ");
    scanf("%d", &A);
    // fazendo os ponteiros apontarem para A
    B = &A;
    C = &B;
    D = &C;
    *B = A * 2;
    **C = A * 3;
    ***D = A * 4;
    // calculando e exibindo o dobro, o triplo e o quadruplo usando os ponteiros
    printf("O dobro de %d eh %d\n", A, *B * 2);
    printf("O triplo de %d eh %d\n", A, **C * 3);
    printf("O quadruplo de %d eh %d\n", A, ***D * 4);
    return 0;
}
