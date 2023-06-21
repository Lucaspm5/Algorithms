#include <stdio.h>

int main() {
  int bolas[51];
  for (int i = 1; i <= 50; i++) {
    bolas[i] = (i + 1) * (i + 1) / 2 - 1;
  }
  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++) {
    int n;
    scanf("%d", &n);
    printf("%d\n", bolas[n]);
  }
  return 0;
}
