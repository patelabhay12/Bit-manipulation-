#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter your number "<<endl;
    cin>>num;
    int i;
    // Right Shift Operator for Dividing by 2
    cout<<"After Dividing By 2 in num  integer division "<<endl;
    cout<<(num>>1)<<" ";
    
    cout<<endl;

    // left Shift Operator for multiplying By 2
    cout<<"After Multiplying By 2 in num"<<endl;
    cout<<(num<<1)<<" ";
   
    
    return 0;
}