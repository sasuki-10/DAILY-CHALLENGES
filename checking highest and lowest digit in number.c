#include<stdio.h>
int main()
{
  int n,temp,i;
  printf("Enter the value: ");
  scanf(" %d",&n);
  int high=0,low=9;
  temp=n;
      while(temp)
     { 
         i=temp%10;
         temp/=10;
     
      if(i<low)
      {
          low=i;
      }
      if(i>high)
      {
          high=i;
      }
     }
     printf("THE HIGHEST VALUE %d AND LOWEST VALUE %d OF NUMBER %d",high,low,n);
      
} 
