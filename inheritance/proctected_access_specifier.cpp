#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
   protected:
   int x=15;
};
class demo2:protected demo
{
   public:
   void output()
   {
       cout<<"value of x is:"<<x<<endl;
   }
};
int main()
{
    demo2 myobj;
    myobj.output();
    getch();
}