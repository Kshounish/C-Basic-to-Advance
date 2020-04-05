/*binary to octal*/

/* Since Direct Conversion is not Possible, so we 1st convert binary to decimal then Decimal to Octal */

#include<stdio.h>
#include<math.h>
int b2o(int);

int b2o(int a)                   // binary to octal function
{
    int n,dec=0,i=0,sum=0,oct=0,k,m;        
    while(a!=0)                    //codeblock to convert binary to decimal
    {
        n=a%10;
        dec=dec+n*pow(2,i);         // Binary converted to decimal and stored in dec
        a=a/10;
        i++;
    }
    
    m=dec;                      //value of dec stored in m 
    while (m>8)                //codeblock to convert decimal to octal using m
    {
        k=m/8;                
        sum=sum+k*10;            // the value are stored until m>8
        m=m%8;
    }
    oct=sum+m;                 //when while loop stops the number comes out and gets added wi
    return oct;               // returns the value obtained to main function call
}
int main()
{
    int a,n,i=0,sum=0;
    printf("\nEnter any binary number::");
    scanf("%d", &a);
    b2o(a);                                  // passing valuue to function 
    printf("\nThe octal value is::%d",b2o(a));  // returned value is printed as output
    return 0;
}