#include<bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    int i;
    for(i=10;i>=0;--i)
    {
        cout<< ((num >> i) & 1); 
    }
    cout<<endl;
}
int main()
{
    /*for(char c='A'; c<='E';c++)
    {
        cout<<c<<endl;
        printBinary(int(c));
    }
    for(char c='a'; c<='e';c++)
    {
        cout<<c<<endl;
        printBinary(int(c));
    }*/
    char A='a';
    // For Uppercase to Lowercase Conversion 
    // Note : This can also perform by doing or operation by uppercase letter and space Binary representation
    char a= A | (1<<5);
    cout<<char(a)<<endl;

    // For Lowercase to Uppercase Conversion 
    // Note : This Can also perform by doing and operation by lowercase letter and underscre 
    cout<< char( a & (~(1<<5)))<<endl;
    
    // For the conversion of Lowercase to Upppercasee We Do and operatio  by the Binary representation of underscore We will get Lowercase latter to uppercase letter 
    printBinary(int('_'));

    //Binary representation of space is
    printBinary(int(' '));
    //or 
    cout<<char(1<<5)<<endl;// Output of this line will be a space means the binary representation of a space is 1<<5 means if we perform or operation by it to a uppercase letter it will convert in lowercase latter definatily
    

    



}