#include <iostream>
using namespace std;
    
class Base1 {
    public:
    Base1(){
        cout<<"Base1 constructor called"<<endl;
    }

    void collision(){
        cout<<"Hello i am collision function Base 1"<<endl;
    }
};

class Base2 {
    public:
    Base2(){
        cout<<"Base2 constructor called"<<endl;
    }

    void collision(){
        cout<<"Hello i am collision function Base 2"<<endl;
    }
};


class Base3 {
    public:
    Base3(){
        cout<<"Base3 constructor called"<<endl;
    }
};

class Child:public Base2, public Base1, public Base3{
    public:

    // In the multiple inheritance the Constructor does not work properly like single inheritance.
    // Child():Base1(),Base2(),Base3(){
    //     cout<<"Child constructor called"<<endl;
    // }

    void print(){
        Base1::collision();
        Base2::collision();
    }
};

int main() {
    
    Child obj;
    obj.print();
    
    return 0;
}