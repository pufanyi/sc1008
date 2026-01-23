#include <stdio.h>

int main() {
  printf("Enter x:\n");
  double x;
  scanf("%lf", &x);
  double sum = 1;
  double current_term = 1;
  for (int i = 1; i <= 10; ++i) {
    current_term *= x / i;
    sum += current_term;
  }
  printf("Result = %.2f\n", sum);
  return 0;
}
