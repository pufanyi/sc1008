#include <stdio.h>

int main() {
  int n = 1078530011;
  float* fp = (float*)&n;
  printf("int:   %d\n", n);    // 1078530011
  printf("float: %f\n", *fp);  // 3.141593
  return 0;
}
