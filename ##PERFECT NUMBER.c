#include <stdio.h>
int main()
{
    int num,sum=0;                 //perfect number:For example(MULTIPLE OF 6: 1;2;3;6) ignoring its own value then it will be equal to its own number.
    printf("ENTER THE NUMBER:");     //the sum of 1+3+2=6;
    scanf("%d",&num);
    for( int i=1;i<num;i++)
    {
      if(num%i==0)
        {
         sum=sum+i;  
        }
    }
    if(num==sum)
    {
        printf("GIVEN NUMBER IS PERFECT");
    }
    else
    {
       printf("GIVEN NUMBER IS NOT PERFECT"); 
    }
    return 0;
}
