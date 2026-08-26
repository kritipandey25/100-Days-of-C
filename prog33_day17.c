//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main()
{
 int n,r,sum=0;
 printf("Enter a number");
 scanf("%d",&n);
 int temp=n;
 while(temp>0)
 {
  r=temp%10;
  sum=sum+(r*r*r);
  temp=temp/10;
 }
 if(sum==n)
 {
 printf("Armstrong");
 }
 else
 {
  printf("Not Armstrong");
 }
 return 0;
}