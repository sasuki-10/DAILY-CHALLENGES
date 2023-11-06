#include <stdio.h>
int main()
{
  int num,fact=1;
  printf("ENTER THE NUMBER:");
  scanf("%d",&num);
  for(int i=1;i<=num;i++)
    {
       fact=fact*i;
    } 
    printf("FACTORIAL OF THE NUMBER:%d",fact);
} 
    
