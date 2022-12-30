#include<iostream>
using namespace std;
int fact(int n)
{
    if(n<=1)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter number whose factorial has to be find: ";
    cin>>n;
    int ans=fact(n);
    cout<<"Factorial of "<<n<<" is "<<ans;
    return 0;
}