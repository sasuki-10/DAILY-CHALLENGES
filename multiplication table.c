#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE VALUE:");
    scanf("%d",&n);
    for(int i=0;i<=10;i++)
   {
       printf("%d * %d = %d \n", n, i, n * i);
   } 
    return 0;
}
