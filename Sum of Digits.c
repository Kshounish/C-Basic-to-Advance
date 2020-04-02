/* Sum of digits of a number*/

#include<stdio.h>

int main () 
  {
   int a,r,sum=0;
   printf ("Enter the number::");
   scanf ("%d", &a);
    while (a!= 0)       	//when the number "a"becomes zero it jumps out of the loop 
     {
         if (r=a%10);    //Modulo division to find the remainder i.e, the seperate the digits one by one
         sum=sum+r;	    //Add the value of r with sum and store in sum
         a=a/10;       //When 1 digit is completed, seperate it from the rest by doing division
     }
   printf ("The sum of digits are::%d", sum);
   return 0;
  }
