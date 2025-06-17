// #include <iostream>
// using namespace std;
    
// class Base {
//     private:
//         int privateVariable;
//     protected:
//         int protectedVariable;
//     public:
//         int publicVariable;

//         void setData(int x, int y, int z){
//             privateVariable = x;
//             protectedVariable = y;
//             publicVariable = z;
//         }

//         void getData(){

//             cout<<"Value of privateVariable = "<<privateVariable<<endl;
//             cout<<"Value of protectedVariable = "<<protectedVariable<<endl;
//             cout<<"Value of publicVariable = "<<publicVariable<<endl;
//         }
   
// };

// int main() {
//     Base obj;

//     obj.setData(10, 20, 30);
//     obj.getData(); 
    
//     return 0;
// }

#include <iostream>
using namespace std;
    
class Base {

    private:
        int privateVariable;
    protected:
        int protectedVariable;
    public:
        int publicVariable;
    
};

class Derived: private Base {
    private:
        int protectedVariable;
    private:
        int publicVariable;
    public:

     void setData(int x, int y, int z) {
         // Cannot access privateVariable directly
         // privateVariable = x; // Error: 'privateVariable' is private within this context
         protectedVariable = y; // Can access protected member
         publicVariable = z; // Can access public member
     }

};

int main() {
    
    
    
    return 0;
}