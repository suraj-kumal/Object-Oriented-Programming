#include<iostream>
#include<conio.h>
using namespace std;
class lazy
{
    int a,b;
    public:
    lazy(){}
    lazy(int x, int y)
    {
        a=x;
        b=y;
    }
    bool operator <(const lazy &l)
    {
       if(a<l.a)
       {
           return true;
       }
       if(a==l.a && b<l.a)
       {
           return true;
       }
       else
       {
           return false;
       }
    }
    void dang();

};
void lazy::dang()
{
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}
int main()
{
    lazy p1(2,3);
    cout<<"point 1"<<endl;
    p1.dang();

    lazy p2(6,8);
    cout<<"point 2"<<endl;
    p2.dang();
     

     if(p1<p2)
     {
         cout<<"p2 is greater"<<endl;
     }
     else
     {
         cout<<"p1 is greater "<<endl;
     }
    getch();
    return 0;
}