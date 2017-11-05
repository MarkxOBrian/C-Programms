#include <iostream>
using namespace std;

class Person
{
private :string name,gender;
         int yob;
public:
     void setdetails(string s,string g, int y) // Inline-implementation
            {name=s; gender=g; yob=y;}
     int getage();//method definition to be implemented externally.
     void getdetails ();
};//end of class
//external implementation.
int Person::getage()
{
   int cyr,age;
  cout<<"enter current year\n";
  cin>>cyr;

  age=cyr-yob;
  return age;
}
void Person::getdetails()
{
    cout<<"persons name:"<<name<<"\ngender:"<<gender<<endl;
    cout<<"born in "<<yob<<endl;
}
int main()
{
    Person P;//instantiation

    P.setdetails("john","male",1996);//initialization
    P.getdetails();
    cout<<"your age is "<<P.getage()<<" years old\n";

    return 0;
}

