#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    string address;
    string email;
    string phone;
    
    Person(string name, string address, string email, string phone){
        this->name = name;
        this->address = address;
        this->email = email;
        this->phone = phone;
    }
    Person(){
        cout<<"Default cunstructor of person"<<endl;
    }
};

class Student: public Person {
    public:
    int rollno;
    int age;

    Student(int rollno, int age):Person(name, address, email, phone){
        this->rollno = rollno;
        this->age = age;
    }

    Student():Person() {
        cout<<"Default constructor of student"<<endl;
    }
};

class Teacher: public Person {
    public:
    // string name;
    // string address;
    // string email;
    // string phone;

    int id;
    float salary;

    Teacher(int id, float salary):Person(name, address, email, phone){
        this->id = id;
        this->salary = salary;
    }

    Teacher():Person() {
        cout<<"Default constructor of teacher"<<endl;
    }

};

class Staff: public Person {
    public:
    // string name;
    // string address;
    // string email;
    // string phone;
    string department;

    float salary;

};

    int main()
    {
        Student st;
        Teacher t;

        return 0;
    }