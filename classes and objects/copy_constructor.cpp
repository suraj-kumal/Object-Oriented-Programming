#include<iostream>
#include<conio.h>
using namespace std;
 class selena
 {
    int x,y;
    public:
    // initialize variables with parameterized constructor
    selena(int l, int b)
    {
        x=l;
        y=b;
    }
    
    // copy constructor with a selena object as parameter
    // copies data of the o parameter
    selena ( selena &o)
    {
        x=o.x;
        y=o.y;
    }
    int cal();

 };
 int selena::cal()
 {
     return x*y;
 }

 int main()
 {
     // create an object of selena class
     selena taiyo(2,3);
     // copy contents of taiyo to gg
     selena gg(taiyo);


     cout<<"area from constructor:"<<taiyo.cal()<<endl;
     cout<<"area from copy constructor:"<<gg.cal()<<endl;
     getch();
 }