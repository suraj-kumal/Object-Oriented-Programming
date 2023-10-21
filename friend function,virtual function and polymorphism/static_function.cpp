#include<iostream>
#include<conio.h>
using namespace std;
class xero
{
    private:
    static int x;
    int y=0;
    public:
    xero()
    {
        x++;
    }
    static int getvalue()
    {
        return x;
    }
};
int xero::x=0;
int main()
{
    cout<<"initial value:"<<xero::getvalue()<<endl;
    xero a,b;
    cout<<"after creating 2 objects:"<<xero::getvalue()<<endl;
    getch();

}