#include<stdio.h>
int main()
{
    int n1,n2,max;
    printf("enter the value of n1:");
    scanf("%d",&n1);
    printf("enter the value of n2:");
    scanf("%d",&n2);
    if(n1>n2)
    {
        max=n1;
    }
    else
    {
        max=n2;
    }
    while(1)
    {
        if((max%n1==0)&&(max%n2==0))
        {
            printf("THE LCM OF %d and %d is:%d",n1,n2,max);
            break;
            
        }
        ++max;
    }
}
