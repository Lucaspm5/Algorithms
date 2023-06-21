#include <stdio.h>

int tamanho_string(char* str, int inicio, int fim, int cont) {
    if (fim == 0) return cont;
    return (str[inicio] != '\0') ? tamanho_string(str, inicio + 1, fim - 1, cont + 1) : 0;
}

int main() {
    char str[] = "lucas";

    int size = tamanho_string(str, 0, strlen(str) - 1, 0);

    printf("%d\n", size);

    return 0;
}