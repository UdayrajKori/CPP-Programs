#include<iostream>
using namespace std;

    class Student{
        public:

        int rollno;
        string name;
        static int count;

       void takeData(){
        cout<<"Enter the roll no.: ";
        cin>>rollno;
        cout<<"Enter the name: ";
        cin>>name;
        count++;
        cout<<"The number of member: "<<count<<endl;
       }

        void displayData(){
            cout<<"The number of member: "<<count<<endl;
        }

        // static void displayStaticFun(){
        //     cout<<"Hi, i am static function"<<endl;
        // }

        // ~Student(){
        //     cout<<"Hi, i am distructor"<<endl;
        // }
    };

    int Student::count;

    int main()
    {
        Student obj1, obj2, obj3;

        obj1.takeData();
        obj2.takeData();
        obj3.takeData();

        obj3.displayData();

        // obj.displayData();
        // obj.displayStaticFun();

        return 0;
    }