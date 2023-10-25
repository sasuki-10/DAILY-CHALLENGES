// WAP to check whether the given array is in reverse order or not.
#include<stdio.h>
int main()
{
	int arr1[5];
	int arr2[5];
	int i,count;
	printf("Inserting the value in arr1[]");
	for(i=0;i<5;i++)
	{
	  printf("\narr1[%d]=",i);
	  scanf("%d",&arr1[i]);
    }
	printf("\nInserting the value in arr2[]");
	for(i=0;i<5;i++)
	{
	  printf("\narr2[%d]=",i);
	  scanf("%d",&arr2[i]);
    }	
	for(i=0;i<5;i++)  	
	{
		if(arr2[i]==arr1[10-i-1])
		{
			count++;
		}
	}	
	if(count==5)
	{
		printf("GIVEN ARRAY IS IN REVERSE ORDER");
	}	
	else
	{
	    printf("GIVEN ARRAY IS NOT IN REVERSE ORDER");	
		}	
}


