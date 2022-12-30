#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    int sum;
    cout<<"Enter interval: ";
    cin>>n1>>n2;
    cout<<"all armstrong number between "<<n1<<" and "<<n2<<endl;
    for(int i=n1;i<=n2;i++)
    {
        sum=0;
        int temp=i;
        while(temp>0){
        int r=temp%10;
        sum=(sum+(r*r*r));
        temp=temp/10;
        }
       if(sum==i)
       {
        cout<<i<<" ";
       }
    }
    return 0;
}