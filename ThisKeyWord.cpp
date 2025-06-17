#include<iostream>
    using namespace std;

    class A{
        int a;

        public:
        void setData(int a){
            this->a = a;
        }

        void getData(){
            cout<<"The value of a = "<<a<<endl;
        }
    };

    int main()
    {
        A obj;

        obj.setData(10);
        obj.getData();

        return 0;
    }