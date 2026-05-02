#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Absolute difference = %.2f", fabs(a - b));

    return 0;
}
