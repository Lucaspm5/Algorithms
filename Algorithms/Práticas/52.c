#include <stdio.h>

int somar(int n) {
    return (n == 0) ? n : n + somar (n-1);
}

int main() {
    int n = 4;
    printf("%d\n", somar(n));
    return 0;
}