#include<iostream>
using namespace std;
void fact(int n)
{
    int f=1;
    if(n<0)
    {
        cout<<"factorial is not possible";
    }
    else{
        for(int i=1;i<=n;i++)
        {
            f=f*i;
        }
    }
    cout<<f<<" ";
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fact(n);
    return 0;
}