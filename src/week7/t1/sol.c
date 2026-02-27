#include <stdio.h>

int rSumup1(int n);
void rSumup2(int n, int* result);

int main() {
  int n, result;
  printf("Enter a number: \n");
  scanf("%d", &n);
  printf("rSumup1(): %d\n", rSumup1(n));
  rSumup2(n, &result);
  printf("rSumup2(): %d\n", result);
  return 0;
}

int rSumup1(int n) {
  if (n == 1) {
    return 1;
  }
  return n + rSumup1(n - 1);
}

void rSumup2(int n, int* result) {
  if (n == 1) {
    *result = 1;
    return;
  }
  int temp;
  rSumup2(n - 1, &temp);
  *result = n + temp;
}
