#include <stdio.h>
#include <stdlib.h>

int main() {
    int codigo[] = {1, 2, 3, 4, 5};
    int estoque[] = {0, 0, 0, 1, 2};
    int k = 0;
    int* new_vector = (int*)malloc(5 * sizeof(int));

    for (int i = 0;i < 5;i++) {
        if (estoque[i] != 0) {
            new_vector[k++] = codigo[i];
        }
    }

    for (int i = 0;i < k;i++) printf("%d\n", new_vector[i]);

    free(new_vector);

    return 0;
}