//A program to cal S.I
#include <stdio.h>

int main ()
{
    //Declaration 1
    const float Rate = 0.1;
    float Principle, SimpleI;
    int Duration;
    //Data input
    printf("Enter the principle Amuont");
    scanf("%f",&Principle);
    printf("How many years");
    scanf("%d",&Duration);
    //Calaculation
    SimpleI = Principle*Duration*Rate;
    //Out put
    printf("Principle: %6.2f\n",Principle);
    printf("Time: %d\n", Duration);
    printf("Simple Interest: %6.2f\n",SimpleI);
    return 0;
}
