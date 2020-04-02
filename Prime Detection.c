/*fibonacci Series*/

#include <stdio.h>

int main()
{
    int a,i;
    printf("\nEnter a number::");
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)                  //since to check the number we will start the division from 2 to the number prior to "a"
       if(a%i==0)                        
       break;                           // Break condition if the loop is satisfied i.e, remainder is 0 or loop is satisfied
    if(i==a)                            // condition: if for loop satisfies then a and i will be equal i.e,the num at max will be div by itself
     printf("\nThe number is prime");
    else
     printf("\nThe number is composite");
    return 0;
}
