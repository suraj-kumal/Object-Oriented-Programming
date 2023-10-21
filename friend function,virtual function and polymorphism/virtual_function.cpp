#include<iostream>
#include<conio.h>
using namespace std;
class animals
{
    public:
    virtual void sound()
    {
        cout<<"sjdfhlsueafgilsudg"<<endl;

    }
};
class neko:public animals
{
   public:
   void sound()
   {
       cout<<"nya nya meow"<<endl;
   }
};
class inu:public animals
{
    public:
    void sound()
    {
        cout<<"woof woof"<<endl;
    }
};
void soundpointer(animals *x)
{
    x->sound();
}
int main()
{
    animals *p;
    neko nekosound;
    inu inusound;
    p=&nekosound;
    soundpointer(p);
    p=&inusound;
    soundpointer(p);
    getch();
}