#include<iostream>
using namespace std;
int main()
{
    int num, demo, res;
    cout<<"enter the numerator and denominator"<<endl;
    cin>>num>>demo;
    try
    {
        if(demo ==0)
        {
            throw demo;
        }
        res=num/demo;

    }
    catch(int f)
    {
        cout<<"denominator must not be 0"<<endl;
    }
    cout<<"division is:"<<res<<endl;
    

}