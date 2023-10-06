#include <stdio.h>
int main()
{
  int num,sum=0;
  printf("ENTER THE NUMBER:");
  scanf("%d",&num);
   
  for(int i=0;i<=num;i=i+2)
    {
      sum=sum+i;
      printf("\nEVEN NUMBER: %d",i);
    } 
    printf("\nSUM OF THE EVEN NUMBER:%d",sum);
} 
    
