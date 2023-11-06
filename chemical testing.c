#include<stdio.h>
int main()
{
  printf("\n(hEm_L@b");
  printf("\nWELCOME TO CHEM LAB TESTING");
  float pH,chemical;

   printf("\nENTER THE VALUE OF CHEMICAL: ");
   scanf("%f",&pH);
  if(pH>7.0)
  {
    printf("CHEMICAL IS BASIC ☺");
  }
    
   else if(pH<7.0)
   {
         printf("CHEMICAL IS Acidic ☺");
   }     
    else
   {
     printf("CHEMICAL IS Neutral ☺");
   }
    printf("\nEnter the name of chemical: ");
    scanf("%d",&chemical);
}
