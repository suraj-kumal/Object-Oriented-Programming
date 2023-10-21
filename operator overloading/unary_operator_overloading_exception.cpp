#include<iostream>
#include<conio.h>
using namespace std;
class exe
{
    int x=0;
    public:
    exe(){}
    exe(int a)
    {
        x=a;
    }
    void putout()
    {
        cout<<"x:"<<x<<endl;
    }
    /*void operator ++()
    {
        ++x;   this doesnt work beacuse of the void return type
    }*/
    exe operator ++()
    {
        exe temp;
        temp.x=++x;
        return temp;

    }
};
int main()
{
    exe zero;
    zero.putout();
    ++zero;
    zero.putout();
    exe zero2;
    zero2=++zero; // since ++zero is in the right side of the equal the void return type doesnt work
    zero2.putout();
    getch();
    return 0;
}