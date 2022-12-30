#include<iostream>
using namespace std;
int prime(int n1,int n2)
{
    for(int i=n1;i<=n2;i++)
    {
        int flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n1,n2;
    cout<<"Enter interval: ";
    cin>>n1>>n2;
    cout<<"Prime number between "<<n1<<" and "<<n2<<" : ";
    prime(n1,n2);
    return 0;
}