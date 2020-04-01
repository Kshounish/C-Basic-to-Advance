/* Program to check if a character is Uppercase/lowercase/Special Character*/
#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    printf("\nEnter a character::");
    ch=getchar();
    if (isupper(ch))
    printf("\n It is an Uppercase letter");
    else if(islower(ch))
    printf("\n It is a lowercase letter");
    else
    printf("\n It is a special character");
getch();
}