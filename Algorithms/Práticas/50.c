#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* new_string(char* s1, char* s2, int sizes1, int sizes2) {
    int k = 0;
    char* new = (char*)malloc(sizes1 * sizeof(char));
    for (int i = 0;i < sizes1;i++) {
        int flag = 0;
        for (int j = 0;j < sizes2;j++) {
            if (s1[i] == s2[j]) {
                flag = 1;
                break; 
            }
        }
        if (flag == 0) {
            new[k++] = s1[i];
        }
    }
    new[k] = '\0';
    return new;
}

int main() {
    char s1[] = "abcdfgh";
    char s2[] = "abf";

    char* aux = new_string(s1, s2, strlen(s1), strlen(s2));

    printf("%s", aux);
    free(aux);
    return 0;
}