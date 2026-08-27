//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include<stdio.h>

int main(){
int a,b,temp,res;
printf("Enter the numbers to find HCF\n");
scanf("%d %d",&a,&b);
 if(b<a){
  temp = a;
  a = b;
  b = temp;}

while(b%a>0){
  res = b%a;
  b = a;
  a = res;
 }
 printf("HCF is %d",res);
 return 0;
 }
