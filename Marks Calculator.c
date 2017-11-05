//Marks Calc
#include <stdio.h>
int main ()
{
    //Declacration 1
    int Maths, Eng, Bio;
    float Average, Total;
    //Data input
    printf("Enter Mathematics Marks:");
    scanf("%d",& Maths);
    printf("Enter English Marks:");
    scanf("%d",& Eng);
    printf("Enter Biology Marks:");
    scanf("%d",& Bio);
    //Calculation
    Total = Maths+Eng+Bio;
    Average = Total/3;
    //Out put
    printf("Total Marks: %.2f\n", Total);
    printf("Average Is: %.2f\n", Average);
    return 0;
}
