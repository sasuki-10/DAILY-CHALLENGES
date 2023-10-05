//FOR n NATURAL NUMBER
#include <stdio.h>
int main()
{
    int sum=0;
    int n;
    printf("ENTER THE TERMS UPTO WHICH YOU HAVE TO KNOW:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
        printf(" %d",i);
    }
      printf("\n sum of terms: %d",sum);
      
    return 0;
}
