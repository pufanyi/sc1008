#include <stdio.h>

int rDigitValue1(int num, int k);
void rDigitValue2(int num, int k, int* result);

int main() {
  int k;
  int number, digit;
  printf("Enter a number: \n");
  scanf("%d", &number);
  printf("Enter k position: \n");
  scanf("%d", &k);
  printf("rDigitValue1(): %d\n", rDigitValue1(number, k));
  rDigitValue2(number, k, &digit);
  printf("rDigitValue2(): %d\n", digit);
  return 0;
}

int rDigitValue1(int num, int k) { /* Write your code here */ }

void rDigitValue2(int num, int k, int* result) { /* Write your code here */ }
