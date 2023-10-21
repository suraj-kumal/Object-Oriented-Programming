#include<iostream>
#include<conio.h>
using namespace std;
class chou
{
   private:
   int skuknu=10;
   protected:
   int raknu=15;
   public:
   int usnya=20;
};
class hiphopboy:private chou
{
   public:
   int getraknu()
   {
       return raknu;
   }
   int getusnya()
   {
       return usnya;
   }
};
int main()
{
    hiphopboy tot;
    cout<<"private value cannot be accessed"<<endl;
    cout<<"protected value is:"<<tot.getraknu()<<endl;
    cout<<"public value is:"<<tot.getusnya()<<endl;
    getch();

}