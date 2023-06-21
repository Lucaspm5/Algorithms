#include <stdio.h>
#include <ctype.h>
#include <string.h>

int palindrome(char* s1, int inicio, int fim) {
    if(inicio >= fim) return 1;

    return (s1[inicio] == s1[fim]) ? palindrome(s1, inicio + 1, fim - 1) : 0;
}

int main() {
    char lucas[] = "Aba";

    if (palindrome(tolower(lucas), 0, strlen(lucas)- 1)) {
        printf("eh palindrome\n");
    } else {
        printf("n eh palindrome\n");
    }
    return 0;
}