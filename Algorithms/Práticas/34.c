#include <stdio.h>

int soma(int a, int b) {
    return (a+1 < b) ? (a+1) + soma(a+1, b) : 0;
}

int main() {
    int a = 4, b = 6;

    if (a > b) {
        int copy = a;
        a = b;
        b = copy;
    }

    printf("%d\n", soma(a, b));

    return 0;
}