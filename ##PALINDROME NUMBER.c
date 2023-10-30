#include<stdio.h>
int main()
{
int n,r,sum=0;
int temp;
  printf("Enter number to check palindrome or not\n");
  scanf("%d",&n);
  temp = n;
   while(n>0)
  {
   r = n%10;
   sum = (sum*10)+r;
   n = n/10;
  }
if(temp == sum)
     {
         printf("Number is palindrome \n");
         
     }
else 
   {
    printf("Number is NOT palindrome\n");
       
   }
return 0;
}
