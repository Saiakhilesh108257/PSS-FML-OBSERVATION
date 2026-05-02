#include <stdio.h>

int main() {
    float marks;
    printf("Enter marks: ");
    scanf("%f", &marks);

    if (marks >= 50.0)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}
