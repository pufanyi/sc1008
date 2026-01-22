#include <stdio.h>

#define N 10

int main() {
    double x;
    scanf("%lf", &x);
    double sum = 0;
    double denominator = 1;
    double numerator = 1;
    for (int i = 0; i < N; ++i) {
        sum += numerator / denominator;
        denominator *= i + 1;
        numerator *= x;
    }
    printf("Result = %.2f\n", sum);
    return 0;
}