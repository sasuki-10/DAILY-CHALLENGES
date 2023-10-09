#include <stdio.h>
#include<math.h>
int main()
{
    int num,n,k;                 
    printf("ENTER THE POWER:");    
    scanf("%d",&num);
    printf("ENTER THE NUMBER TO BE PRINTED :");    
    scanf("%d",&k);
    for( int i=1;i<=k;i++)
    {
        printf(" %0.1f",pow(i,num));
    }  
    return 0;
}
