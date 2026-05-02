#include <stdio.h>

int main() {
    double balance;
    printf("Enter current balance: ");
    scanf("%lf", &balance);

    balance = balance + 5000;
    printf("Updated balance = %.2lf", balance);

    return 0;
}
