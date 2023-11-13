#include<stdio.h>
// function that calculates area
void area(int a,int b)
{
  int s;
  s=(a*b)/2;
  printf("Area of triangle:%d",s);
  
}
//function that calculates perimeter
void perimeter(int a,int b)
{
	int sides;
	int p;
	printf("\nEnter no. of sides which are equal....:");
	scanf("%d",&sides);
	if(sides==3)
	{
		p=3*a;
		printf("\nTRIANGLE IS EQUILATERAL...");
		printf("\nperimeter is:%d",p);
	}
	else if(sides==2)
	{
		p=2*a+b;
	    printf("\nTRIANGLE IS ISOSCALES...");
	    printf("\nperimeter is:%d",p);	
	}
}
//main function..
int main()
{
	int a,b;
	printf("enter the value of Base:");
	scanf("%d",&a);
	printf("\nenter the value of height:");
	scanf("%d",&b);
	area(a,b);
	perimeter(a,b);
}
