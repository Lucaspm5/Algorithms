#include <stdio.h>

int main() {
    int a, b, c, aux;
    printf("Digite tres valores: ");
    scanf("%d %d %d", &a, &b, &c);
    // se a for maior que b, troca os valores
    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    // se a for maior que c, troca os valores
    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }
    // se b for maior que c, troca os valores
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }
    // agora a é o menor valor, b é o segundo menor e c é o maior
    printf("Os valores ordenados sao: %d %d %d\n", a, b, c);
    return 0;
}
