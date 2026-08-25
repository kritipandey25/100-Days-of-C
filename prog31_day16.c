//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main ()
{
 int r,p=1, n,bin=0;
 printf ("Enter a number \n");
 scanf ("%d",&n );
 while(n>0)
 {
	 r=n%2;
	 bin=bin+r*p;
	 p=p*10;
     n=n/2;
 }
 printf("Binary equilivalent of a number is %d",bin);
 return 0;
}