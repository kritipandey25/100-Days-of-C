//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main()
{
    char str[100];
    int i, lastSpace = -1;

    printf("Enter name: ");
    scanf("%[^\n]", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            lastSpace = i;
    }
    printf("%c.", str[0]);

    for(i = 1; i < lastSpace; i++)
    {
        if(str[i] == ' ')
            printf("%c.", str[i + 1]);
    }
    printf(" ");
    for(i = lastSpace + 1; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}