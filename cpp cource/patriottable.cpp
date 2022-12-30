#include<iostream>
using namespace std;
int fact (int n)
{
   int f=1;
   for(int i=2;i<=n;i++)
   {
      f=f*i;
   }
   return f;
}
int main()
{
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int ans=fact(i)/(fact(i-j)*fact(j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}