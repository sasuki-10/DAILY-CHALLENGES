#include<stdio.h>
#define MAX_SIZE 3   // pre decided
int main()
{
  int a[MAX_SIZE],i,n;
  printf("enter the no. of terms:");
  scanf("%d",&n);
   if(n<100)
    {
        for(i=0;i<n;i++)
          {
              printf("a[%d]= ",i);
              scanf("%d",&a[i]);
            }
    }
    else
          {
           printf("out of array");
           }
     return 0;
}
