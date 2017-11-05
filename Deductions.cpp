#include <iostream>

using namespace std;

int main()
{
    double salo,deductions,netpay;

    cout<<"enter the monthly salary\t";
    cin>>salo;

    if (salo<10000)
    {
        cout<<"no deductions on your salary";
    }
    else if(salo<20000)
    {
        deductions=salo-1000;
    }
    else
    {
        deductions=salo*0.07;
    }
    netpay=salo-deductions;

    cout<<"your net pay is: "<<netpay<<endl;

    return 0;
}


