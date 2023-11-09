#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE VALUE:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=5;j>=n;j--)
        {
            printf("%d",j);   
        } 
        printf("\n");
    }
    
}
