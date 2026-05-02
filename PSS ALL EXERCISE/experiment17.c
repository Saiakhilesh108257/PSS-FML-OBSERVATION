#include <stdio.h>
#include <math.h>

int main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    printf("Natural log = %.2f\n", log(num));
    printf("Base-10 log = %.2f", log10(num));

    return 0;
}

