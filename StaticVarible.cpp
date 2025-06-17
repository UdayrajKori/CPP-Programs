#include<iostream>
using namespace std;

    class Student{
        public:
        int rollno;
        string name;
        static string collegeName;

        void display()
        {
            cout<<"Student roll no.: "<<rollno<<endl;
            cout<<"Student name: "<<name<<endl;
            cout<<"Student college name: "<<collegeName<<endl;
        }
    };

    string Student::collegeName = "KU Radiant";

    int main()
    {
        Student s1;
        Student s2;
        Student s3;

        s1.rollno = 1;
        s1.name ="Krishna";
        // s1.collegeName = "IIT Kanpur";

        s2.rollno = 2;
        s2.name ="Uday";

        s3.rollno = 3;
        s3.name ="Raj";
        // s3.collegeName = "IIT Delhi";

        s1.display();
        s2.display();
        s3.display();

        return 0;
    }