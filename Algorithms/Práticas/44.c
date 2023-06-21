#include <stdio.h>
#include <math.h>

int cubo(int n, int auxiliary) {
    return (auxiliary == n+1) ?  0 : pow(auxiliary, 3) + cubo(n, auxiliary + 1); 
}

int main() {
    int n = 4;
    int auxiliary = 1;

    printf("%d\n", cubo(n, auxiliary));
    return 0;
}