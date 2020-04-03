/* Find factor of a number*/
#include <stdio.h>

int main()
{
    int a,count=0,i;
    printf("\nEnter a number::");
    scanf("%d",&a); 
    for(i=1;i<=a;i++)                  //Code Block to find the factors
    {
        if(a%i==0)                    //Checking factors
        {
            count=i;                // putting found factors in the variable
            printf("\t%d",count);   //Printing the factors
        }
    }
    i=1;                           //Reinitialization of variables i and count
    count=0;
  return 0;
}
