//Q54: Write a program to print the following pattern:

/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
/*
Sample Test Cases:
Input 1:
Output 1:
Pattern with layers of stars as shown.
*/
#include <stdio.h>

int main()
{
    int i, j, spaces, stars;
    for(i = 1; i <= 4; i++)
    {
        for(spaces = 1; spaces <= 4-i; spaces++)
            printf(" ");

        for(stars = 1; stars <= 2*i-1; stars++)
            printf("*");

        printf("\n");
    }
    for(i = 3; i >= 1; i--)
    {
        for(spaces = 1; spaces <= 4-i; spaces++)
            printf(" ");

        for(stars = 1; stars <= 2*i-1; stars++)
            printf("*");

        printf("\n");
    }

    return 0;
}