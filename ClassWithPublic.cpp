#include<iostream>
#include<string>

using namespace std;

  class Student{
    public: 
    
    int rollNo;
    string name;
    
  };
  
  int main()
  {
    Student st;
    st.rollNo = 10;
    st.name = "Uday";
    
    cout<<st.rollNo <<endl;
    cout<<st.name <<endl;
    
    
    
    return 0;
  }