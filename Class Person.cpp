#include <iostream>
#include <string>
using namespace std;

class person
{
    private:
        int yob;
        string name,gender;
    public:person();
        person(string name,string gen,int year);
        ~person();
        int getage(int y){return y-yob;}
        int getage();
        void changename();
        void getdetails();
        string getname(){return name;};
};
person::person()//default constructer
{
    cout<<"enter name of the person and gender\n";
    cin>>name>>gender;
    cout<<"when was "<<name<<" born?\n";
    cin>>yob;
    cout<<name<<" successfully created\n";
}
person::person(string name,string gen, int year)
{
    //parameterised constructers.
    name=name;
    gender=gen;
    yob=year;
    cout<<name <<" was successfully created\n";
}
person::~person()
{
    cout<<"resources for" <<name<<" successfully released\n";
}
int person::getage()
{
    //overloded method
    int year,age;
    cout<<"enter current year\n";
    cin>>year;

    age=year-yob;
    return age;
}

void person::changename()
{
    cout<<"current name is "<<name<<"\n Enter new name\n";
    cin>>name;
    cout<<"new name is now"<<name<<endl;
}

void person::getdetails()
{
    cout<<"name:"<<name<<"\n Gender:"<<gender<<"Year of birth:"<<yob<<endl;
}

int main()
{
    person p1,p2("john","male",1996);
    //p1 will use defult constructer
    //p2 will use parameterised constructer

    cout<<p1.getname()<<"you are"<<p2.getage(2015)<<"years old\n";
    p2.changename();
    p1.getdetails();
    p2.getdetails();

    return 0;
}
