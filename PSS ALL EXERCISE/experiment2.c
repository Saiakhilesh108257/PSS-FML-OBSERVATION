#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    bill = units * 7.85;
    printf("Total bill = Rs. %.2f", bill);

    return 0;
}
