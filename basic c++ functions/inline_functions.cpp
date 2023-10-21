#include<iostream>
#include<conio.h>
using namespace std;
//In C++, we can declare a function as inline. 
/*This copies the function to the location of the function call 
in compile-time and may make the program execution faster.*/
inline int nezukochan(int x)
{
    cout<<"value:"<<x<<endl;
    return 0;
}
int main()
{
    nezukochan(56);
    nezukochan(656);
    nezukochan(5485);
    getch();
}

/*
 durning compilation
 int main()
 {
     cout<<"value:"<<56<<endl;
     cout<<"value:"<<656<<endl;
     cout<<"value:"<<5485<<endl;
 } 
*/