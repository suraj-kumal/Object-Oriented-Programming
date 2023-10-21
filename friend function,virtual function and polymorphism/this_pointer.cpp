#include<iostream>
#include<conio.h>
using namespace std;
class godzilla
{
   private:
   int x;
   public:
   void setvalue(int w)
   { 
       this->x=w;

   }
   void output()
   {
       cout<<"value of x:"<<x<<endl;
   }
};
int main()
{
    godzilla a;
    a.setvalue(69);
    a.output();
    getch();
}