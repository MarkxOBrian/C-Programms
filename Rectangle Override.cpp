#include <iostream>
#include <string>
using namespace std;

class rectangle
{
    protected:int length,width;
    public: rectangle();
    void getarea();
};
rectangle::rectangle()
{
    cout<<"Enter length and width of the polygon";
    cin>>length>>width;
}
void rectangle::getarea()
{
  int area=length*width;
  cout<<"Area of rectangle is"<<area<<endl;
};
class triangle::getarea()
{
    public:triangle()
    {
        cout<<"triangle polygon\n";
    }
    void getarea();
};

void triangle::getarea()
{
    float area=(length*width)/2.0;
    cout<<"area of triangle is"<<area<<endl;
}
int main()
{
    cout<<"creating a triangle\n";
    rectangle r;
    cout<<"\n creating a triangle\n";
    triangle t;

    v.getarea();
    t.getarea();

    return 0;
}

