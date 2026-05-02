#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, r1, r2;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        r1 = (-b + sqrt(discriminant)) / (2 * a);
        r2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are: %.2lf and %.2lf\n", r1, r2);
    } else if (discriminant == 0) {
        r1 = r2 = -b / (2 * a);
        printf("Root is: %.2lf\n", r1);
    } else {
        printf("Roots are imaginary.\n");
    }
    return 0;
}