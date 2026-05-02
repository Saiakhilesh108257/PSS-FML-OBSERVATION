#include <stdio.h>

int main() {
    char grade;
    printf("Enter grade: ");
    scanf(" %c", &grade);

    if (grade == 'A' || grade == 'B' || grade == 'C')
        printf("Pass");
    else
        printf("Fail");

    return 0;
}
