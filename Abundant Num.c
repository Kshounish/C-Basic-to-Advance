/* Abundant Number*/
#include <stdio.h>

int main()
{
    int a,i,sum=0,temp;
    printf("\nEnter a number::");
    scanf("%d",&a);
    temp=a;                    //storing a copy of "a"
   for(i=1;i<a;i++)               //Block to calculate the sum of the  digits of number
      {
        if(a%i==0)               //check factors
        sum=sum+i;               //sum of factors
      }
      
    if(temp<sum)          // Condition checking
     printf("\n Number is Abundant Number");
    else
     printf("\n Not an abundant number");
    return 0;
}
  
