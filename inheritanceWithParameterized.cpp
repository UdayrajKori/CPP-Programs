#include <iostream>
using namespace std;
    
class Base {
    public:
    
    Base(){
        cout<<"Base class default constructor called"<<endl;
    }

    Base(int x){
        cout<<"Base class parameterized constructor called with value: "<<x<<endl;
    }

    Base(int x, int y){
        cout<<"Base class parameterized constructor called with value: "<<x<<y<<endl;
    }
};

class Derived: public Base{
    public:

    Derived():Base(10){
        cout<<"Derived class default constructor called"<<endl;
    }

    // Derived():Base(10, 20){
    //     cout<<"Derived class default constructor called"<<endl;
    // }

    Derived(int x){
        cout<<"Derived class parameterized constructor called"<<endl;
    }

    Derived(int x, int y){
        cout<<"Derived class parameterized constructor called"<<endl;
    }

};

int main() {
    
    Derived obj;

    
    return 0;
}