#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char a[80];
    ifstream file("sutututu.txt"/*ios::in*/);
    file>>a;
    cout<<a<<endl;
    file.close();

}