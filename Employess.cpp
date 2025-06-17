#include<iostream>
    using namespace std;

    class Employee{
        private: 
        int empId;
        string empName;

        public:

            void setEmpId(int id){
                empId = id;
            }

            int getEmpId(int id){
                return empId;
            }

            void setEmpName(string name){
                empName = name;
            }

            string getName(string name){
                return empName;
            }
    };


    int main()
    {
        int id = 10;
        string name = "Uday";

        Employee emp;

        emp.setEmpId(id);
        emp.setEmpName(name);

        cout<<"Employee Id ===>"<<id<<endl;
        cout<<"Employee Name ===>"<<name<<endl;

        return 0;
    }