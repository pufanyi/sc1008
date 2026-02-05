#include <stdio.h>

#define INIT_VALUE 999

int extEvenDigits1(int num);
void extEvenDigits2(int num, int* result);

int main() {
  int number, result = INIT_VALUE;
  printf("Enter a number: \n");
  scanf("%d", &number);
  printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
  extEvenDigits2(number, &result);
  printf("extEvenDigits2(): %d\n", result);
  return 0;
}

int extEvenDigits1(int num) {
  if (num == 0) {
    return 0;
  }
  int result = 0;
  int base = 1;
  int flag = 0;
  while (num != 0) {
    int digit = num % 10;
    num /= 10;
    if (digit % 2 == 0) {
      flag = 1;
      result += base * digit;
      base *= 10;
    }
  }
  if (flag == 0) {
    return -1;
  }
  return result;
}

void extEvenDigits2(int num, int* result) {
  *result = 0;
  if (num == 0) {
    return;
  }
  int base = 1;
  int flag = 0;
  while (num != 0) {
    int digit = num % 10;
    num /= 10;
    if (digit % 2 == 0) {
      flag = 1;
      *result += base * digit;
      base *= 10;
    }
  }
  if (flag == 0) {
    *result = -1;
  }
}
