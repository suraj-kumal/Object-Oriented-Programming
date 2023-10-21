#include<iostream>
#include<conio.h>
using namespace std;
class animals
{
   public:
   void eat()
   {
       cout<<"eat"<<endl;
   }
   void sleep()
   {
       cout<<"sleep"<<endl;
   }
};
class dog:public animals
{
   public:
   void bark()
   {
       cout<<"woof woof"<<endl;
   }
};
int main()
{
    dog obj1;
    obj1.eat();
    obj1.sleep();
    obj1.bark();
    getch();
}