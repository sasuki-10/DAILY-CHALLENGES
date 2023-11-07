#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50}; //to find *p & p....

	int i;   
    int *p=&a[0];
	for( i=0;i<5;i++)
    {
    	printf(" %p",(p+i));
	}	
}
