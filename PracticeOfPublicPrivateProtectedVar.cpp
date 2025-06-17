#include <iostream>
using namespace std;
    
class Base {
    public:
        int publicVariable = 10;
    protected:
        int protectedVariable = 20;
    private:
        int privateVariable = 30;

    public:
        void showVariables(){
            cout << endl;
            cout<<"Base Class Variables:"<<endl;
            cout<<"Public Variable: "<<publicVariable<<endl;
            cout<<"Protected Variable: "<<protectedVariable<<endl;
            cout<<"Private Variable: "<<privateVariable<<endl;
            cout<<endl;
        }
    
};

class Derived: public Base{
    public:
    void showVariables(){
        cout<<endl;
        cout<<"Derived Class Variables:"<<endl;
        cout<<"Public Variable: "<<publicVariable<<endl;
        cout<<"Protected Variable: "<<protectedVariable<<endl;
        // cout<<"Private Variable: "<<privateVariable<<endl; // Yo hami access garna sakdainau kina bhane yo private variable ho yo derived ra ouside of class use garna painaa.
        cout<<endl;
    }

};

class Derived1: protected Derived{
    public:
    void showVariables(){
        cout<<endl;
        cout<<"Derived1 Class Variables:"<<endl;
        cout<<"Public Variable: "<<publicVariable<<endl;
        cout<<"Protected Variable: "<<protectedVariable<<endl;
        // cout<<"Private Variable: "<<privateVariable<<endl; // Yo hami access garna sakdainau kina bhane yo private variable ho yo derived ra ouside of class use garna painaa.   
        cout<<endl;
    }
};

class Derived2: private Derived1{
    public:    
    void showVariables(){
        cout<<endl;
        cout<<"Derived2 Class Variables:"<<endl;
        cout<<"Public Variable: "<<publicVariable<<endl;
        cout<<"Protected Variable: "<<protectedVariable<<endl; // Yo hami access garna sakdainau kina bhane yo protected variable ho yo derived ra ouside of class use garna painaa.
        // cout<<"Private Variable: "<<privateVariable<<endl; // Yo hami access garna sakdainau kina bhane yo private variable ho yo derived ra ouside of class use garna painaa.
        cout<<endl;
    }
};

class Derived3: private Derived2{
    public:
    void showVariablesDerived3(){
        cout<<endl;
        cout<<"Derived3 Class Variables:"<<endl;
        showVariables();
        // cout<<"Public Variable: "<<publicVariable<<endl; // Yo hami access garna sakdainau kina bhane yo public variable ho yo derived ra ouside of class use garna painaa.
        // cout<<"Protected Variable: "<<protectedVariable<<endl; // Yo hami access garna sakdainau kina bhane yo protected variable ho yo derived ra ouside of class use garna painaa.
        // cout<<"Private Variable: "<<privateVariable<<endl; // Yo hami access garna sakdainau kina bhane yo private variable ho yo derived ra ouside of class use garna painaa.
        cout<<endl;
    }
};

class Derived4: protected Derived3{
    public:
    void showVariablesDerived4(){
        cout<<endl;
        cout<<"Derived4 Class Variables:"<<endl;
        showVariablesDerived3();
        // cout<<"Public Variable: "<<publicVariable<<endl; // Yo hami access garna sakdainau kina bhane yo public variable ho yo derived ra ouside of class use garna painaa.
        // cout<<"Protected Variable: "<<protectedVariable<<endl; // Yo hami access garna sakdainau kina bhane yo protected variable ho yo derived ra ouside of class use garna painaa.
        // cout<<"Private Variable: "<<privateVariable<<endl; // Yo hami access garna sakdainau kina bhane yo private variable ho yo derived ra ouside of class use garna painaa.
        cout<<endl;
    }
};

class Derived5: public Derived4{
    public:
    void showVariablesDerived5(){
        cout<<endl;
        cout<<"Derived5 Class Variables:"<<endl;
        showVariablesDerived4();
        // cout<<"Public Variable: "<<publicVariable<<endl; // Yo hami access garna sakdainau kina bhane yo public variable ho yo derived ra ouside of class use garna painaa.
        // cout<<"Protected Variable: "<<protectedVariable<<endl; // Yo hami access garna sakdainau kina bhane yo protected variable ho yo derived ra ouside of class use garna painaa.
        // cout<<"Private Variable: "<<privateVariable<<endl; // Yo hami access garna sakdainau kina bhane yo private variable ho yo derived ra ouside of class use garna painaa.
        cout<<endl;
    }
};

// class Derived1: public Derived{
//     // yo class Derived1 le Derived class lai inherit gareko cha, tara Base class lai inherit gareko chaina.
//     // yo class Derived1 le Base class ko public ra protected variable lai access garna sakcha, tara private variable lai access garna sakdaina.
//     // tesaile showVariables function ma Base class ko private variable lai access garna sakdaina.
//     // yo class Derived1 le Base class ko publicVariable ra protectedVariable lai access garna sakcha, tara privateVariable lai access garna sakdaina.  
//     public:
//     // void showVariables(){
//     //     cout<<"Public Variable:"<<publicVariable<<endl; 
//     //     cout<<"Protected Variable:"<<protectedVariable<<endl;
//     // }
// };

int main() {
    
    Base b;
    Derived d;
    Derived1 d1;
    Derived2 d2;
    Derived3 d3;
    Derived4 d4;
    Derived5 d5;


    b.showVariables();
    d.showVariables();
    d1.showVariables();
    d2.showVariables();
    d3.showVariablesDerived3();
    d4.showVariablesDerived4();
    d5.showVariablesDerived5();

    
    return 0;
}