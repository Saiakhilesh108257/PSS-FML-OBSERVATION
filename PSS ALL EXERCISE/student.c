#include <stdio.h>
union Result {
    int marks;
   
};
struct Student {
    int id;
    char name[50];
    union Result res;

};

int main() {
    struct Student s;

    printf("Enter Student ID: ");
    scanf("%d", &s.id);
    printf("Enter Student Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%d", &s.res.marks);

    printf("\n--- Student Information ---\n");
    printf("Student Name: %s\n", s.name);
    printf("Student ID: %d\n", s.id);
    printf(" Marks:%d ",s.res.marks);

     if (s.res.marks >=90)
        printf("Grade : S");
    else if (s.res.marks >=80)
        printf("Grade : A");
    else if (s.res.marks >=70)
        printf("Grade : B");
    else if (s.res.marks >=60)
        printf("Grade : C");        
    else if (s.res.marks >=50)
        printf("Grade : D");
    else 
        printf("Grade : F(Fail)");    
    return 0;
}