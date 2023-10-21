#include<iostream>
using namespace std;
class blank
{
   int a,b;
   public:
   blank(){}
   blank(int x , int y)
   {
     a=x;
     b=y;
   }
   blank point(blank c)
   {
     blank temp;
     temp.a= a + c.a;
     temp.b= b + c.b;
     return temp;

   }
   void display()
   {
       cout<<"a:"<<a<<endl;
       cout<<"b:"<<b<<endl;
   }
};
int main()
{
    blank p1(2,3);
    cout<<"point 1"<<endl;
    p1.display();
    blank p2(4,5);
    cout<<"point 2"<<endl;
    p2.display();

    blank p3;
    p3=p1.point(p2);
    cout<<"sum of two points:"<<endl;
    p3.display();
    
}