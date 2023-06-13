#include <stdio.h>
#include <string.h>

int main() 
{
    int count[256] = {0};

    char str[1000];

    scanf("%[^\n]s", str);

    for (int i = 0;i < strlen(str);i++) {
        count[(int)str[i]]++;
    }

    for (int i = 0;i < 256;i++) {
        if (count[i] >= 1) {
            printf("%c - %d\n", i, count[i]);
        }
    }
    return 0;
}