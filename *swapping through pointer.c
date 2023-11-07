#include<stdio.h>
void swap(int *a,int *b)
{
  int temp;
  temp =*a;
  *a= *b;
  *b= temp;
}
int main()
{
	int x=5,y=10;
	printf("before swap %d and %d",x,y);
	printf("\nafter swapping",x,y);
	swap(&x,&y);
	printf("\nx=%d \n y=%d",x,y);
	return 0;
}
