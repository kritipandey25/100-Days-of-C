//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
 #include <stdio.h>
 int main ()
 {
 int n,i;
 printf("Enter size of an array \n");
 scanf("%d",&n);
 int arr[n];
 printf("Enter elements of an array \n");
 for(int i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 for( int i=0; i<n;i++)
 {
  if(arr[i]%2==0)
  printf("Even = %d \t",arr[i]);
  else 
  printf("Odd =%d \t",arr[i]);
  }
  return 0;
 }
 