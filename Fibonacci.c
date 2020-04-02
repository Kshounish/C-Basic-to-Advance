/*fibonacci Series*/

#include <stdio.h>

int main()
{
    int a=-1,b=1,c,n,i;
    printf("\nEnter the number upto which the series should continue::");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;                         //the inital value of C is printed 
        printf("%d",c);                
        a=b;                           /*Shifting the values of a with that of b and of b with that of C
                                         and adding it hence changing the value of c and printing and repeat again*/ 
        b=c;
    }
    return 0;
}
