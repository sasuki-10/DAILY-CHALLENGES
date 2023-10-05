#include <stdio.h>
#include<math.h>
int main()
{
    int num,n,sum;                 
    printf("ENTER THE NUMBER:");    
    scanf("%d",&num);
    for( int i=0;i<=num;i=i+2)
    {   
        sum=sum+i;
        printf(" %d",i);
    }
       printf(" \nsum of number: %d",sum);
    return 0;
}
