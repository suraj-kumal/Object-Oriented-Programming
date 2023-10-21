#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char d[10];
    cout<<"enter the data to append:"<<endl;
    cin.getline(d,10);
    ofstream file("append.txt",ios::app);
    file<<d;
    file.close();
    system("append.txt");
    system("cls");
    cout<<"append sucessfull"<<endl;


}