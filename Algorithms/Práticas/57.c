#include <stdio.h>
#include <string.h>
int main() {
    char frase1[] = "lucas";
    char frase2[] = "u";
    char *ptr = strstr(frase1, frase2);

    if (ptr!= NULL) {
        printf("%s - ocorreu em %s na posicao %d", frase2, frase1, ptr - frase1);
    }
    return 0;
}