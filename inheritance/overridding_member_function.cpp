#include<iostream>
#include<conio.h>
using namespace std;
class mybase
{
   public:
   void display()
   {
      cout<<"this is base class"<<endl;
   }
};
class myderived:public mybase
{
    public:
    void display()
    {
        cout<<"this is child class"<<endl;
    }

};
int main()
{
    myderived object1, object2;
    object1.display();

    object2.mybase::display();
    getch();
}