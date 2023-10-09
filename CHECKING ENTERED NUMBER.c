#include <stdio.h>
int main()
{
   int num;
   printf("enter the number:");
   scanf("%d",&num);
   if(num>0)
   {
       printf("number is positive",num);
   }
   else if(num<0)
   {
       printf("number is negative",num);
   }
    else
    {
      printf("number is zero",num);
    }
    return 0;
}


