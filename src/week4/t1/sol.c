#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand((unsigned int)time(NULL));
  int n;
  scanf("%d", &n);
  int bin[10];
  // memset(bin, 0, sizeof(bin));
  for (int i = 0; i < 10; i++) {
    bin[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    int num = rand() % 100;
    bin[num / 10]++;
  }
  for (int i = 0; i < 10; i++) {
    printf("%2d - %2d | ", i * 10, i * 10 + 9);
    for (int j = 0; j < bin[i]; j++) {
      printf("*");
    }
    printf("\n");
  }
}
