##include <stdio.h>
#include<math.h>
int main()
{
    int num=2,k;                 
    printf("THE POWER(2)");    
    printf("\nENTER THE NUMBER SERIES TO BE PRINTED :");    
    scanf("%d",&k);
    for( int i=1;i<=k;i++)
    {
        printf(" %0.1f ",pow(i,num));
    }
    return 0;
}
