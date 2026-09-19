//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

int main() {
    char str[100];
   printf("Enter a word\n");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        printf(" Word in next line : \n %c\n", str[i]);
    }
    return 0;
}