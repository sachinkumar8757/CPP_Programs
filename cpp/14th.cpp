#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter any year: ";
    cin>>year;
    if(year%400==0)
    {
        cout<<"it is leap year";
    }
    else if(year%100==0)
    {
        cout<<"it is not leap year";
    }
    else if(year%4==0)
    {
        cout<<"it is leap year";
    }
    else{
        cout<<"it is not leap year";
    }
    return 0;
}