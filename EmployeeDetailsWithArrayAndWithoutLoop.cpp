#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
    float salary;

    void TakeInfo() {
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Salary: ";
        cin>>salary;
    }

    void display() {
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};

void Looping(Employee emp[], int index, int total) {
    if (index >= total) return;

    cout << "Enter details for Employee " << (index + 1) << ":"<<endl;
    emp[index].TakeInfo();

    cout << "Employee " << (index + 1) << " Details:"<<endl;
    emp[index].display();

    Looping(emp, index + 1, total);
}


int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n]; 

    Looping(emp, 0, n); 

    return 0;
}
