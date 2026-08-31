//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 2.58

Input 2:
5
Output 2:
Approximate sum: 4.35

*/
#include <stdio.h>

int main()
{
    int n, i;
    float sum = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
    {
      sum = sum + (float)(2*i - 1)/(2*i);
    }
    printf("Sum = %.2f", sum);
    return 0;
}