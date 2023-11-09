#include<stdio.h>
int main()
{
	char s[100],i=0;
	printf("ENTER THE STRING:");
	gets(s); 
	
        for(i=0;s[i]!=NULL;++i);
	printf("Total length of string:%d",i);
	// also includes if there is any gap between entered sentence.
	return 0;
}
