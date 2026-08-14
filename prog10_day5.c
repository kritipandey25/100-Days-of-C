//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main()
{
    int sec, hr, min, s;

    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    hr = sec / 3600;
    sec = sec % 3600;

    min = sec / 60;
    s = sec % 60;

    printf("%d : %d : %d ", hr,min,sec);


    return 0;
}