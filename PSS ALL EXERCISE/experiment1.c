#include <stdio.h>

int main() {
    float temp;
    printf("Enter temperature: ");
    scanf("%f", &temp);

    if (temp > 40.5)
        printf("Heat Alert");
    else
        printf("Temperature Normal");

    return 0;
}
