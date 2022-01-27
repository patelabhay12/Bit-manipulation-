#include<iostream>
using namespace std;
void printOdd(int num )
{
    int i;
    for(i=10;i>=0;--i)
    {
        cout<<((num>>i)& 1);
    }
    cout<<endl;
    if(num & 1)
        {
            cout<<"odd "<<endl;
        }
    else{
        cout<<"Even "<<endl;
    }
}
int main()
{
    int num;
    cout<<"Enter your number "<<endl;
    cin>>num;
    printOdd(num);
}