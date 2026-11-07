//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
int main() {
    FILE *fp;
    char text[200];
    // Open file in append mode
    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Unable to open file.");
        return 1;
    }
    // Take input from user
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    // Append text at the end
    fprintf(fp, "%s", text);
    fclose(fp);
    printf("File updated successfully with appended text.");
    return 0;
}