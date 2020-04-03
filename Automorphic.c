/* Automorphic */
#include <stdio.h>

int main()
{
    int a,pro,t;
    printf("\nEnter a number::");
    scanf("%d",&a);
    pro=a*a;         //Finding the square 
    t=pro%10;        //finding the unit place digit 
    if(t==a)       // Condition checking
     printf("\n Number is Automorphic");
    else
     printf("\n Not an Automorphic number");
    return 0;
}
  
