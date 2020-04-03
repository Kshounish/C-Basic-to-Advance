/* Friendly pair */
#include <stdio.h>

int main()
{
   
  int a,b,i,j,sum1=0,sum2=0,temp1,temp2;
  printf("\nEnter the 2 numbers::");
  scanf("%d%d",&a,&b);
  temp1=a;
  temp2=b;
 
    for (i=1;i<a;i++)     // Block for addition of factors of "a"
     {
      if(a%i==0)          //Checkcing the  factors and addition in of factors in Sum1
      sum1=sum1+i;
     }
  
  
  
    for (j=1;j<b;j++)      // Block for addition of factors of "b"
     {
      if(b%j==0)            //Checkcing the  factors and addition in of factors in Sum2
      sum2=sum2+j;
     }
  
  if(temp1==sum2 && temp2==sum1)         //Condition checking block for Friendly pair 
   printf("\nThey are friendly Pair");
  else
   printf("\nNot friendly pair");
   return 0;
}
  
