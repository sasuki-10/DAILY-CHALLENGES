#include<stdio.h>
float area(float r)
{
	
	float a;
	a=3.14*r*r;	
	return a;
}

float circ(float r)
{
	float c;
	c=2*3.14*r;
	return c;
}

int main()
{
	float n;
	printf("Enter the radius of circle:");
	scanf("%f",&n);
	float p=area(n);
	printf("\nArea of Circle:%f",p);

        float q=circ(n);
        printf("\nCircumference of Circle:%f", q);
    
}
