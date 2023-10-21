#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    char arr[10];
    cout<<"enter the name :";
    cin.getline(arr,100);
    //getline(cin,arr);
    ofstream file("sutututu.txt"); //ofstream file("sutututu.txt",ios::out)
    file<<arr;
    file.close();
    system("sutututu.txt");
    cout<<"file created"<<endl;

}