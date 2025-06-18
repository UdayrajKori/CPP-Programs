// #include <iostream>
// using namespace std;
    
// class Unary {
//     private:
//     int num;

//     public:
//     Unary(int num){
//         this->num = num;
//     }

//     int Increase(Unary u){
//         return u.num + 1;
//     }
// };

// int main() {
    
//     Unary obj1(1);
//     Unary obj2(5);

//     int result = obj1.Increase(obj2);
//     cout<<"The value = "<<result<<endl;

//     return 0;
// }










#include <iostream>
using namespace std;

class Unary {
private:
    int num;

public:
    Unary(int num) {
        this->num = num;
    }

    Unary operator++() {
        return num = num + 1;
    }

    void display() {
        cout << "Value: " << num << endl;
    }
};

int main() {
    Unary obj(3);

    cout << "Before Increment: ";
    obj.display();

    ++obj;

    cout << "After Increment: ";
    obj.display();

    return 0;
}
