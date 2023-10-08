#include<stdio.h>
int main()
{
    int i,n;
    printf("ENTER THE NUMBER OF TERMS: ");
    scanf("%d",&n);
    for(i=0;i<=n;)
    {
        printf(" %d",n);
        n--;
    }
    return 0;
}
