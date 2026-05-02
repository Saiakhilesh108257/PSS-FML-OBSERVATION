#include <stdio.h>
#include <math.h>

int main() {
    double S, A, B, C, area;
    printf("Enter S, A, B, and C: ");
    scanf("%lf %lf %lf %lf", &S, &A, &B, &C);

    area = sqrt(S * (S - A) * (S - B) * (S - C));
    printf("Result: %.2lf\n", area);

    return 0;
}