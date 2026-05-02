#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 17 && age <= 25)
        printf("Eligible for admission");
    else
        printf("Not eligible for admission");

    return 0;
}
