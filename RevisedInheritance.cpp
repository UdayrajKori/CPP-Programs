#include <iostream>
using namespace std;
    
class Base {
    public:
    
    Base(){
        cout<<"Base class default constructor called"<<endl;
    }
    Base(int x){
        cout<<"Base class parameterized constructor with single parameter"<< endl;
    }
    Base(int x, int y){
        cout<<"Base class parameterized constructor with two parameters: "<<x<<" and "<<y<<endl;
    }
};

class Derived:public Base{
    public:
    Derived():Base(){
        cout<<"Derived class default constructor called"<<endl;
    }

    Derived(int x):Base(x){
        cout<<"Derived class constructor with 1 argument"<<endl;
    }
    Derived(int x, int y):Base(x, y){
        cout<<"Derived class constructor with 2 arguments"<<endl;
    }
};

int main() {
    
    Derived obj1;
    Derived obj2(1);
    Derived obj3(1, 2);

    
    return 0;
}