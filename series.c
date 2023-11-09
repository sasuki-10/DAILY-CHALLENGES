#include<stdio.h>
int main()
{
    int n;
    int sum=0,i;
    printf("Enter the range of number:");
    scanf("%d",&n);
    int p;             //for example if p=1,1+11+111+1111......
    printf("Enter the value of number:");
    scanf("%d",&p);
   for(i=1;i<=n;i++)
    {
            sum+=p;
            p=(p*10)+9;
    }
    printf("The sum of the series = %d",sum);
}
