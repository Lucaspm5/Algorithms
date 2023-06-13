#include <stdio.h>
#include <string.h>

int vogal[] = {'a', 'e', 'i', 'o', 'u'};

void intercalar(char* s1, char* s2, char* s3) {
    int k = 0;
    for (int i = 0;s1[i] != '\0';i++) {
        for (int j = 0;j < sizeof(vogal);j++) {
            if (s1[i] == vogal[j]) {
                s3[k++] = s1[i];
            }
        }
    }
    for (int i = 0;s2[i] != '\0';i++) {
        for (int j = 0;j < sizeof(vogal);j++) {
            if (s2[i] == vogal[j]) {
                s3[k++] = s2[i];
            }
        }
    }
    s3[k] = '\0';
}

int main() {
    char s1[] = "lucas";
    char s2[] = "joao";
    char s3[100];

    intercalar(s1, s2, &s3);

    printf("%s\n", s3);

    return 0;
}