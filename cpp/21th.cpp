#include<iostream>
using namespace std;
int main()
{
    int num1,num2,gcd=1;
    cout<<"Enter two number: ";
    cin>>num1>>num2;
    for(int i=1;i<=num1&&num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    cout<<"GCD is: "<<gcd;
}