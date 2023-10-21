#include <iostream>
#include<conio.h>
using namespace std;

// global variable
int num;
// function definition
// returns the address of num variable
int& nezuko()
{
  return num;
}

int main()
{
  // assign 5 to num variable
  // equivalent to num = 5;
  nezuko() = 5;
  cout << num<<endl;
  getch();
  return 0;
}

