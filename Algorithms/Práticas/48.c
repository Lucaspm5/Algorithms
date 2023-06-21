#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int** mat;
    int* vector;

    vector = (int*)calloc(100, sizeof(int));

    mat = (int**)calloc(5, sizeof(int*));
    for (int i = 0;i < 5;i++) {
        mat[i] = (int*)calloc(5, sizeof(int));
    }

    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 5;j++) {
            *(*(mat + i) + j) = rand() % 100;
        }
    }

    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 5;j++) {
            (*(vector + *(*(mat + i) + j)))++;
        }
    }

    for (int i = 0;i < 100;i++) {
        if (vector[i] > 1)
            printf("%d - %d\n", i, vector[i]);
    }

    for (int i = 0;i < 5;i++) {
        free(*(mat + i));
    }
    free(mat);

    free(vector);
    
    return 0;
}