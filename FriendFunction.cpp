// assignments:
// unary operator overloading 
// operator overlaoding using friend class

#include <iostream>
using namespace std;
    
class Student {
    private:
    int rollNo;

    public:
    friend void setRollNum(Student &obj, int rollNo);

    int getData(){
        return this->rollNo;
    }
    
};

void setRollNum(Student &obj, int rollNo){
    obj.rollNo = rollNo;
}



int main() {
    
    Student obj;

    setRollNum(obj, 10);

    cout<<obj.getData()<<endl;
    
    return 0;
}