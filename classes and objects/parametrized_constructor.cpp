#include<iostream>
#include<conio.h>
using namespace std;
class wanwan
{
    int x,y;
    public :
    //parameterized constructor are those which accepts parameters
    wanwan(int a, int b)//parameterized constructor
    {
        x=a;
        y=b;
    }
     void printnya();

};
void wanwan::printnya()
{
    cout<<"value of x:"<<x<<endl<<"value of y:"<<y<<endl;
}
int main()
{
    wanwan wkwk(1,2);
    wanwan ahaha(2,6);
    wkwk.printnya();
    ahaha.printnya();
    getch();
    return 0;
}