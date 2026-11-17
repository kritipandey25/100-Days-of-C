//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
enum Traffic {
RED,YELLOW,GREEN
};
int main() {
enum Traffic light = GREEN;
switch(light) {
case RED:
printf("Stop");
break;
case YELLOW:
printf("Wait");
break;
case GREEN:
printf("Go");
break;
}
return 0;
}