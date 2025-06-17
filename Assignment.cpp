#include <iostream>
using namespace std;
    
class Parent {
    public:
    Parent(){
        cout<<"Parent Constructor Without parameter"<<endl;
    }

    Parent(int x){
        cout<<"Parent Constructor With single parameter: "<<endl;
    }
    
};

class Child: public Parent{
    public:
    Child():Parent(){
        cout<<"Child Constructor Without parameter"<<endl;
    }

    Child(int x):Parent(x){
        cout<<"Child Constructor With single parameter: "<<endl;
    }
    
};

int main() {
    
    Child obj;
    Child obj2(10);
    
    
    
    return 0;
}