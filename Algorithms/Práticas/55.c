#include <stdio.h>
#include <string.h>
#include <ctype.h>

char vogal(char s1) {
    s1 = tolower(s1);
    return s1 == 'a' || s1 == 'e' || s1 == 'i' || s1 == 'o' || s1 == 'u';
}

char* transformar_string(char* s1, char* s2, char* s3) {
    int k = 0;
    for (int i = 0, j = 0;s1[i] != '\0' && s2[j] != '\0';i++,j++) {
        if(vogal(s1[i])) {
            s3[k++] = s1[i];
        }
        if(vogal(s2[j])) {
            s3[k++] = s2[j];
        }
    }
    s3[k] = '\0';
    return s3;
}

int main() {
    char lucas[] = "Lucas";
    char jotinha[] = "jotinhas";
    char* s3 = (char*)malloc((strlen(lucas) + strlen(jotinha)) * sizeof(char));
    char* new_string = transformar_string(lucas, jotinha, s3);
    printf("%s", new_string);
    return 0;
}