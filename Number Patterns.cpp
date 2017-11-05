#include <iostream>
using namespace std;
int main()
{
    int Size,inner,outer;

    cout<<"Creating patterns\n";
    cout<<"Enter a number in the range of 2 to 10\n";
    cin>>Size;

    if (Size>=2&&Size<=10)
    {
        for(outer=1;outer<=Size;outer++)
        {
            cout<<"loop"<<outer<<" it ";
            for(inner=1;inner<=outer;inner++)
            {
                cout<<inner<<",";
            }
            cout<<"\n";
        }
    }
    else
    {
        cout<<"number is out of range\n";
    }
    return 0;
}
