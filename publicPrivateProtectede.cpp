#include <iostream>
using namespace std;
    
class Base {
   public:
    int publicVariable;

    private:
    int privateVariable;

    protected:
    int protectedVariable;
    
};

class Derived:protected Base{
    
};

class Child:  Base{

};

int main() {
    
    Derived baseObj;
  
    
    return 0;
}