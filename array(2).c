#include<stdio.h>
int main()
{
  int a[100],i,n;
  printf("enter the no. of terms:");
  scanf("%d",&n);
      for(i=0;i<=n;i++)
      {
           if(n<100)
          {
            printf("%p\n",&a[i]);
          }
      else
          {
           printf("out of array");
           }
    }
     return 0;
}
