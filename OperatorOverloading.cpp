#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int rollNo;
    string name;
public:
    Student(int rollNo,string name)
    {
        this->rollNo = rollNo;
        this->name= name;
    }
    //          object ref of harilal
 int addRollNo(Student s)
 {
   int sum = this->rollNo+s.rollNo;
   return sum;
 }

    int operator+(Student s)
    {
        int sum = this->rollNo+s.rollNo;
        return sum;
    }

  bool compareRollNo(Student s)
  {
        if(this->rollNo==s.rollNo)
        {
            return  true;

        }
        return false;
  }

    bool operator==(Student s)
    {
        if(this->rollNo==s.rollNo)
        {
            return  true;

        }
        return false;
    }


};



int main() {

    Student niraj(1,"niraj");
    Student harilal(1,"harilal");

 int sum1 =    niraj.addRollNo(harilal);

 cout<<sum1<<endl;

    int sum2 =    niraj.operator+(harilal);

    cout<<sum2<<endl;

    //       niraj.operator+(harilal)
    int sum3 = niraj+harilal;
    cout<<sum3<<endl;

    bool rollNoEqual = niraj.compareRollNo(harilal);

    cout<<rollNoEqual;

    bool rollNoEqual2 = niraj.operator==(harilal);
    cout<<rollNoEqual2<<endl;

    //                  .operator==(harilal)
    bool rollNoEqual3 = niraj==harilal;

    cout<<rollNoEqual3<<endl;

    return 0;

}