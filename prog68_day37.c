//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int n, pos, i;
    int a[100];
  printf("Enter size of an array \n");
    scanf("%d", &n);
 printf("enter elements in array \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
printf("Enter element to be deleted");
    scanf("%d", &pos);

    // Shift elements to the left
    for(i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;

    // Print array
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}