#include<iostream>
#include<conio.h>
using namespace std;
class codar
{
    private:
    int x=0;
    public:
    codar(){}
    codar(int c)
    {
        x=c;
    }
    void outdata()
    {
        cout<<"x:"<<x<<endl;
    }
    void operator ++()//operator overloading for prefix increment
    {
       ++x;
    }
    void operator ++(int)// operator overloading for postfix increment
    {
        x++;                 //prefix and postfix is separated by int
    }
    void operator --()//operator overlaoding for prefix decrement
    {
        --x;
    }
    void operator --(int)//operator overloading for postfix increment
    {
        x--;
    }
};
int main()
{
    codar nep;
    nep.outdata();
    ++nep;
    nep.outdata();
    nep++;
    nep.outdata();
    --nep;
    nep.outdata();
    nep--;
    nep.outdata();
    getch();
    return 0;

}
