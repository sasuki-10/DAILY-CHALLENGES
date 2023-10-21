#include<stdio.h>
int main()
{
    int a[10],i;  // Here 10 is size of array.....
    for(i=0;i<=10;i++)
    {
        printf("%p\n",&a[i]);    //& is address,a is name of array
    }
    return 0;
}                                 // since the given datatype is int(4bytes) thus obtained result will show +4 to previous

