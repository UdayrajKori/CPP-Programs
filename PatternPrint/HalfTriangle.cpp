#include<iostream>
using namespace std;
  
  int main()
  {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int i = n+1; i < n; i++)
        {
            cout<<"* ";
        }
        cout<<"* ";
        cout<<endl;
    }
    
    return 0;
  }