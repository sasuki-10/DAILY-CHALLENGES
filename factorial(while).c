#include <stdio.h>
int main()
{
  int num,fact=1 ;
  printf("ENTER THE NUMBER:");
  scanf("%d",&num);
  int  i=1;
   while(i<=num) 
    {
        fact=fact*i;
        i++;
    } 
    printf("\nFACTORIAL OF THE NUMBER:%d",fact);
} 
    
