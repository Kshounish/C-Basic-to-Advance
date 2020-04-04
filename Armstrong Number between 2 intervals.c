/* Armstrong number between 2 intervals */
#include <stdio.h>
#include <math.h>
int main()
{
    int  a,b,x,temp,rem,sum=0;
    printf ("\nEnter the 1st number::");
    scanf("%d",&a);
    printf("\nEnter the 2nd number::");
    scanf("%d",&b);
    for(x=a+1;x<=b-1;x++)   //Block starts for taking each number and checking  from a+1 and b-1
    {   
        temp=x;            //Putting the 1st value to temp and keeping the value of x intact, if x is changed the program  error occurs
        while(temp!=0)     // temp is used to do changes and goes to while as if x is used error will occur
        {   
            rem=temp%10;      
            sum=sum+pow(rem,3);   // the cube and sum calculation is done
            temp=temp/10;
        }
        if(x==sum)              // if the value of x =sum , Armstrong number is printed and sum is reinitialized to 0
        {
         printf("\t%d",sum);
         sum=0;
        }
         else                  //else sum is anyway reinitialized to zero
         sum=0;
    }
    return 0;
}

