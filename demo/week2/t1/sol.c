#include <stdio.h>
#include <math.h>

#define EPS 1e-6

int main() {
    printf("Enter the values for a1, b1, c1, a2, b2, c2:\n");
    double a1, b1, c1, a2, b2, c2;
    scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &c1, &a2, &b2, &c2);
    if (fabs(a1 * b2 - a2 * b1) < EPS) {
        printf("Unable to compute because the denominator is zero!\n");
        return 0;
    }
    double x = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
    double y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
    printf("x = %.2f and y = %.2f\n", x, y);
    return 0;
}