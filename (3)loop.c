//sum of odd value 
#include <stdio.h>
int main()
{
    int sum=0;
    int n;
    printf("ENTER THE VALUE:");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
        sum=sum+i;
        printf(" %d",i);
    }
      printf("\n sum of terms: %d",sum);
      
    return 0;
}
