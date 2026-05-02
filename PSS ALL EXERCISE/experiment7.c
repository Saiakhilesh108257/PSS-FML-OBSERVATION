#include <stdio.h>

int main() {
    int empId;
    float basic, bonus, total;

    printf("Enter employee ID: ");
    scanf("%d", &empId);

    printf("Enter basic salary and bonus percentage: ");
    scanf("%f %f", &basic, &bonus);

    total = basic + (basic * bonus / 100);
    printf("Total Salary = %.2f", total);

    return 0;
}
