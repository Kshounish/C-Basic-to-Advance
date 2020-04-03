/* Harshad Number*/
#include <stdio.h>

int main()
{
    int a,n,sum=0,temp;
    printf("\nEnter a number::");
    scanf("%d",&a);
    temp=a;                    //storing a copy of a
    while(a!=0)               //Block to calculate the sum of the  digits of number
      {
          n=a%10;               //seperating the numbers
          sum=sum+n;           //addition of the digits
          a=a/10;             //seperation of the digit used
      }
      
    if(temp%sum==0)          // Condition checking
     printf("\n Number is Harshad Number");
    else
     printf("\n Not an Harshad number");
    return 0;
}
  
