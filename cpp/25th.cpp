#include<iostream>
using namespace std;
int main()
{
    int num,reverse=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0)
    {
        int rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    cout<<"after reverse number is: "<<reverse;
}