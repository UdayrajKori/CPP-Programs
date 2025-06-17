#include<iostream>
using namespace std;

class Sum {
    private:
        int n1, n2;

    public:
        void setNumber(int a, int b){
            n1 = a;
            n2 = b;
        }

        int getSum(){
            return n1 + n2;
        }
};

int main()
{
    Sum s;
    int a = 10, b = 20;

    s.setNumber(a, b);
    int sum = s.getSum();

    cout << "Sum ===> " << sum << endl;

    return 0;
}
