#include<iostream>
#include<conio.h>
using namespace std;

class anya
{
    private :
    int xe;
    int ye;
    public:
    // default constructor is the constructor which doesnot accepts parameters
    anya(int x,/*dafault value*/int y=200)//default constructor 
    {
       xe=x;
       ye=y;

    }
     void displayanya();
};
void anya::displayanya()
{
    cout<<"waku waku"<<endl;
    cout<<"value of xe:"<<xe<<endl;
    cout<<"value of ye:"<<ye<<endl;
}
int main()
{
    anya wkwk(10);
    wkwk.displayanya();
    getch();
}