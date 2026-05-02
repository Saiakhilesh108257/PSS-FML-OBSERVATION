#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {
    double r, area;
    printf("Enter radius: ");
    scanf("%lf", &r);

    area =PI * pow(r, 2);
    printf("Result of PI * r^2: %.2lf\n", area);

    return 0;
}