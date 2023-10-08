#include <stdio.h>
int main()
{
   int x, y; 
   int product = 0; 
   printf("Enter the value of x:");
   scanf("%d", &x);
   printf("Enter the value of y:");
   scanf("%d", &y);
   while(y != 0)
   {
      product=product+x;
      y--;
   }
   printf("Product = %d", product);
   
   return 0;
}
