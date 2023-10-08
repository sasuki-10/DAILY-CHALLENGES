#include <stdio.h>
int main()
 {
    int num, rev_Num = 0, remainder;
    printf("Enter the number: ");
    scanf("%d", &num);    

    while (num != 0)
    {
        remainder = num % 10;
        rev_Num = rev_Num * 10 + remainder;
        num = num/10;

    }    

    printf("The reversed number is: %d", rev_Num);
    return 0;

}
