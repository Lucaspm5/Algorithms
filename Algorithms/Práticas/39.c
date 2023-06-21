#include <stdio.h>

int* is_zerado(int* codigo, int* estoque, int* new_size) {
    int count = 0;
    for (int i = 0;i < *new_size;i++) {
        if (estoque[i] == 0) count++;
    }

    int *auxiliary = (int*)calloc(count, sizeof(int));

    for (int i = 0;i < *new_size;i++) {
        if (estoque[i] == 0) {
            auxiliary[i] = codigo[i];
        }
    }
    *new_size = count;
    return auxiliary;
}

int main() {
    int codigo[] = {1, 2, 3, 4, 5};
    int estoque[] = {0, 0, 1 , 0, 0};
    int new_size = 5;
    int* verifica = is_zerado(codigo, estoque, &new_size);

    for (int i = 0;i < new_size;i++) printf("%d\n", verifica[i]);
    return 0;
}