//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main()
{
int n ,rev=0,r;
printf("Enter a number\n");
scanf("%d",&n);
int temp=n;
while(n>0)
{
 r=n%10;
 rev=rev*10+r;
 n=n/10;
}
if(temp==rev){
printf("Palindrome");
}
else{
printf(" Not Palindrome");
}
}
