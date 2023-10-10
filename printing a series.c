#include<stdio.h>
int main()
{
    int i,n;
    float num;
    printf("enter the value of terms:");
    scanf("%d",&n);
     i=1;
    while(i<=n)
    {
       num=(float)(-(i*2-1))/(n-(i*2-1));
       printf("\nvalue of number %0.2f", num);
       i++;
    }
    return 0;
    
}
