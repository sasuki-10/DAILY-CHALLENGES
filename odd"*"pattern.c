#include <stdio.h>
int main()
{
  int row;
  printf("ENTER THE ROW:");
  scanf("%d",&row);
   
  for(int i=1;i<=row;i=i+2)
   {
      for(int j=1;j<=i;j++)
      {
          printf(" *");
     } 
      printf("\n"); 
   } 
    return 0;
}
