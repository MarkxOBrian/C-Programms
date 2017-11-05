#include <iostream>
#include <string>

using namespace std;
class person
{
    protected: string name;
               int yob;
    public: person(string s, int y){name=s,yob=y;}
           string getname(){return name;}
           void getage(int y);
};
void person::getage(int y)
{
    int age=y-yob;
    cout<<name<<"you are "<<age<<" years old\n";
}
class student:public person
{
    private: string regno;
    double fees;

    public:student(string s, int y, string r, double f)
    {
        super(s,y);
        regno=r;
        fees=f;
    };

    void student::getdetails();
    {
        cout<<"name:"<<name<<"\n registration no: "<<regno<<\n"Fee balance:"<<fee<<endl;
    }

    int main()
    {
        person p("alice", 1996);
        student s("allan", 1995, "cit-223-044/2015,10000");

        cout<<"person created is called"<<p.getname()<<endl;
        cout<<"student created is called"<<s.getname()<<end;
        p.getname(2016); s.getage(2016)
        s.getdetails();
        return 0;
    }
};
