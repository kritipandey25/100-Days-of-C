//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int symmetric = 1;
 printf("Enter size of matrix\n");
    scanf("%d %d", &r, &c);
printf("Enter elements in array\n");
    // Read matrix
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Symmetric matrix must be square
    if(r != c) {
        symmetric = 0;
    } else {
        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                if(a[i][j] != a[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
            if(symmetric == 0)
                break;
        }
    }

    if(symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}