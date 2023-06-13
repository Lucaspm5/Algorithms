#include <stdio.h>

int soma(int n) {
    return (n == 0) ? n : n + soma(n-1);
}

int main() {
    int n = 4;
    printf("%d\n", soma(n));
    return 0;
}