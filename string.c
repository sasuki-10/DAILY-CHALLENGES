#include<stdio.h>
int main()
{
 char a[5][100],i;
 printf("********ENTER NAMES********");
 for(i=0;i<5;i++)
 {
  gets(a[i]);	
 }
 printf("the names are:");
 for(i=0;i<5;i++)
 {
 	puts(a[i]);
 }
 return 0;
}
