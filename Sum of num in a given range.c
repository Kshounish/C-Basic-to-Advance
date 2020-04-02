/* Sum of numbers in a given range*/
#include <stdio.h>

int main()
{
   int s,e,i,sum=0;
   printf("\nEnter the Starting numbers::");
   scanf("%d",&s);
   printf("\nEnter the Ending numbers::");
   scanf("%d",&e);
 
   for(i=s;i<=e;i++)
   {
       sum=sum+i;
   }
   printf("\n The numbers are::%d",sum);
    return 0;
}

