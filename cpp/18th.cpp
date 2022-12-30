#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any positive integer: ";
    cin>>num;
    int n=num;
    int fact=1;
    while(num>0)
    {
        fact=fact*num;
        num--;
    }
    cout<<"Factorial of "<<n<<" is = "<<fact;
    return 0;
}