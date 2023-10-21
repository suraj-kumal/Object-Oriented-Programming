#include<iostream>
#include<conio.h>
using namespace std;
class darlingohayo
{
    int x;
    double c;
    public:
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked or called whenever an object is created
    //constructor donot have return type and it is unneeded
    darlingohayo()//constructor
    {  //object initialization
    x=10;
    c=90.23;
    }
    void mydata();
};
void darlingohayo::mydata()
{
    cout<<"zero two"<<endl;
    cout<<"value of x:"<<x<<endl;
    cout<<"value of c:"<<c<<endl;
}
int main()
{
    darlingohayo wkwk;
    wkwk.mydata();
    getch();
    return 0;
}