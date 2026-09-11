//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main() {
    int n, i, element;
	printf("Enter size : \n");
    scanf("%d", &n);
    int a[n + 1];
	printf(" enter elements :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
	printf("Enter a number to insert \n");
    scanf("%d", &element);
    i = n - 1;
    // Shift elements greater than element to the right
    while (i >= 0 && a[i] > element) {
        a[i + 1] = a[i];
        i--;
    }
    // Insert element
    a[i + 1] = element;

    // Print array
    for (i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}