

#include <stdio.h>

int main()
{
    int a,i,rem,sum=0,z,fact=1;
    printf("\nEnter a number::");
    scanf("%d",&a);
    z=a;                      //Before operation, save a copy in this variable
    while(a!=0)               //The Code block operates the palindrom 
     {
     rem=a%10;               //Sperates the 1st digit
     for(i=1;i<=rem;i++)     // Code block perfroms the factorial of seperated  digit
     {
         fact=fact*i;
     }
     sum=sum+fact;        //sum of the Factorial
     a=a/10;              //Seoerates the used digit    
     fact=1;              /// reinitialize fact to 1
     }
     
   if (sum==z)
    printf("\nThe number is an Strong number");
   else
    printf("\n Not a strong number");
  return 0;
}

