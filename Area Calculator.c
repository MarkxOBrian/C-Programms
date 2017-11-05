//Area Calculator
#include <stdio.h>

int main()
{
    int Num1;
    const float Pie =3.14;
    float Area;

    printf("Enter the Radius");
    scanf("%d",&Num1);

    Area=Num1*Num1*Pie;

    printf("The Area of the Circle is %f\n",Area);
    return 0;
}
