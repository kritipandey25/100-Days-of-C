//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>
struct Student
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    struct Student s1, s2;
    // Input first student
    printf("Enter details of first student:\n");
    scanf("%d", &s1.roll);
    scanf("%19s", s1.name);
    scanf("%f", &s1.marks);
    // Input second student
    printf("\nEnter details of second student:\n");
    scanf("%d", &s2.roll);
    scanf("%19s", s2.name);
    scanf("%f", &s2.marks);
    // Compare structures
    if (s1.roll == s2.roll &&
        strcmp(s1.name, s2.name) == 0 &&
        s1.marks == s2.marks)
    {
        printf("\nStructures are identical.");
    }
    else
    {
        printf("\nStructures are not identical.");
    }
    return 0;
}