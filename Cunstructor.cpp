#include<iostream>

    using namespace std;

    class Employee{
        private: 
        int empId;

        public:
        Employee() : Employee(1, 2){
            cout<<"Default constructor is called"<<endl;
        }

        Employee(int empId) : Employee(){
            cout<<"Constructor with one parameter called"<<endl;
        }

        Employee(int empId1, int empId2){
            cout<<"Constructor with two parameters called"<<endl;
        }


    };

    int main()
    {
        Employee emp(10);

        return 0;
    }