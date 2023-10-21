#include<iostream>
#include<conio.h>
using namespace std;
template <typename X>
X add(X a, X b)
{  
   return a+b;
}
int main()
{
  float a=20.36,b=65.32;
  cout<<"sum of two float is:"<<add<float>(a,b)<<endl;
  cout<<"sum of two integers is:"<<add<int>(a,b)<<endl;
   getch();
}