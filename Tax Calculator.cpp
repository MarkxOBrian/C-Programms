#include <iostream>

using namespace std;

int main()
{
    float salo, allowance, gross, tax, net;

    cout << "Enter Monthly Salary" << endl;
    cin>> salo;
    cout<< "Enter Allowances"<< endl;
    cin>> allowance;
    gross=salo+allowance;

    if (gross<=10000)
    {
        tax=0;
        net=gross;
    }
    else if  (gross<=20000)
    {
        tax=0.1*gross;
        net=gross-tax;
    }
    else if (gross<=30000)
    {
        tax=2000+0.2*(gross-20000);
        net=gross-tax;

    }
    else
    {
        tax=4000+0.3*(gross-30000);
        net=gross-tax
    }
    cout << "Gross Pay:"<<gross<<endl;
    cout << "Tax Payable:"<<tax<<endl;
    cout << "Net Pay:"<<net<<endl;
    return 0;
}

