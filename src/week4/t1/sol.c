#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand((unsigned)time(NULL));
  int freq[10];
  int n;
  scanf("%d", &n);
  for (int i = 0; i < 10; ++i) {
    freq[i] = 0;
  }
  for (int i = 0; i < n; ++i) {
    int num = rand() % 100;
    freq[num / 10]++;
  }
  for (int i = 0; i < 10; ++i) {
    printf("%2d - %2d | ", i * 10, i * 10 + 9);
    for (int j = 0; j < freq[i]; ++j) {
      putchar('*');
    }
    putchar('\n');
  }
}
