//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

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
  if(arr[i]<0)
  printf("Negative = %d \t",arr[i]);
  else if(arr[i]>0)
  printf("Positive =%d \t",arr[i]);
  else
  printf("Zero= %d \t",arr[i]);
  }
  return 0;
}