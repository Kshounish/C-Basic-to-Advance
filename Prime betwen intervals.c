/* Prime Numbers between 2 intervals*/

#include <stdio.h>


int main()
{
   int a,b,x,i; 
   printf("\nEnter the 2 numbers:");
   scanf("%d%d",&a,&b);
   for(x=a+1;x<b;x++)          //Outer "for loop" for the 2 interval numbers
   {
       for(i=2;i<x;i++)       //where the 1st number is taken from outer "for" and checked
       {
           if(x%i==0)        // if its divisble then its composite and break occurs 
           break;
       }
       if(i==x)            // If the loop completes without break then the condition goes until x becomes equal to the outer selected number
       printf("\t%d",x);   //Means that number is prime and printed
   }
   return 0;
}