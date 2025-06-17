// The default argument is the value that is passed to a function when no argument is provided for that parameter.
// Default arguments allow you to call a function with fewer arguments than it is defined to accept.
// The program of Default Arguments in C++ is as follows:
#include<iostream>
using namespace std;
 
  void add(int a = 5, int b = 10){
    cout<<"The addition = "<<a+b<<endl;
  }

  int main()
  {
    add();
    add(10);
    add(10, 20);

    return 0;
  }