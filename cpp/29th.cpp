#include<iostream>
using namespace std;
 void prime(int n1,int n2)
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
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    prime(a,b);
    return 0;
}