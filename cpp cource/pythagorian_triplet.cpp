#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter three number:";
    cin>>n1>>n2>>n3;
    int  n1s=n1*n1;
    int n2s=n2*n2;
    int n3s=n3*n3;
    if(n1s==n2s+n3s ||n2s==n1s+n3s ||n3s==n1s+n2s)
    {
        cout<<"yes it is pythagorian triplet";
    }
    else{
        cout<<"it is not pythagorian triplet";
    }
    return 0;
}