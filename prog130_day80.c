//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
int main() {
    FILE *fp;
    char name[50];
    int roll, marks, n;
    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%49s", name);
        printf("Enter roll number: ");
        scanf("%d", &roll);
        printf("Enter marks: ");
        scanf("%d", &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }
    printf("\n------- STUDENT RECORDS -------\n");
    while (fscanf(fp, "%49s %d %d", name, &roll, &marks) == 3) {

        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }
    fclose(fp);
    return 0;
}