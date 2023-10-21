#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //dma is for memory management
    int *p=new int(6);
    cout<<"value of p after dma using new : "<<*(p)<<endl;
    delete p;
    cout<<"value of p after deleting dynamic initialization :"<<*(p)<<endl;
    int *z=new int[3];
    z[0]=45;
    z[1]=32;
    z[2]=663;
    cout<<"value of z[0] is"<<z[0]<<endl;
    cout<<"value of z[1] is"<<z[1]<<endl;
    cout<<"value of z[2] is"<<z[2]<<endl;
    delete[] z;
    cout<<"value of array after delete dma"<<endl;
    cout<<"value of z[0] is"<<z[0]<<endl;
    cout<<"value of z[1] is"<<z[1]<<endl;
    cout<<"value of z[2] is"<<z[2]<<endl;

    getch();
    //returns garbage value since the dynamically initialized value is deleted 
}