#include <stdio.h>
#include <ctype.h>
#include <string.h>

char vogal[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'}; 

int verifica_vogal(char s1[], char s2[], int* tam1, int* tam2) {
    int count = 0, count2 = 0;
    for (int i = 0;s1[i] != '\0';i++) {
        if (isupper(s1[i])) (*tam1)++;
        for (int j = 0; j < sizeof(vogal); j++) {
            if (s1[i] == vogal[j]) count++;
        }
    }

    for (int i = 0;s2[i] != '\0';i++) {
        if (isupper(s2[i])) (*tam2)++;
        for (int j = 0;j < sizeof(vogal);j++) {
            if (s2[i] == vogal[j]) count2++;
        }
    }
    return count + count2;
}

int main() {
    char s1[] = "LuCas";
    char s2[] = "JOAO";
    int tam1 = 0, tam2 = 0;

    int vogais = verifica_vogal(s1, s2, &tam1, &tam2); 

    printf("Letras maiusculas em s1 %d Letras maiusculas em s2 %d - %d\n",tam1, tam2, vogais);

    return 0;
}