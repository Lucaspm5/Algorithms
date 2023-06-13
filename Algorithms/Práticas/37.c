#include <stdio.h>

int N = 1000;
long long vector[1000];

int verifica_primo(int m) {
    if (m <= 1) return 0;
    for (int i = 2;i * i <= m;i++) {
        if (m % i == 0) return 0;
    }
    return 1;
}

void primo(int m, int* p1, int* p2) {
    for (int i = m - 1;i >= 2;i--) {
        if (verifica_primo(i)) { (*p1) = i; break; }
    }

    for (int i = m + 1;;i++) {
        if (verifica_primo(i)) { (*p2) = i; break; }
    }
}

int main() {
    int m = 6, p1 = 0, p2 = 0;
    primo(m, &p1, &p2);
    printf("%d - %d - %d\n", m , p1, p2);

    return 0;
}