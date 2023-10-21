//These functions having the same name but different arguments are known as overloaded functions.
#include<iostream>
#include<conio.h>
using namespace std;
int sum(int x,int y)
{
   return (x+y);
}
float sum(double x, double y)
{
    return (x+y);
}
int sum(int x, int y, int z)
{
    return (x+y+z);
}
int sum(int x, int y,int z, int a)
{
    return(x+y+z+a);
}
float sum(double a, double b, double c)
{
    return(a+b+c);
}
int main()
{
    cout<<"sum:"<<sum(10,20)<<endl;
    cout<<"sum:"<<sum(10.5,20.9)<<endl;
    cout<<"sum:"<<sum(10,20,30)<<endl;
    cout<<"sum:"<<sum(10,20,30,40)<<endl;
    cout<<"sum:"<<sum(10.0,20.5,30.2)<<endl; 
    getch();
}
//In function overloading same function can be used with different types and numbers of parameters