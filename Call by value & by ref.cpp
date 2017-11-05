#include <iostream>
using namespace std;

void byvalue(int x,int y)
{
    x=x*2;
    y=y*2;

    cout<<"in by value val1"<<x<<"val2"<<y<<endl;
}
void byreference(int &x,int &y)
{
    x=x*2;
    y=y*2;
    cout<<"In by reference val1=\tab "<<x<<"val 2=\tab "<<y<<endl;
}

int main()
{
    int val1=6,val2=10;

    cout<<"val1= "<<val1<<" and val2= "<<val2<<endl;

    byvalue(val1,val2);
    cout<<"now val1= "<<val1<<" and val2= "<<val2<<endl;

    byreference(val1,val2);
    cout<<"now val1= "<<val1<<" and val2="<<val2<<endl;

    return 0;

}
