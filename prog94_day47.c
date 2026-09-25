//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main()
{
    char str[100], word[100], longest[100];
    int i = 0, j, len = 0, max = 0;
    scanf("%[^\n]", str);
    while(str[i] != '\0')
    {
        if(str[i] != ' ')
        {
            word[len] = str[i];
            len++;
        }
        else
        {
            word[len] = '\0';
            if(len > max)
            {
                max = len;
                for(j = 0; j <= len; j++)
                    longest[j] = word[j];
            }
            len = 0;
        }
        i++;
    }
    word[len] = '\0';
    if(len > max)
    {
        for(j = 0; j <= len; j++)
            longest[j] = word[j];
    }
    printf("%s", longest);
    return 0;
}