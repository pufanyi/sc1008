#include <stdio.h>

int main() {
    printf("Enter x:\n");
    double x;
    scanf("%lf", &x);
    double solution = 1.0;
    double term = 1;
    for (int i = 1; i <= 10; ++i) {
        term *= x / i;
        solution += term;
    }
    printf("Result = %.2f\n", solution);
    return 0;
}