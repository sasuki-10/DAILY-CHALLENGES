#include<stdio.h>
struct student
{
  char rn[50];
	char name[50];
	int marks[5];
	float per;
}s1;

int main()
{
	int i;
	struct student;
	printf("Enter your roll number: ");
	gets(s1.rn);
	printf("Enter your name:");
	gets(s1.name);	
}
