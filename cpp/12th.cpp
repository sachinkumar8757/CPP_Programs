#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter 3  integer number: ";
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<<num1<<" is greater number";
    }
    else if(num2>num1 && num2>num3)
    {
        cout<<num2<<" is greater number";
    }
    else{
        cout<<num3<<" is greater number";
    }
}