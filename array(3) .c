#include<stdio.h>
int main()
{
  int a[100],i,n,sum=0;
  printf("enter the no. of terms:");
  scanf("%d",&n);
      for(i=0;i<=n;i++)
      {
           if(n<100)
          {
            printf("a[%d]= ",i);
            scanf("%d",&a[i]);
            sum=sum+i;
          }
      else
          {
           printf("out of array");
           }
    }
    printf("sum is: ",sum);
     return 0;
}
