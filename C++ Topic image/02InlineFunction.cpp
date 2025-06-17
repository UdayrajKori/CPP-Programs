// The inline function is a function that is expanded in line when it is called.
// It is used to reduce the function call overhead and improve performance.
// The program of Inline Function in C++ is as follows:
#include<iostream>
using namespace std;

  inline int square(int x){
    return x*x;
  }

  inline int cube(int x){
    return x*x*x;
  }
  
  int main()
  {
    cout<<"Square of 5:"<<square(5)<<endl;
    cout<<"Cube of 5:"<<cube(5)<<endl;
    return 0;
  }