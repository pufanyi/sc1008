#include <stdio.h>
#include <math.h>

int main() {
    double a1, b1, c1, a2, b2, c2;
    scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &c1, &a2, &b2, &c2);
    if (fabs(a1 * b2 - a2 * b1) < 1e-9) {
        printf("No solution\n");
        return 0;
    }
    double x = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
    double y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
    printf("%.6lf %.6lf\n", x, y);
    return 0;
}