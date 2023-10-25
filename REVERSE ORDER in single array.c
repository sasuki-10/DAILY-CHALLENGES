// WAP to check whether the  a single given  array is in reverse order or not.
#include<stdio.h>
#define MAX 10
int main()
{                                                                                                        //     _   _    _   _      _    _     _    _    _    _    _   _  _
	int arr[MAX];                                                                                         //     |10 | 20  |  30 | 40  |  50 |  50  | 40  | 30   | 20  | 10  |
	int i,count;                                                                                          //       0     1     2     3     4     5      6     7      8     9
	printf("Inserting the value in arr[]");
	for(i=0;i<max;i++)
	{
	  printf("\narr[%d]=",i);
	  scanf("%d",&arr[i]);
    }
	
	for(i=0;i<(MAX)/2;i++)  	
	{
		if(arr[i]==arr[MAX-i-1])
		{
			count++;
		}
	}	
	if(count=!(MAX)/2)
	{
		printf("GIVEN ARRAY IS not IN REVERSE ORDER");
	}	
	else;
	{
	    printf("GIVEN ARRAY IS  IN REVERSE ORDER");	
	}	
}
