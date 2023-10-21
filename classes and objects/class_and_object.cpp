#include<iostream>
#include<string.h> // easier to input and output string 
#include<conio.h>
using namespace std;
class xerocool
{
    //private data types cannot be accessed from outside the class
    int x;
    string c;
     
     //public data types and functions can be accessed outside the class
     public:
     int nezukochan();
     //function declaration
};
//function defining
int xerocool::nezukochan()
{
    cout<<"nezukochyaaan"<<endl;
    return 0;
}
//main function
int main()
{
    xerocool nez;
    //variable defining
    nez.nezukochan();
    //function call
     getch();
}