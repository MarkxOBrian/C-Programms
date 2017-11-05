#include <iostream>
using namespace std;
int main()
{
    int numbers[10];

    cout<<"Capturing initial value\n";

    for(int x=0;x<10;x++)
    {
        cout<<"Enter value"<<(x+1)<<endl;
        cin>>numbers[x];
        //capturing numbers and storing them in the array.
    }
    cout<<"Before sorting, the numbers are :\n";

    for (int y=0;y<10;y++)
    {
        cout<<numbers [y] <<",";
    }
    //sorting the numbers:
    for(int k=1;k<=10;k++)
    {
        for(int i=0;i<9;i++)
        {
            if(numbers[i]>numbers[i+1])
            {
                int temp=number[i];
                numbers[i]=numbers[i+1];
                numbers[i+1]=temp;
                //swapping done
            }
        }
    }
    cout<<"After sorting the numbers are: \n";
    for(int x=0;x<10; x++)
    {
        cout<<"numbers[x] <<", ";
    }
    return 0;


}
