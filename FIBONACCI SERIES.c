#include<stdio.h>
int main()
{
int n1 = 0;
int n2 = 1;
int n3 = 0;
int i = 0;
int number = 0;
    printf("Enter the number of fibonacci to be printed");
    scanf("%d",&number);
    printf("\n %d\n %d\n",n1,n2);
for(i = 2; i < number; ++i)
{
    n3 = n1+n2;
    printf(" %d \n",n3);
    n1 = n2;
    n2 = n3;
}
return 0;
}
