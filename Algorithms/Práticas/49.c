#include <stdio.h>
#include <string.h>

int main() {
    char lucas[1000];
    int vector[256] = {0};

    scanf("%[^\n]s", lucas);

    for (int i = 0;i < strlen(lucas);i++) {
        vector[(int)lucas[i]]++;
    }

    for (int i = 0; i < 256;i++) {
        if (vector[i] > 1) printf("%c - %d", i, vector[i]);
    }
    return 0;
}