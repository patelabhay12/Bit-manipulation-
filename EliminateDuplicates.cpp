#include<bits/stdc++.h>
using namespace std;
/*
* Given array a of n integers All integers 
* are present in event count except one.
* Find that one Integr which has odd count
* In 0(N) time complexity and 0(1) space;**/

// in this Problem We will take all elements XOR all same Number will convert in ZERO by the properties of The XOR Oprator 
// A ^ A =0 A ^ 0= A

// c ^ a ^ b ^ c ^ b --> c ^ a ^ c ^ b ^ b ## same same will convert into Zero and None Smae will remain same of left in the array
                  // -->c ^ a ^ c^ 0
                  // --> c ^ c ^ a
                  // -->0^a
                  // --> a // which is not Even count in array 
int main()
{
    int A[11]={2,2,3,4,4,6,7,6,6,6,7};
    int i=0;
    int ans=0;
    for(i=0;i<11;i++)
    {
        ans=ans^A[i];
    }
    cout<<ans<<endl;
    return 0;
}