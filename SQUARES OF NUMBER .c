#include <stdio.h>
#include<math.h>
int main()
{
    int num,n;                 
    printf("ENTER THE NUMBER:");    
    scanf("%d",&num);
    for( int i=1;i<=num;i++)
    {
        printf(" %0.1f",pow(i,i));
    }
    return 0;
}
