#include<iostream>
#include<math.h>
using namespace std;
void prime(int start,int end)
{
    for(int p=start;p<=end;p++)
    {
        int flag=0;
    for(int i=2;i<=sqrt(p);i++)
    {
        if(p%i==0)
        {
            flag =1;
        }
    }
    if(flag==0)
    {
        cout<<p<<" ";
    }
}
}
int main()
{
  prime(5,17);
}