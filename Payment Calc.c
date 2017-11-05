//Payment Calculator
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    num2=750;

    printf("Enter the number of hours worked");
    scanf("%d",&num1);


    printf("The amount to be paid is %d\n",num1*num2);
    return 0;
}
