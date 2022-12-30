#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    int lcm=1,i=2;
    cout<<"Enter two positive number: ";
    cin>>num1>>num2;
    while(i<=num1&&num2)
    {
        if(num1%i==0 && num2%i==0)
        {
            lcm=lcm*i;
            num1=num1/i;
            num2=num2/i;
            continue;
        }
        i++;
    }
    cout<<"LCM= "<<lcm*num1*num2;
}