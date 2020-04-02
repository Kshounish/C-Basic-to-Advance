#include <stdio.h>

int main()
{
   
    int a,fct,sum=0,i,temp;
    printf("\nEnter two numbers :");
    scanf("%d",&a);
    temp=a;                    //storing the copy of value at temp
    for(i=1;i<a;i++)           //Code block to check factorial of number
     {
         if(a%i==0)           // Checking if a number is factorial and if ues then fct is updated below
         {
         fct=i;
          }
    sum=sum+fct;             // addition of the factors 
    fct=0;                  //reinitializing fct to 0 
     }
    if(temp==a)   
     printf("\nIt is a Perfect Number");
    else
     printf("\nNot a Perfect Number");
    return 0;
}

