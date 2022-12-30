#include<iostream>
using namespace std;
int main()
{
    int num,pow;
    int value=1;
    cout<<"Enter number and there power: ";
    cin>>num>>pow;
    for(int i=1;i<=pow;i++)
    {
        value=value*num;
    }
    cout<<num<<" power "<<pow<<" is : "<<value;
}