#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number in decimal form: ";
    cin>>n;
    int a[10];
    int i=-1;
    while(n>0)
    {
        int r=n%8;
        i=i+1;
        a[i]=r;
        n=n/8;
    }
    cout<<"In octal it is :";
    for(int p=i;p>=0;p--)
    {
        cout<<a[p];
    }
    return 0;
}