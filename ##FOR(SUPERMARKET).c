#include <stdio.h>
int main()
{                                                                                //concept says that: in supermarket the cashier does not know the total items in your bucket...
  int n=0,sum=0;                                                                //at the end when there is no item left cashier will enter -1....
  
  for( ;n>=0;) 
    {
       sum=sum+n;
      printf("ENTER THE PRICE:");
      scanf("%d",&n);   
    } 
     printf("total of the prices: %d",sum);
} 
    
