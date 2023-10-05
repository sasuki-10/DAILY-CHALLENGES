//to print first 10 natural number and sum of all
#include <stdio.h>
int main()
{
    int sum=0;
    
    printf("FIRST 10 NATURAL NUMBER:  ");
    for(int i=1;i<=10;i++)
    {
        sum=sum+i;
        printf(" %d",i);
    }
      printf("\n%d",sum);
      
    return 0;
}
