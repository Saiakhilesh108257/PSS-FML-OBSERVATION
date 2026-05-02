#include <stdio.h>
#include <math.h>

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    printf("Square root = %.2f\n", sqrt(num));
    printf("Cube = %.2f", pow(num, 3));

    return 0;
}
