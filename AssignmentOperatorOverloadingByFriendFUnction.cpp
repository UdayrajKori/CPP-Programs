#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    friend Number operator*(Number n1, Number n2);

    void display() {
        cout<<"Result = "<<value<<endl;
    }
};

Number operator*(Number n1, Number n2) {
    return Number(n1.value * n2.value);
}

int main() {
    Number a(4), b(5);
    Number result = a * b; 
    result.display();       

    return 0;
}
