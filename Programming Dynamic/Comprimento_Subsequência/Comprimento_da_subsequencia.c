#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
    // Recebe 2 inteiros e retorna o maior
    return (a > b) ? a : b;
}

int lcs (char *x, char *y, int m, int n)
{
    int L[m + 1][n + 1];

    for (int i = 0;i <= m;i++){
        for (int j = 0;j <= n;j++){
            // caso base, as duas são vazias
            if (i == 0 || j == 0) { L[i][j] = 0; }

            else if(x[i - 1] == y[j - 1]) { L[i][j] = L[i - 1][j - 1] + 1; }

            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
    return L[m][n];
}

int main()
{
    char x[] = "AGGTAB";
    char y[] = "GXTXAYB";
    int m = strlen(x);
    int n = strlen(y);

    printf("Length of LCS is %d\n", lcs(x, y, m, n));

    return 0;
}