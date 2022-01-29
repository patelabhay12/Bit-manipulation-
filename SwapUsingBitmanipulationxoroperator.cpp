#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Imp 
    // x ^ x= 0
    // X ^ 0 =x
    int a=4 ,b=6;
    a=a^b;
    b=b^a;// b-->a

    // b1=b ^ (a^b) ==b^ b ^ a

    // Prperties of XOR 
    // a^b^c=A^c^b=c^a^b

    a=a ^ b; // a--> b

    // a= (a ^ a) ^ ==> a ^ a ^ b --> b



    cout<< a << " " << b << endl;


}