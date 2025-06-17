#include <iostream>
using namespace std;
    
class Base {
    private:
        int privateVariable;
    protected:
        int protectedVariable;
    public:
        int publicVariable;

        int getData(){
            return protectedVariable;
        }
    // public      // void setPrivateData(int x){
    //     //     privateVariable = x;
    //     // }

    //     // int getPrivateData(){
    //     //     return privateVariable;
    //     // }
};

class Derived: private Base {
    private:
    int privateVariable;

    public:
    


    void setData(int x){
        protectedVariable = x;
    }

  int getProtectedData(){
    return getData();
  }


};

int main() {
    Base baseObj;
    Derived obj;
    obj.setData(10);
    cout<<"Protected Variable => "<<obj.getProtectedData()<<endl;

    // obj.setPrivateData(20);
    // cout<<"Private Variabel => "<<baseObj.getPrivateData()<<endl;


    // obj.setPrivateData(20);
    // cout<<"Private Variable => "<<obj.getPrivateData()<<endl;
    
    
    return 0;
}

// variable shrinking and whitingng


