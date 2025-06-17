#include<iostream>
#include<string.h>

    using namespace std;

    class Employee{
        private:
        int empId;
        string empName;
        float empSalary;

        public:
        void setData(int empId, string empName, float empSalary){
            this->empId = empId;
            this->empName = empName;
            this->empSalary = empSalary;
        }

        int getEmpId(){
            return empId;
            }

            string getName(){
                return empName;
            }

        void getData()
        {
            cout<<"Enter the Employee ID: ";
            cin>>empId;

            cout<<"Enter the Employee Name: ";
            cin>>empName;

            cout<<"Enter the Employee Salary: ";
            cin>>empSalary;
        }

        void displayData(){
            cout<<"The Employee ID is: "<<empId<<endl;
            cout<<"The Employee Name is: "<<empName<<endl;
            cout<<"The Employee Salary is: "<<empSalary<<endl;
        }

        void updateData(){
            cout<<"Enter ID: ";
            cin>>empId;
            cout<<"Enter Name: ";
            cin>>empName;
            cout<<"Enter Salary: ";
            cin>>empSalary;

            cout<<"Updation successfull"<<endl;
        }
        };

    int main()
    {
        int size;

        cout<<"Enter the total number of employee (size): ";
        cin>>size;

        Employee emp[size];

        int num;
        int id;
        string name;


        for (int i = 0; i < size; i++)
        {
            emp[i].getData();
        }

        
        cout<<endl<<"Select the option for manage: "<<endl;
        cout<<"Enter 1 to display the data of all employees"<<endl;
        cout<<"Enter 2 to search the data of a specific employee"<<endl;
        cout<<"Enter 3 to update the data of an employee"<<endl;
        cout<<"Enter 4 to delete the data of an employee"<<endl;
        cout<<"Enter 5 to exit"<<endl;
        cin>>num;
        

        if (num == 1)
        {
            cout<<"------------The Employee Details are------------"<<endl<<endl;
            for (int i = 0; i < size; i++)
            {
                emp[i].displayData();
            }
        }

        else if(num == 2){
            cout<<"Enter the Employee ID to search: ";
            cin>>id;

            cout<<"The Searched Employee details:"<<endl;

            for (int i = 0; i < size; i++)
            {
                if (emp[i].getEmpId() == id){
                    emp[i].displayData();
                }
            }  
        }

        else if(num == 3){
            cout<<"Enter the id of employee to update info: ";
            cin>>id;

            for (int i = 0; i < size; i++)
            {
                if (emp[i].getEmpId() == id){
                    emp[i].updateData();
                    emp[i].displayData();
                }
            } 

        }

        else if(num == 4){

        }
        else if(num == 5){
            exit(0);
        }

        return 0;
    }