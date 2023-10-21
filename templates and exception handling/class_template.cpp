#include<iostream>
using namespace std;
template <class X>
class value
{
   private:
   X w=65.69;
   public:
   void output()
   {
       cout<<"value of w:"<<w<<endl;
   }
};
int main()
{
    value <int>myobj;
    myobj.output();

    cout<<"changing value to float"<<endl;
 
    value <float>ourobj;
    ourobj.output();

}