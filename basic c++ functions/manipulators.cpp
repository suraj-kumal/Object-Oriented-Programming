#include<iostream>
#include<iomanip>// preprocessor directive which is needed for setfill() and setw()
#include<conio.h>
using namespace std;
int main()
{
    //normal output
    cout<<"hello nezuko chan"<<endl;

    // 'setw' and 'setfill' are C++ manipulators
	// 'setw' is used to reserve field width of output 
	// 'setfill' is used to fill the blankspace with custom character

    cout<<setw(20)<<"hello nezuko chan"<<endl;
    //here 20 characters is reserved for output
    cout<<setw(20)<<setfill('#')<<"hello nezuko chan"<<endl;
    //here 20 characters is reserved for output and the remaining blackspace is filled with #
    getch();


}
