#include <iostream>
using namespace std;
int main()
{
    int val1,val2,*ptr;

    val1=8;
    val2=25;
    ptr=&val1;

    cout<<"val1: "<<val1 <<" at " << &val1<<endl;
    cout<<"val2: "<<val2 <<" at " << &val2<<endl;
    cout<<"pointer value: "<< *ptr <<"at" << ptr<<endl;

    ptr = &val2;
    cout<<"pointer value now is :"<< *ptr <<" at"<< ptr<<endl;

    return 0;
}
