#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    int count=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"Number is prime";
    }
    else{
        cout<<"Number is not prime";
    }
}