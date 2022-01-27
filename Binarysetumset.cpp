#include<bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for(int i=10; i>=0;--i)
    {
        //cout<<i<<endl;
        // Fro finding Biniary number of any number using rigth shift operator 
        cout<<((num>>i)&1)<<endl;
    }
    cout<<endl;
}
int main()
{
    int a=13;
    printBinary(a);
    int i=3;
    if((a & (1<<i)) != 0)
    {
        cout<< "Set bit \n";
    }
    else{
        cout<<"Not set bit\n";
    }

    // Checking 1st Bit is set or Not 
    printBinary(a | (1<<1));

    // Checking 3rd bit is unset 
    printBinary(a &(~(<<3)));


    // Toggle means on or of checking 
    printBinary(a ^ (1<<2));
    printBinary(a ^ (1<<3));

    int ct=0;
    for(int i=31;i>=0;--i)
    {
        if((a & (i<<i)) !=0)
        {
            ct++;
        }
    }
    cout << ct <<endl;

    cout<< __builtin_popcount(a)<<endl;
    cout<<__builtin_popcountll((1ll<<35)-1);
}