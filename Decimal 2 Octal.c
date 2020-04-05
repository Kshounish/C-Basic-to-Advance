/*decimal to octal*/
#include<stdio.h>
#include<math.h>

int main()
{
    int a,n,oct,sum=0;
    printf("\nEnter any Decimal number::");
    scanf("%d", &a);
    while(a>8)             //if remainder  less than 8 go out of the loop
    {
      n=a/8;          // Dividing the number and getting the divisor
      sum=sum+n*10;    //addition of the divisor
      a=a%8;          //seperation of the remainder
    }
    oct=sum+a;   //add the sum value with a 
    printf("\nThe Octal value is::%d",oct);
    return 0;
}