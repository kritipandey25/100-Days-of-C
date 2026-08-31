//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include<stdio.h>
int main()
{int n,temp,d,sum,fac;
printf("Enter number\n");
scanf("%d",&n);
sum = 0;
temp = n;
while(temp>0){
d = temp%10;
fac = 1;
for(int i = 1; i<=d;i++){
    fac *=i; }
sum = sum + fac;
temp = temp/10;
}
if(sum != n){
printf("It is not a strong number\n");
}
else{printf("It is  a strong number\n");}
return 0;
}