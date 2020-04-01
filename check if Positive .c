/* Program to check if a number is positive or not*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("\nEnter the number::");
    scanf("%d",&num);
    if (num>0)
     printf("\n It is a Positive Number");
    else if (num==0)
     printf("\n It is a neither positive nor negative");
    else 
     printf("\n It is a Negative Number");
return 0;
}