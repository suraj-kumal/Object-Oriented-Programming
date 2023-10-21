#include<iostream>
#include<conio.h>
using namespace std;
class sum
{

    //Objects can be passed as function arguments. 
    /*This is useful when we want to assign the values of a 
    passed object to the current object*/
   int x;
   int y;
   public:
   void setdata(int a,int b)
   {
       x=a;
       y=b;
   }
   void sumdata(sum r, sum s)
   {
       x=r.x+s.x;
       y=r.y+s.y;
   }
   void output();
};
void sum::output()
{
    cout<<"sum:"<<x+y<<endl;
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
}
int main()
{
    sum s1, s2,s3;
    s1.setdata(2,4);
    s1.output();

    s2.setdata(4,6);
    s2.output();

    s3.setdata(6,8);
    s3.output();


    getch();
    return 0;
}