#include <iostream>
using namespace std;

int main()
{
    int lowlim,upplim,even,counter;

    do
    {
      cout<<"Enter the lower limit number\n";
      cin>>lowlim;
      if(lowlim<1||lowlim>=10)
      {
          cout<<"the number is out of range.\n try again\n";
      }
    }while(lowlim<1||lowlim>=10);

    do
    {
        cout<<"Enter the upper limit number\n";
        cin>>upplim;
        if (upplim<6||upplim>=100)
        {
            cout<<"number out of range\n try again\n";
        }
    }while(upplim<6||upplim>=100);

    if(upplim=lowlim)
    {
        //swap the values
        int temp;

        temp=upplim;
        upplim=lowlim;
        lowlim=temp;
     }
      for(counter=lowlim;counter<=upplim;counter++)
       {
        if(counter%2==0)
        {
            cout<<counter<<",";
        }
       }
    return 0;

}
