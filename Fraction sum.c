/* Find sum of fractions*/

#include <stdio.h>
int main()
{
    int a, b,c,d,x,y,i,gcd=1;
    printf("\nEnter the numerator for 1st number ::");
    scanf("%d",&a);
    printf("\nEnter the denominator for 1st number::");
    scanf("%d",&b);
    printf("\nEnter the numerator for 2nd number ::");
    scanf("%d",&c);
    printf("\nEnter the denominator for 2nd number ::");
    scanf("%d",&d);
    x=(a*d)+(b*c); //numerator
    y=b*d; //denominator
    /* Reduce it to the simplest form by using gcd.*/
    for(i=1; i <= x && i <= y; ++i)
    {
        if(x%i==0 && y%i==0)
            gcd = i;
    }
    printf("\nThe added fraction is %d/%d",x/gcd,y/gcd); //If GCD is present then they are divided by gcd to reduce
    return 0;
}