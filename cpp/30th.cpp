#include<iostream>
using namespace std;
int main()
{
    int num,r;
    cout<<"Enter a number: ";
    cin>>num;
    int sum=0;
    int number=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
    if(number==sum)
    {
        cout<<"Number is Armstrong number";
    }
    else{
        cout<<"it is not a armstrong number";
    }
    return 0;
}