#include<stdio.h>
#define MAX_SIZE 3
int main()
{
int a[MAX_SIZE],i;
   for(i=0;i<3;i++)
   {
     printf("a[%d]: %d",i);
     scanf("%d",&a[i]);
    }
return 0;
}

