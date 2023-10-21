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
     lazy operator =(const lazy &temp)
     {
         a=temp.a;
         b=temp.b;
         return temp;

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

    p1=p2;
    cout<<"point1 is equal to point 2"<<endl;
    p1.dang();


    getch();
    return 0;
}