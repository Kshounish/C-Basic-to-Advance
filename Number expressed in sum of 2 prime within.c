/* can a number be expressed as sum of 2 prime */
#include <stdio.h>
#include <math.h>
int primecheck(int a);
int primecheck(int a)        //This func check if a number is prime or not
{
    int i,isprime=1;            
    for(i = 2; i <= a/2; ++i)
    {
        if(a % i == 0)
        {
            isprime = 0;             //isprime flag changes to 1 if number is composite and then breaks out
            break;
        }
    }
    return isprime;                 // If isprime flag is intact, the func returns prime value
    
}

int main()
{
    int a,flag=0,i;
    printf ("\nEnter any number::");
    scanf("%d",&a);
    for (i=2;i<=a-1;i++)                      //i and a-i
      {
          if(primecheck(i)==1)       //This statement signifies that the function returned a Prime value from l  end
          {
              if(primecheck(a-i)==1)  //This statement signifies that the function returned a Prime value from U  end
              {
                  printf("The 2 numbers are: %d and %d\n",i, a-i);
                  flag=1;                 //Flag is  changed
              }
          }  
           
      }
    if (flag==0)                 //If flag value remain same its not possible
    printf("Not possible in this case");
    
    return 0;
}
// The Pattern built is if we take 10 as a number. we will start checking by 2 and 10-2. And if 10-2 is prime, its written

