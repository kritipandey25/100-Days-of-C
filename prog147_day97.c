//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct Employee e;
    FILE *fp;
    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &e.id);
    printf("Enter Employee Name: ");
    scanf("%19s", e.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);
    // Write data into binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
    // Read data from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }
    fread(&e, sizeof(e), 1, fp);
    // Display employee details
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    fclose(fp);
    return 0;
}
