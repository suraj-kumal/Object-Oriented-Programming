#include<iostream>
using namespace std;
class one
{
    int s;
    public:
    one()
    {
        s=10;
    }
    void display()
    {
        cout<<"value of s:"<<s<<endl;
    }
    friend void displaydata(one &d);

};
void displaydata(one &d)
{
    d.s=8;
}
int main()
{
    one g;
    g.display();
    displaydata(g);
    g.display();

}