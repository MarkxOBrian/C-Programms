#include <iostream>

using namespace std;

int main()
{
    double salo,allowances,gross,tax,net;

    cout<<"enter the monthly salary\t";
    cin>>salo;

    cout<<"enter the allowances\t";
    cin>>allowances;

    gross=salo+allowances;

    if (gross<=10000)
    {
        tax=0;
        net=gross;
    }
    else if(gross<=20000)
    {
        tax=0.1*gross;
        net=gross-tax;
    }
    else if(gross<=30000)
    {
        tax=2000+(0.2*(gross-20000));
        net=gross-tax;
    }
    else
    {
        tax=4000+0.3*(gross-30000);
        net=gross-tax;
    }

    cout<<"gross pay: "<<gross<<endl;
    cout<<"tax payable: "<<tax<<endl;
    cout<<"net pay: "<<net<<endl;

    return 0;
}

