//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>
enum Role {
    ADMIN,
    USER,
    GUEST
};
int main() {
    char choice[20];
    enum Role r;
    scanf("%s", choice);
    if (strcmp(choice,"ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(choice,"USER") == 0)
        r =USER;
    else
        r =GUEST;
    switch(r) {
        case ADMIN:
            printf("Welcome Admin!");
            break;
        case USER:
            printf("Welcome User!");
            break;
        case GUEST:
            printf("Welcome Guest!");
            break;
    }
    return 0;
}