#include<stdio.h>
// function which calculates area
void area(int a)
{
  int s;
  s=a*a;
  printf("Area of square:%d",s);
}
//function which calculates perimeter.
void perimeter(int a)
{ 
           int p;  
	   p=4*a;
	   printf("\nperimeter of square is:%d",p);		
}
//main function..
int main()
{
	int a;
	printf("enter the value of side:");
	scanf("%d",&a);
	area(a);
	perimeter(a);
}
