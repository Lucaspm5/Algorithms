#include <stdio.h>
#include <string.h>
const int N = 1e4;

int main()
{
    char s1[N], s2[N];
    int count = 0;
    scanf("%s %s", s1, s2);
    for (int i = 0;i <= strlen(s1) - strlen(s2);i++) {
        int valido = 1;
        for (int j = 0;j < strlen(s2);j++) {
            if (s1[i + j] == s2[j]) {
                valido = 0;
                break;
            }
        }
        if (valido) count++;
    }
    printf("%d\n", count);
    
    return 0;
}