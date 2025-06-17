#include <iostream>
using namespace std;
    
class Student {
    private:
    int rollNo;
    string name;

    public:
    Student(int rollNo, string name){
        this->rollNo = rollNo;
        this->name = name;
    }

    int operator+(Student s){
        int sum = this->rollNo + s.rollNo;
        return sum;
    }
    
};

int main() {
    
    Student uday(1, "uday");
    Student parmila(2, "parmila");

    int sum1 = uday.operator+(parmila);
    cout<<sum1<<endl;
    
    return 0;
}