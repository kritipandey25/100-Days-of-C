//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student s;
    struct Student *ptr;

    ptr = &s;

    // Modifying data using -> operator
    ptr->roll = 101;
    ptr->marks = 95.5;

    printf("Enter student name: ");
    scanf("%19s", ptr->name);

    // Displaying data using -> operator
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}