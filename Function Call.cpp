#include <iostream>
using namespace std;

int add(int x,int y)//declaration prototyping//function call
{
    int sum=x+y;
    return sum;
}
int main()
{
    int val1,val2,sum;
    cout<<"Enter 2 numbers\n";
    cin>>val1>>val2;

    sum=add(val1,val2);//function call

    cout<<"Sum of "<<val1<<" add "<<val2<<" is "<<sum<<endl;
    return 0;
}

