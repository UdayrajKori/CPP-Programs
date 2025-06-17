#include<iostream>
#include<string>

using namespace std;

  class Student{
    private: 
    
    int rollNo;
    string name;

    public:
    
    int setRollNo( int r)
    {
        rollNo = r;
    }

    string setName(string n)
    {
        name = n;
    }

    int getRollNo()
    {
        return rollNo;
    }

    string getName()
    {
        return name;
    }
    
  };
  
  int main()
  {
    Student st;
    // st.rollNo = 10;
    // st.name = "Uday";

    st.setRollNo(10);
    st.setName("Uday");

    
    cout<<st.getRollNo()<<endl;
    cout<<st.getName()<<endl;
    
    
    
    return 0;
  }