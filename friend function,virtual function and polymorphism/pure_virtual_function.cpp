#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class shape
{
    public:
    virtual void getarea()=0;

};
class rectangle:public shape
{
   public:
   void getarea()
   {
       int x, y;
       cout<<"enter the length and breadth:";
       cin>>x>>y;
       cout<<endl<<"area:"<<x*y<<endl;
   }
};
class circle:public shape
{
   public:
   void getarea()
   {
       int r;
       cout<<"enter the radius:";
       cin>>r;
       cout<<endl<<"area :"<<(3.14*r*r)<<endl;
   }
};
int main()
{
    int x;
    rectangle rect;
    circle cir;
    cout<<"select"<<endl;
    cout<<"1.recatangle"<<endl;
    cout<<"2.circle"<<endl;
    cin>>x;
     switch(x)
     {
         case 1:
          {
              system("cls");   
              rect.getarea();
              break;
          }
          case 2:
          {
              system("cls");   
              cir.getarea();
              break;
          }
          default:
          {
              system("cls");   
              cout<<"invalid"<<endl;
          }
     }
     getch();
}