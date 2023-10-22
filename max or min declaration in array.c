#include<stdio.h>
int main()
{
    int a[10],i,min,max;
    for(i=0;i<10;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]<min)     //10<20
        {
          min=a[i];  
        }
        if(a[i]>max)
        {
          max=a[i];  
        }
    }
    printf("min=%d\nmax=%d",min,max);
    return 0;
}
