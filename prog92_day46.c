//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
int main()
{
 char str[100];
 printf("Enter a word : ");
 scanf("%s",str);
 for(int i=0;str[i]!='\0';i++)
 {
 for(int j=i+1;str[j]!='\0';j++)
 {
  if(str[i]==str[j])
  {
  printf("%c",str[i]);
  return 0;
  }
 }
 }
 printf("no repeating character");
 return 0;
 
}
