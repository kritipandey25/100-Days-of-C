//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student *ptr;
    // Dynamically allocate memory
    ptr = (struct Student *)malloc(sizeof(struct Student));
    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }
    // Input details
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);
    printf("Enter name: ");
    scanf("%19s", ptr->name);
    printf("Enter marks: ");
    scanf("%f", &ptr->marks);
    // Display details
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
    // Free allocated memory
    free(ptr);

    return 0;
}