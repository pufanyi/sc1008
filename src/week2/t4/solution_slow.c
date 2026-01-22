#include <stdio.h>

#define N 10

int main() {
  double x;
  scanf("%lf", &x);
  double sum = 0;
  for (int i = 0; i < N; ++i) {
    double denominator = 1;
    for (int j = 1; j <= i; ++j) {
      denominator *= j;
    }
    double numerator = 1;
    for (int j = 0; j < i; ++j) {
      numerator *= x;
    }
    sum += numerator / denominator;
  }
  printf("Result = %.2f\n", sum);
  return 0;
}
