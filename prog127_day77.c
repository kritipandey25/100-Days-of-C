//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>
int main ()
{
FILE *fp,*out;
char filename[100];
char ch;
printf("Enter the file name :");
scanf("%s",filename);\
fp =fopen("input.txt","r");
out =fopen("output.txt","w");
if(fp == NULL || out == NULL)
{
printf("Error in opening file");
return 1;
}
while((ch=fgetc(fp))!= EOF)
{ 
ch = toupper(ch);
fputc(ch,out);
}
fclose(fp);
fclose(out);
printf("File converted successfully !");
return 0;
}