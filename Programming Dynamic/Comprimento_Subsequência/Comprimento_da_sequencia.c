// Esse código da o comprimento da sequencia mais longa no array
#include <stdio.h>
#include <stdlib.h>

int sequencia(int* arr, int n)
{
    int* auxiliary = NULL;

    auxiliary = (int*)malloc(sizeof(int) * n);

    // Inicializo todos 
    for (int i = 0;i < n;i++) auxiliary[i] = 1;

    // Esse loop deve-se iniciar com 1 porque a comparação deve ser feita com o sucessor e o anterior, assim sucessivamente
    for (int i = 1;i < n;i++){
        // esse loop nunca avança mais que o 1º
        for (int j = 0;j < i;j++){
            if (arr[i] > arr[j] && auxiliary[i] < auxiliary[j] + 1) { auxiliary[i] = auxiliary[j] + 1; }
        }
    }

    int max = 0;
    // Percorro o vetor onde esta armazendo a devida ocorrencia de cada substring e aqui eu determino a maior
    for (int i = 0;i < n;i++){
        if (auxiliary[i] > max) { max = auxiliary[i];}
    }

    free(auxiliary);

    return max;
}


int main()
{
    int size;

    scanf("%d", &size);

    int arr[size];

    for (int i = 0;i < size;i++) scanf("%d", &arr[i]);

    int max = sequencia(arr, size);

    printf("%d\n", max);

    return 0;
}