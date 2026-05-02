#include <stdio.h>
#include <math.h>

int main() {
    float angle;
    printf("Enter angle in degrees: ");
    scanf("%f", &angle);

    angle = angle * 3.14159 / 180;

    printf("Sin = %.2f\n", sin(angle));
    printf("Cos = %.2f\n", cos(angle));
    printf("Tan = %.2f", tan(angle));

    return 0;
}


