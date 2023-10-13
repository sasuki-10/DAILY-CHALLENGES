#include<stdio.h>
int main()
{

int j;
for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            printf("%d%d ",i,j);
           
        }
        i=i+j;
        printf("\n",i);
    }
}   
