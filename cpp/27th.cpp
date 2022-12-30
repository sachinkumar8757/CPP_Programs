#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int number=num;
    int reverse=0;
    while(num>0)
    {
        int r=num%10;
        reverse=reverse*10+r;
        num=num/10;
    }
    if(number==reverse)
    {
        cout<<"number is pallindrome";
    }
    else{
        cout<<"number is not pallindrome";
    }
}