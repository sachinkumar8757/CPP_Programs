#include<iostream>
using namespace std;
int main()
{
    float num;
    cout<<"Enter any number :";
    cin>>num;
    if(num==0)
    {
        cout<<"it is zero";
    }
    else if(num>0)
    {
        cout<<"it is positive number";
    }
    else{
        cout<<"it is negative number";
    }
    return 0;
}