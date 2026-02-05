#include <stdio.h>

int main() {
  int number = 233;
  int* p = &number;
  p = &p;
  printf("%x\n", &p);
  number = 3444;
  printf("%x\n", *p);
  return 0;
}
