#include<iostream>
#include<conio.h>
using namespace std;
class B;
class A
{
    private:
    int x=20;
    public:
    friend class B;
};
class B
{
    public:
    void output(A &w)
    {
        cout<<"value of x is:"<<w.x<<endl;
    }
};
int main()
{
   A a;
   B b;
   b.output(a);
   getch();
}