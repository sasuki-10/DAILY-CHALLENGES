#include<stdio.h>
//function that calculates area
void area(int a,int b)
{
  int s;
  s=a*b;
  printf("\nArea of Rectangle:%d",s);
}
//function that calculates perimeter...
void perimeter(int a,int b)
{
	int p;
	p=2*(a+b);
	printf("\nPerimeter of Rectangle:%d",p);
}
//main function....
int main()
{
	int a,b;
	printf("Enter the value of Base:");
	scanf("%d",&a);
	printf("\nEnter the value of height:");
	scanf("%d",&b);
	area(a,b);
	perimeter(a,b);
}
