#include <stdio.h>

int main() {
    FILE *fptr;
    char text[100];

    
    fptr = fopen("test.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter text to write to file: ");
    gets(text);

    fprintf(fptr, "%s", text);
    fclose(fptr);

    printf("Data successfully written to test.txt\n");
    return 0;
}