//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
int main()
{
    int n,k,i;
	printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
	printf("Enter the elememts of an arrray:");
    for(i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
	printf("Enter an integer:");
    scanf("%d", &k);
    if(k<=0||k>n)
    {
        printf("-1");
        return 0;
    }
	printf("Greatest sum:");
    int sum=0;
    for(i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    int maxSum=sum;
    for(i=k;i<n;i++)
    {
        sum=sum+arr[i]-arr[i-k];
        if(sum>maxSum)
        {
            maxSum=sum;
        }
    }
    printf("%d",maxSum);
    return 0;
}
