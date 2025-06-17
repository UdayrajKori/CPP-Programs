// The function overloading is the feature of C++ that allows you to define multiple functions with the same name but different parameters.
// It is used to perform different operations with the same function name.
// The program of Function Overloading in C++ is as follows:
#include<iostream>
using namespace std;

 int add(int a, int b){
    return a + b;
 }

 int add(int a, float b){
    return a + b;
 }

 int add(int a, int b, int c){
    return a + b + c;
 }

  int main()
  {
    cout<<"Addition of 2 integers:"<<add(5,10)<<endl;
    cout<<"Addition of integer and float:"<<add(5,10.5f)<<endl;
    cout<<"Addition of 3 integers:"<<add(5,10,15)<<endl;
    return 0;
  }