#include<stdio.h>
int main()
{
	char f[50],s[50];
	int i=0,temp,c;
	printf("Enter the string:");
	gets(f[i]);
	while(f[i]!=NULL);
          i++;
	for(c=0;c<=i;c++)
	{
		temp=f[c];
		if(temp>=97&&temp<=122)
		{
			s[c]=temp-32;
		}
		else
		{
			s[c]=f[c];
		}
	}
	printf("STRING{UPPER CASE}=%s",s);
}
