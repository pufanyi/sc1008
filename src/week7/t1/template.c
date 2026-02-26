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

int rSumup1(int n) { /* Write your code here */ }

void rSumup2(int n, int* result) { /* Write your code here */ }
