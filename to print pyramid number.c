#include <stdio.h>
int main()
{
  int n,i,j;
  printf("ENTER THE NUMBER:");
  scanf("%d",&n);   
  for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=i;j++)
      {
          printf(" %d ",j);
     } 
      printf("\n"); 
   } 
    return 0;
}
