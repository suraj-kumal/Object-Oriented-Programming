#include<iostream>
#include<conio.h>
using namespace std;
/* Default arguments are function arguments with default values 
which are used when user value is unavailable.*/
/* The default arguments should be arranged in 
function from "extreme Right"*/
void nezuko(char a='$', int count=3)
{
    for(int i=1;i<=count;i++)
    {
        cout<<a;
    }
    cout<<endl;
}
int main()
{
    int count=7;

    cout<<"No argument passed:"; 
    nezuko();
    // $ will be displayed three times


    cout<<"first argument passed:";
    nezuko('#');
    // # will be displayed three times

    cout<<"both argument passed:";
    nezuko('*', count);
    // * will be displayed six times
     getch();
     return 0;
}