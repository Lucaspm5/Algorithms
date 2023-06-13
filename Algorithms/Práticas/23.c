#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    while (scanf("%s", s) != EOF) {
        int count[26] = {0};
        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            count[s[i] - 'a']++;
        }
        int odd = 0;
        for (int i = 0; i < 26; i++) {
            if (count[i] % 2 == 1) {
                odd++;
            }
        }
        if (odd == 0) {
            printf("0\n");
        } else {
            printf("%d\n", odd - 1);
        }
    }
    return 0;
}
