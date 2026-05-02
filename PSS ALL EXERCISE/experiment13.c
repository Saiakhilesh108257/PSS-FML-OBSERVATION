#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, result;
    printf("Enter A, B, and C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    result = (A + B + (2 * C / (3 * A)) + pow(A, 2) + (2 * B));
    printf("Result: %.2lf\n", result);

    return 0;
}