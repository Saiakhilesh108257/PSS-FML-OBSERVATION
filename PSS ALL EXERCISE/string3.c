#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string to concatenate: ");
    gets(str2);
    strcat(str1, str2);

    printf("\nResulting string after concatenation: %s\n", str1);

    return 0;
}